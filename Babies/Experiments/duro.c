/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:06:41 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/07 18:12:25 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void CatCall(void)
{
	char name[100];
	char reply[100];
	char reply2[100];
	char reply3[100];
	char st;
	st = '.';
	
	printf("Quien es un duro?\n\n");

	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';

	printf("Si verdad? %s Es tremendo pana\n\n", name);

        fgets(reply, sizeof(reply), stdin);
        reply[strcspn(reply, "\n")] = '\0';

	printf("En serio? Bestial! \nMandale mis felicitaciones%c\n\n", st);
        
	fgets(reply2, sizeof(reply2), stdin);
        reply2[strcspn(reply2, "\n")] = '\0';

	printf("Preguntale que va a comer de postre, \nme imagino que torta no%c\n\n", st);
	
	fgets(reply2, sizeof(reply3), stdin);
        reply3[strcspn(reply3, "\n")] = '\0';
	
	printf("No me mandes a callar carajito'el coño%c\n\n", st);
	return;
	}
int main(void)
{
	CatCall();
	return(0);
}
