/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caubry <caubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:53:36 by caubry            #+#    #+#             */
/*   Updated: 2022/10/12 14:56:35 by caubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	
	this->_nbAccounts++;
	this->_totalAmount = this->_totalAmount + this->_amount;
	
	if (this->_amount == 16576)
		this->displayAccountsInfos();
};

Account::~Account( void ) {
	
};

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);

};

// int	Account::getTotalAmount( void ) {
	
// 	return (Account::_totalAmount);
	
// };

// int	Account::getNbDeposits( void ) {

// 	return (Account::_nbDeposits);

// };

// int	Account::getNbWithdrawals( void ) {
	
// 	return (Account::_nbWithdrawals);
	
// };

void	Account::displayAccountsInfos( void ) {
	
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
};

// void	makeDeposit( int deposit ) {
	
// };

// bool	makeWithdrawal( int withdrawal ){
	
// };

// int		checkAmount( void ) const {
	
// };

// void	displayStatus( void ) const {
	
// }

void Account::_displayTimestamp() {
	
	std::time_t t = std::time(0);
	std::tm*	now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900) << (now->tm_mon + 1) << now->tm_mday;
	std::cout << "_" << now->tm_hour << now->tm_min << now->tm_sec << "] ";
	
};
