/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:56:11 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/06 19:53:44 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		for (int i = 1; argv[i] != NULL; i++)
		{
			for(int j = 0; argv[i][j] != '\0'; j++)
			{
				std::cout<<static_cast<char>(std::toupper(argv[i][j]));
			}
			if (argv[i + 1])
				std::cout <<" ";
			else
				std::cout <<std::endl;
		}
	}
	return 0;
}
