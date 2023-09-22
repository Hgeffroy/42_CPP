/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:13:29 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 20:56:35 by hgeffroy         ###   ########.fr       */
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
	_accountIndex = _nbAccounts;
	_totalAmount += _amount;
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
	_totalAmount -= _amount;
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
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if (_amount >= withdrawal)
	{
		std::cout << withdrawal;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		std::cout << "refused" << std::endl;
		return false;
	}
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}