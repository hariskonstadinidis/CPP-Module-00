/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 16:28:53 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/10 16:59:16 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include <cctype>
#include "../include/Account.hpp"

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;
	
	Account::Account( int initial_deposit ){
		_amount = 0;
		_accountIndex = 0;
		_amount = 0;
		_nbDeposits = 0;
		_nbWithdrawals = 0;
        _amount+= initial_deposit;
		_totalAmount+= initial_deposit;
		_accountIndex = _nbAccounts;
		_nbAccounts++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    }
	
	Account::~Account( void ){
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    }
	
	int	Account::getNbWithdrawals( void ){
		return (_totalNbWithdrawals);
	}

	int	Account::getNbDeposits( void ){
		return (_totalNbDeposits);
	}
	
	int	Account::getTotalAmount( void ){
		return (_totalAmount);
	}
	
	int	Account::getNbAccounts( void ){
		return (_nbAccounts);
	}
	
	void	Account::displayAccountsInfos( void ){
		_displayTimestamp();
		std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits \
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
	}
	
	void	Account::makeDeposit( int deposit ){
		_displayTimestamp();
		_nbDeposits++;
		_totalNbDeposits++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" \
		<< _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
        _amount+= deposit;
		_totalAmount += deposit;
    }
    
	bool	Account::makeWithdrawal( int withdrawal ){
		_displayTimestamp();
		if (_amount < withdrawal){
			std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
			return (0);
		}
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" \
		<< _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount-= withdrawal;
		_totalAmount-= withdrawal;
		return (1);
	}
	
	int		Account::checkAmount( void ) const{
		return (_amount);
	}
	
	void	Account::displayStatus( void ) const{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits \
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
	}
	
	void Account::_displayTimestamp(void)
	{
		std::time_t now = std::time(NULL);
		std::tm *timeInfo = std::localtime(&now);
		char buffer[20];

		std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeInfo);
		std::cout << buffer;
	}