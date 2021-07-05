#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void ) {
	_displayTimestamp();
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;

	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:0;"
	<< "created" << std::endl;
}

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;

	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:" << initial_deposit << ";"
	<< "created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() <<
	";total:" << getTotalAmount() <<
	";deposits:" << getNbDeposits() <<
	";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<
	";amount:" << _amount <<
	";deposits:" << _nbDeposits <<
	";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	_nbDeposits++;
	Account::_totalNbDeposits++;

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";deposit:" << deposit << ";";

	_amount += deposit;
	Account::_totalAmount += deposit;

	std::cout << "amount:" << _amount <<
	";nb_deposits:" << _nbDeposits << std::endl;
}

int		Account::checkAmount( void ) const {
	return _amount;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();

	if (withdrawal > _amount) {
		std::cout << "index:" << _accountIndex <<
		";p_amount:" << _amount << ";withdrawal:refused\n";
		return false;
	}
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";withdrawal:" << withdrawal << ";";

	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;

	std::cout << "amount:" << _amount <<
	";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

void	Account::_displayTimestamp( void ) {
	time_t t = std::time(NULL);
    struct tm *tinfo = std::localtime(&t);
    std::cout << std::put_time(tinfo, "[%Y%m%d_%H%M%S] ");
}