/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:27:46 by rliu              #+#    #+#             */
/*   Updated: 2022/09/26 18:05:40 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int  initial_deposit) : _amount(initial_deposit){
	Account::_totalAmount += this->_amount;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals=0;
	
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex \
	<< ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void){
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void){
	return Account::_totalAmount;
}

int Account::getNbDeposits(void){
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void){
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void){
		Account::_displayTimestamp();
		std::cout << " accounts:" << Account::getNbAccounts()\
		<< ";total:" << Account::getTotalAmount() \
		<< ";deposits:" << Account::getNbDeposits()\
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout  << " index:" << this->_accountIndex\
	<< ";amount:" << this->_amount \
	<< ";deposits:" << this->_nbDeposits\
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	int p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount <<";deposit:" << deposit <<";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	int p_amount;

	p_amount = this->_amount;
	Account::_displayTimestamp();
	if (this->_amount < withdrawal){
		std::cout  <<  " index:" << this->_accountIndex\
		<< ";p_amount:" << p_amount <<";withdrawal:refused" << std::endl;
		return (0);
	}
	else{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << " index:" << this->_accountIndex\
		<< ";p_amount:" << p_amount <<";withdrawal:" << withdrawal\
		<<";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (1);
}

void Account::_displayTimestamp(void){
	time_t timenow;
	struct tm *timeinfo;
	char	buffer[80];
	
	time (&timenow);
	timeinfo = localtime(&timenow);

	strftime(buffer, 80, "[%Y%m%d_%H%M%S]", timeinfo);

	std::cout << buffer;
}
/*void Account::_displayTimestamp(void){
	time_t timenow;
	struct tm * timeinfo;
	
	time (&timenow);
	timeinfo = localtime (&timenow);
	std::cout <<"[" << (1900 + timeinfo->tm_year);
	if (timeinfo->tm_mon < 10)
		std::cout << 0; 
	std::cout << (timeinfo->tm_mon);
	if (timeinfo->tm_mday < 10)
		std::cout << 0; 
	std::cout << timeinfo->tm_mday << "_";
	if (timeinfo->tm_hour < 10)
		std::cout << 0; 
	std::cout << timeinfo->tm_hour;
	if (timeinfo->tm_min < 10)
		std::cout << 0; 
	std::cout << timeinfo->tm_min;
	if (timeinfo->tm_sec < 10)
		std::cout << 0; 
	std::cout << timeinfo->tm_sec << "]";
}*/

//this is for the test
/*void Account::_displayTimestamp(void){
	std::cout << "[19920104_091532]";
}*/
