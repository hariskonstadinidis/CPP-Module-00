/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 16:28:53 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/09 17:54:41 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <cctype>
#include "Account.hpp"

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;
	// static void	displayAccountsInfos( void );
    // static int	getNbAccounts( void );
	// static int	getTotalAmount( void );
	// static int	getNbDeposits( void );
	Account::Account( int initial_deposit ){
		_amount = 0;
		_accountIndex = 0;
		_amount = 0;
		_nbDeposits = 0;
		_nbWithdrawals = 0;
        makeDeposit(initial_deposit);
		_accountIndex = _nbAccounts;
		_nbAccounts++;
		std::cout << "Opened" << std::endl;
    }
	
	Account::~Account( void ){
        std::cout << "Closed" << std::endl;
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
	
	void	displayAccountsInfos( void ){
		 std::cout << "Closed" << std::endl;
	}
	
	void	Account::makeDeposit( int deposit ){
        _amount+= deposit;
		_totalAmount += deposit;
    }
    
	int		Account::checkAmount( void ) const{
		return (_amount);
	}
	
	// bool	makeWithdrawal( int withdrawal );
	// void	displayStatus( void ) const;
