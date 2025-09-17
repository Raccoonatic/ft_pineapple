#!/bin/bash

# ARCH
arch=$(uname -a)

# CPU Physical
cpuphy=$(grep "physical id" /proc/cpuinfo | wc -l)

# CPU Virtual
cpuvir=$(grep "processor" /proc/cpuinfo | wc -l)

# RAM
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f%%"), $3/$2*100}')

# Disk Space
disk_use=$(df -m | grep -v "tmpfs" | grep "/dev/" | awk '{disk_u += $3} END {print disk_u}')
disk_total=$(df -m | grep -v "tmpfs" | grep "/dev/" | awk '{disk_t += $2} END {printf ("%.0fGb\n"), disk_t/1024}')
disk_percent=$(df -m | grep -v "tmpfs" | grep "/dev/" | awk '{disk_u += $3} {disk_t += $2} END {printf("%.0f%%", disk_u/disk_t*100)}')

# Processor Load
pro_load=$(top -bn2 | grep "%Cpu(s)" | tail -n 1 | sed 's/ni,/ni, /g' | awk '{printf("%.1f%%\n", 100 - $8)}')

# Last Boot
last_boot=$(who -b | awk '$1 == "system" {print $3 " " $4}')

# LVM
lvm=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

# TCP Connections
tcpc=$(ss -ta | grep "ESTAB" | wc -l)

# User Count
user_count=$(users | wc -w)

# Network
ip=$(hostname -I | awk '{print $1}')
macadres=$(ip link | grep "link/ether" | awk '{print $2}')

# Sudo
cmdcnt=$(grep "COMMAND=" /var/log/sudo/sudo_iorecord | wc -l)


wall "«=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#»

        #Architecture: $arch
        #CPU physical: $cpuphy
        #vCPU: $cpuvir
        #Memory Usage: $ram_use/${ram_total}MB ($ram_percent)
        #Disk Usage: $disk_use/${disk_total} ($disk_percent)
        #CPU load: $pro_load
        #Last boot: $last_boot
        #LVM use: $lvm
        #Connections TCP: $tcpc ESTABLISHED
        #User log: $user_count
        #Network: IP $ip ($macadres)
        #Sudo: $cmdcnt cmd

«=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#»"
