/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:20 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/04 12:31:43 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

std::string Contact::get_first_name()
{
	return (first_name);
}

std::string Contact::get_last_name()
{
	return (last_name);
}

std::string Contact::get_nick_name()
{
	return (nick_name);
}

std::string Contact::get_darkest_secret()
{
	return (darkest_secret);
}

int	Contact::get_phone_number()
{
	return (phone_number);
}

void	Contact::set_first_name(std::string data)
{
	first_name = data;
}
void	Contact::set_last_name(std::string data)
{
	last_name = data;
}
void	Contact::set_nick_name(std::string data)
{
	nick_name = data;
}
void	Contact::set_darkest_secret(std::string data)
{
	darkest_secret = data;
}
void	Contact::set_phone_number(int a)
{
	phone_number = a;
}
