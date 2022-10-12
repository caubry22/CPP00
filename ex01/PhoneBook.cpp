/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caubry <caubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:15:24 by caubry            #+#    #+#             */
/*   Updated: 2022/10/12 11:42:09 by caubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	
	this->nb_contact = 0;
	
};

PhoneBook::~PhoneBook( void ) {
	
};

void	PhoneBook::add() {
	
	std::string		infos[5] = {"le prenom", "le nom", "le surnom", "le numero", "le darkest secret"};
	
	for(int i = 0; i < 5; i++)
	{	
		std::string		data;
		int				empty = 1;
		
		while (empty)
		{
			std::cout << "Entrez " << infos[i] << " du contact : ";
			getline(std::cin, data);
			if (std::cin.eof())
			{
				std::cout << std::endl;
				return ;
			}
			else if (data.empty() || data.find_first_not_of(" ") == std::string::npos)
				std::cout << "Le champs ne peut pas etre vide" << std::endl;
			else if (i == 3 && data.find_first_not_of("0123456789") != std::string::npos)
				std::cout << "le numero n'est pas valide" << std::endl ;
			else
				empty = 0;
		}
		this->contact[(this->nb_contact % 8)].__choose_field(i, data);
	}
	this->nb_contact++;
	return ;
};

int		PhoneBook::__invalid_index(std::string index, int nb_registered)
{
	if (index.empty())
	{
		std::cout << "L'index est obligatoire." << std::endl;
		return (1) ;
	}
	if (index.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "L'index doit etre un chiffre." << std::endl;
		return (1);
	}
	if (std::stoi(index) > nb_registered)
	{
		std::cout << "Ce contact n'existe pas" << std::endl;
		return (1);
	}
	return (0);
};

void	PhoneBook::search() {
	
	std::string		index;
	int				nb_registered;
	
	this->nb_contact > 8 ? nb_registered = 8 : nb_registered = this->nb_contact;
	if (this->nb_contact == 0)
	{
		std::cout << "Il n'y a aucun contact enregistre pour le moment" << std::endl;
		return ;
	}
	else {
		std::cout << std::setfill('-') << std::setw(36);
		std::cout << "" << std::endl;
		for (int i = 0; i < nb_registered; i++)
		{
			this->contact[i].__print_tab(i);
		}
	}
	std::cout << std::setfill('-') << std::setw(36);
	std::cout << "" << std::endl;
	std::cout << "Entrez l'index du contact a afficher : ";
	std::getline(std::cin, index);
	if (__invalid_index(index, nb_registered - 1) == 1)
		return ;
	this->contact[std::stoi(index)].__print_contact();
	return ;
};