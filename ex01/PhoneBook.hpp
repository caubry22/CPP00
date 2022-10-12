/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caubry <caubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:02:06 by caubry            #+#    #+#             */
/*   Updated: 2022/10/11 19:01:26 by caubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include "Contact.hpp"

class PhoneBook {
	
public:
	
	PhoneBook( void );
	~PhoneBook( void );

	void	add();
	void	search();

private:

	Contact	contact[8];
	int		nb_contact;

	int		__invalid_index(std::string index, int nb_registered);

};

#endif