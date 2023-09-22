/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:13:29 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 16:13:17 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t		now;
	struct tm	tstruct;
	char		buffer[16];

	now = time(0);
	tstruct = *localtime(&now);
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &tstruct);

	std::cout << "[";
	std::cout << buffer;
	std::cout << "] ";
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_accountIndex = getNbAccounts();
	_nbAccounts += 1;
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	_nbAccounts -= 1;
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (0);
}

int	Account::getNbDeposits( void )
{
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	return (0);
}

void	Account::displayAccountsInfos( void )
{
	return ;
}
void	Account::makeDeposit( int deposit )
{
	(void)deposit;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return true;
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	return ;
}