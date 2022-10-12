/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caubry <caubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:01:14 by caubry            #+#    #+#             */
/*   Updated: 2022/10/10 20:53:24 by caubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*__change_toupper(char *str)
{
	int i = -1;

	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int ac, char **av)
{
	int i  = 0;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++i])
			std::cout << __change_toupper(av[i]);
		std::cout << std::endl;
	}
}
