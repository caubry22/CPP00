/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caubry <caubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:21:55 by caubry            #+#    #+#             */
/*   Updated: 2022/10/11 22:16:06 by caubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int ac, char **av) {
	
	PhoneBook repertoire;
	std::string	commande;
	
	if (ac > 1)
	{
		std::cout << "Aucun argument necessaire" << std::endl;
		return 0;
	}
	while (commande.compare("EXIT") != 0 && !std::cin.eof())
	{
		std::cout << "Entrez une de ces commandes : ADD, SEARCH ou EXIT :" << std::endl;
		std::getline(std::cin, commande);
		if (std::cin.eof())
			return 0;
		if (!commande.compare("ADD"))
			repertoire.add();
		else if (!commande.compare("SEARCH"))
			repertoire.search();
		else if (commande.compare("EXIT"))
			std::cout << "Cette commande n'est pas valide." << std::endl;
	}
	return 0;
};