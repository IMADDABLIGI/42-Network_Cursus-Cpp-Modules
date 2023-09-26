/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:07:52 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/17 15:35:02 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

//-----------------------------------------------------------------------------------//

void Account::_displayTimestamp()
{
	std::time_t now_time_s = std::time(NULL);
	std::tm *local_time = std::localtime(&now_time_s);

    char time_str[100];
    std::strftime(time_str, sizeof(time_str), "%Y%m%d_%H%M%S", local_time);

    std::cout <<  "[" << time_str << "] ";
}

//-----------------------------------------------------------------------------------//

Account::Account(int initial_deposit)
{
	_displayTimestamp();
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
    _nbAccounts++;
    _totalAmount += _amount;
}


void Account::displayAccountsInfos()
{
	_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
        << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void Account::displayStatus( void ) const
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
        << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
    _nbDeposits++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"
        << deposit << ";amount:" << (_amount + deposit) << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
    }
	else
	{
		_nbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal
			<< ";amount:" << (_amount - withdrawal) << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
}


Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
