/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caubry <caubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:30:05 by caubry            #+#    #+#             */
/*   Updated: 2022/10/11 19:00:51 by caubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <iomanip> 
#include <string>

class Contact {
	
public:
	
	Contact( void );
	~Contact( void );
	
	void	__choose_field(int i, std::string data);
	void	__print_tab(int i);
	void	__print_contact();

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	void	__printf_line_tab(std::string field);

};

#endif