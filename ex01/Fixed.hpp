/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:55:14 by deryacar          #+#    #+#             */
/*   Updated: 2024/09/17 16:55:15 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int holder;
		static const int _fixed = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &);
		Fixed &operator=(const Fixed &);
		Fixed(const int i_fixed);
		Fixed(const float f_fixed);
		float toFloat(void) const;
		int toInt(void) const;
		
};
	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif