/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:27:46 by rliu              #+#    #+#             */
/*   Updated: 2022/09/21 16:27:52 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
 
Account::Account(int  initial_deposit) : _amount(inital_deposit){
{
	Account::_totalAccounts += _amount;
	this->accountIndex = Account::_nbAccounts
	this->_nbDeposits = 0;
	this->_nbWithdrawll=0;
	std::cout << "[time] "  << "index:" << this->accountIdex << ";amount:" << this->_amount << ";created";
//	std::cout << "[time] " << "account:" << Account::_nbAccount <<";total:" <<
	Account::nbAccounts++;
}

