#!/bin/bash
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    echoer.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/04 14:38:16 by lde-san-          #+#    #+#              #
#    Updated: 2026/04/04 14:51:40 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NEOR='\001\033[3m\033[38;2;255;153;51m\002'
MINT='\001\033[1;38;2;55;250;133m\002'
ORNG='\001\033[1;38;2;255;153;51m\002'
PURP='\001\033[1;38;2;174;5;252m\002'
PINK='\001\033[1;38;2;255;0;251m\002'
BABY='\001\033[1;38;2;0;255;247m\002'
BLOD='\001\033[1;38;2;255;0;0m\002'
LIME='\001\033[1;38;2;0;255;0m\002'
RSET='\001\033[0m\002'

# Info Flag
if [ "$1" == "-info" ]; then
    echo -e "\t              ${PURP}..*${LIME}#${PINK}>${BABY}--${LIME}>${BABY}>${MINT}===========${BABY}<${LIME}<${BABY}--${PINK}<${LIME}#${PURP}*..${RSET}"
    echo -e "\n 🦝 ${BABY}Thank you  for  getting  the  ${MINT}ECHOER! ${BABY}. A  ${NEOR}Makefile${BABY}-rule-generator  script ${RSET}🦝 \n"
	echo -e "\t              ${PURP}..*${LIME}#${PINK}>${BABY}--${LIME}>${BABY}>${MINT}===========${BABY}<${LIME}<${BABY}--${PINK}<${LIME}#${PURP}*..${RSET}"
    echo -e "\n\t This script  automates  the  conversion  of existing files"
    echo -e "\tinto  ${MINT}Makefile rules${RSET} that dynamically generate said  files."
    echo -e ""
    echo -e "\t This way, instead of tracking  numerous template files, or"
    echo -e "\tclutering  your directory of temporal ones, you  can  embed"
    echo -e "\ttheir content directly inside a ${NEOR}Makefile${RSET}."
	echo -e ""
	echo -e "\t The script reads the provided files,  safely escapes special"
    echo -e "\tcharacters, and appends a ready-to-use rule to the bottom of"
    echo -e "\tthe '${NEOR}Makefile${RSET}' in the current directory. "
    echo -e "\t                           🦝"
    exit 0
fi

if [ $# -eq 0 ]; then
    echo -e "${MINT}Usage: \n\t${BABY}./echoer.sh ${ORNG}<${LIME}file1${ORNG}> [${LIME}file2${ORNG}] [${LIME}file3${ORNG}]${BABY} etc...${RSET}"
    echo -e "${MINT}Or Run: \n\t${BABY}./echoer.sh ${ORNG}<${LIME}-info${ORNG}> ${MINT}for more information.${RSET}"
    exit 1
fi

# File Loop
for file in "$@"; do
    if [ ! -f "$file" ]; then
        echo -e "${BLOD}Error${RSET}: ${MINT}File ${NEOR}'$file' ${MINT}not found. ${BABY}Skipping..."
        continue
    fi

    lines=()
    while IFS= read -r line || [ -n "$line" ]; do
        lines+=("$line")
    done < "$file"
    
    has_header=0
    offset=0
    
    c_head="/* ************************************************************************** */"
    sh_head="# **************************************************************************** #"


	if [ ${#lines[@]} -ge 11 ]; then
        # Condition 1: Header Starts at Line 0
        if [[ ( "${lines[0]}" == "$c_head" || "${lines[0]}" == "$sh_head" ) && "${lines[10]}" == "${lines[0]}" ]]; then
            has_header=1
            offset=0
        # Condition 2: Header Starts at Line 1
        elif [ ${#lines[@]} -ge 12 ]; then
            if [[ ( "${lines[1]}" == "$c_head" || "${lines[1]}" == "$sh_head" ) && "${lines[11]}" == "${lines[1]}" ]]; then
                has_header=1
                offset=1
            fi
        fi
    fi

    # Appending Rule Header to Makefile
    echo "echoe_${file}:" >> Makefile
    echo $'\t@printf "🦝 \\001\\033[3m\\033[38;2;255;153;51m\\002Building '${file}'... 🦝\\n"' >> Makefile
    echo $'\t@> '${file} >> Makefile

    for i in "${!lines[@]}"; do
        raw_line="${lines[$i]}"

        esc_line="${raw_line//\$/\$\$}"
        esc_line="${esc_line//\'/\'\\\'\'}"

        if [ $has_header -eq 1 ] && [ $i -ge $offset ] && [ $i -lt $((11 + offset)) ]; then
            
            rel_i=$((i - offset))
            if [ $rel_i -eq 3 ] || [ $rel_i -eq 5 ] || [ $rel_i -eq 7 ] || [ $rel_i -eq 8 ]; then
                
                # Assign the inner text color
                if [ $rel_i -eq 3 ] || [ $rel_i -eq 5 ]; then
                    color="$MINT"    
                else
                    color="$LIME"     
                fi

                p1="${raw_line:0:5}"
                p2="${raw_line:5:46}"
                p3="${raw_line:51}"

                p1="${p1//\$/\$\$}"; p1="${p1//\'/\'\\\'\'}"
                p2="${p2//\$/\$\$}"; p2="${p2//\'/\'\\\'\'}"
                p3="${p3//\$/\$\$}"; p3="${p3//\'/\'\\\'\'}"

                # Assemble the 3 parts
                echo $'\t@printf "%b%s%b%s%b%s%b\\n" '"'${BABY}' '${p1}' '${color}' '${p2}' '${BABY}' '${p3}' '${RSET}'" >> Makefile
            else
                # Border lines
                echo $'\t@printf "%b%s%b\\n" '"'${BABY}' '${esc_line}' '${RSET}'" >> Makefile
            fi
        fi

        # Print clean text to the destination Makefile
        echo $'\t@printf "%s\\n" '"'${esc_line}' >> ${file}" >> Makefile
    done
    
    if [[ "$file" == *.sh ]]; then
        echo $'\t@chmod +x '"$file" >> Makefile
    fi
    echo $'\t@printf "\\033[0m\\t🦝\\n"' >> Makefile
    echo "" >> Makefile

    echo "✅ Success: Rule 'echoe_${file}' appended to Makefile."
done
