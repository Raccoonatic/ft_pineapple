/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_instr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:37:58 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/15 21:16:39 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		instr_count(char *str);
int		char_val(char *str);
char	*instr_array_gen(char *str);
int		instr_mix_val(char *str);

int	instr_count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (i != 31)
	{
		write(1, "Invalid_instructions\n", 22);
		write(1, "\nYou have entered an invalid number of instructions\n", 53);
		write(1, "\n   Please remember:\n", 22);
		write(1, "All instructions must be single digits\n", 39);
		write(1, "All instructions must be a number between 1 and 4\n", 51);
		write(1, "All instructions must be separated by a space\n", 54);
		write(1, "You must provide a total of 16 instructions\n\n", 46);
		write(1, "You may run the program without any arguments", 46);
		write(1, " for further execution guidelines\n", 34);
		return (3);
	}
	return (1);
}

int	char_val(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 49 && str[i] <= 52) || (str[i] == 32))
		{
			i++;
		}
		else
		{
			write(1, "Instructed_character_Unknown\n", 30);
			write(1, "\nYou have entered an invalid character\n", 41);
			write(1, "\n   Please remember:\n", 22);
			write(1, "All instructions must be single digits\n", 39);
			write(1, "All instructions must be a number between 1 and 4\n", 51);
			write(1, "All instructions must be separated by a space\n", 54);
			write(1, "You must provide a total of 16 instructions\n\n", 46);
			write(1, "You may run the program without any arguments", 46);
			write(1, "for further execution guidelines\n", 34);
			return (3);
		}
	}
	return (1);
}

char	*instr_array_gen(char *str)
{
	int			index;
	int			guide;
	static char	vessel[17];

	index = 0;
	guide = 0;
	while (str[index])
	{
		if (str[index] != 32)
		{
			vessel[guide] = str[index];
			guide++;
		}
		index++;
	}
	vessel[guide] = '\0';
	return (vessel);
}

int	instr_mix_val(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] != 50 && (i <= 3
						|| (i >= 8 && i <= 11))) && (str[i] == str[i + 4]))
			|| (((i <= 3 || (i >= 8 && i <= 11))
					&& (str[i] == 52 && str[i + 4] != 49))
				|| (((i >= 4 && i <= 7) || (i >= 12 && i <= 15))
					&& (str[i] == 52 && str[i - 4] != 49)))
			|| (((str[i] == 49 && str[i] != str[i + 8])
					&& (i == 0 || i == 7)) || ((str[i] == 49
						&& str[i] != str[i + 9]) && i == 3)
				|| ((str[i] == 49 && str[i] != str[i + 7]) && i == 4)))
		{
			write(1, "Invalid_istr_mix\n", 17);
			return (3);
		}
		i++;
	}
	return (1);
}

int	validate_instr(int argc, char *argv[])
{
	int		guide;
	char	*instr_vesel;

	guide = 0;
	if (argc != 2)
	{
		write(1, "Incorrect_argument_number\n", 26);
		write(1, "\nPlease execute the program following this example:\n", 54);
		write(1, "\n./rush-01 “col1north col2north col3north col4north ", 55);
		write(1, "col1south col2south col3south col4south ", 40);
		write(1, "row1west row2west row3west row4west ", 36);
		write(1, "row1east row2east row3east row4east\"\n", 38);
		return (1);
	}
	instr_vesel = instr_array_gen(&argv[1][0]);
	if ((instr_count(&argv[1][0]) + char_val(&argv[1][0]) +
				instr_mix_val(instr_vesel)) != 3)
	{
		return (1);
	}
	return (0);
}
