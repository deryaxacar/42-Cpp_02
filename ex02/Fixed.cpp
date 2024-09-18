/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:55:33 by deryacar          #+#    #+#             */
/*   Updated: 2024/09/18 16:57:38 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	holder = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i_fixed)
{
	holder = i_fixed << _fixed;
}

Fixed::Fixed(const float f_fixed)
{
	holder = roundf(f_fixed * (1 << _fixed));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &data)
{
	*this = data;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &data)
{
	if (this != &data)
		this->holder = data.holder;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::toInt(void) const
{
	int i_back = holder >> _fixed;
	return (i_back);
}

float Fixed::toFloat(void) const
{
	float f_back = (float)holder / (float)(1 << _fixed);
	return (f_back);
}

bool Fixed::operator>(const Fixed& data) const
{
	return holder > data.holder;
}

bool Fixed::operator<(const Fixed& data) const
{
	return holder < data.holder;		
}

bool Fixed::operator>=(const Fixed& data) const
{
	return holder >= data.holder;		
}

bool Fixed::operator<=(const Fixed& data) const
{
	return holder <= data.holder;		
}

bool Fixed::operator==(const Fixed& data) const
{
	return holder == data.holder;		
}

bool Fixed::operator!=(const Fixed& data) const
{
	return holder != data.holder;		
}

Fixed Fixed::operator+(const Fixed& data) const
{
	Fixed plus;
	plus.holder = (holder + data.holder);
		return plus;
}

Fixed Fixed::operator-(const Fixed& data) const
{
	Fixed minus;
	minus.holder = (holder - data.holder);
	return minus;
}

Fixed Fixed::operator*(const Fixed& data) const
{
	Fixed x;
	x.holder = (holder * data.holder) >> _fixed;
	return x;
}

Fixed Fixed::operator/(const Fixed& data) const
{
	float thisValue = this->toFloat();
	float dataValue = data.toFloat();

	float x = thisValue / dataValue;

	return Fixed(x);
}

Fixed& Fixed::operator++()
{
	holder++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed taker = *this;
	++(*this);
	return taker;
}

Fixed& Fixed::operator--()
{
	holder--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed taker = *this;
	--*this;
	return taker;
}

Fixed &Fixed::min(Fixed& x, Fixed& y)
{
	if(x < y)
		return x;
	return y;
}

const Fixed &Fixed::min(const Fixed& x, const Fixed& y)
{
	if(x < y)
		return x;
	return y;
}

Fixed &Fixed::max(Fixed& x, Fixed& y)
{
	if(x > y)
		return x;
	return y;
}

const Fixed &Fixed::max(const Fixed& x, const Fixed& y)
{
	if(x > y)
		return x;
	return y;
}
