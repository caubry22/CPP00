/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caubry <caubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:45:48 by caubry            #+#    #+#             */
/*   Updated: 2022/10/11 19:00:23 by caubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	
};

Contact::~Contact( void ) {
	
};

void	Contact::__choose_field(int i, std::string data)
{
	if (i == 0)
		this->first_name = data;
	else if (i == 1)
		this->last_name = data;
	else if (i == 2)
		this->nickname = data;
	else if (i == 3)
		this->phone_number = data;
	else
		this->darkest_secret = data;
	return ;
};

void	Contact::__printf_line_tab(std::string field)
{
	if (field.size() > 10)
		std::cout << field.substr(0,9) << ".";
	else
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << field;
	}
}

void	Contact::__print_tab(int i)
{
		std::cout << "|";
		std::cout << i << "|";
		__printf_line_tab(this->first_name);
		std::cout << "|";
		__printf_line_tab(this->last_name);
		std::cout << "|";
		__printf_line_tab(this->nickname);
		std::cout << "|" << std::endl;
		return ;
};

void	Contact::__print_contact()
{
		std::cout << "Prenom : " << this->first_name << std::endl;
		std::cout << "Nom de famille : " << this->last_name << std::endl;
		std::cout << "Surnom : " << this->nickname << std::endl;
		std::cout << "Numero de telephone : " << this->phone_number << std::endl;
		std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
};

