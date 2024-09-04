/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:22 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/04 12:42:36 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Your PhoneBook was created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Your PhoneBook was removed" << std::endl;
}

bool	PhoneBook::add_firstname(int i)
{
	std::string	tmp_str;

	std::cout << "Enter first name:" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (!getline(std::cin, tmp_str))
		return false;
	contacts[i].set_first_name(tmp_str);
	if (contacts[i].get_first_name().empty())
		add_firstname(i);
	return true;
}

bool	PhoneBook::add_lastname(int i)
{
	std::string	tmp_str;

	std::cout << "Enter last name:" << std::endl;
	if (!getline(std::cin, tmp_str))
		return false;
	contacts[i].set_last_name(tmp_str);
	if (contacts[i].get_last_name().empty())
		add_lastname(i);
	return true;
}

bool	PhoneBook::add_nickname(int i)
{
	std::string	tmp_str;

	std::cout << "Enter nickname:" << std::endl;
	if (!getline(std::cin, tmp_str))
		return false;
	contacts[i].set_nick_name(tmp_str);
	if (contacts[i].get_nick_name().empty())
		add_nickname(i);
	return true;
}
bool	PhoneBook::add_darkest_secret(int i)
{
	std::string	tmp_str;

	std::cout << "Enter the darkest secret:" << std::endl;
	if (!getline(std::cin, tmp_str))
		return false;
	contacts[i].set_darkest_secret(tmp_str);
	if (contacts[i].get_darkest_secret().empty())
		add_darkest_secret(i);
	return true;
}

bool	PhoneBook::add_phone_num(int i)
{
	int x;

	std::cout << "Enter phone number:" << std::endl;
	if (!(std::cin >> x))
	{
		if (std::cin.eof())
			return false;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input. Please enter a valid number." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			add_phone_num(i);
		}
	}
	else
		contacts[i].set_phone_number(x);
	return true;
}

bool PhoneBook::add(int i)
{
	if (!add_firstname(i))
		return false;
	if (!add_lastname(i))
		return false;
	if (!add_nickname(i))
		return false;
	if (!add_darkest_secret(i))
		return false;
	if (!add_phone_num(i))
		return false;
	std::cout << "Contact "<< contacts[i].get_first_name() << " was added"<<std::endl;
	return true;
}

std::string	format_text(std::string data)
{
	if(data.length() > 10)
		return (data.substr(0, 9) + ".");
	else
		return (data);
}

void	PhoneBook::search()
{
	int i = 0;
	int contact_index = 1000;
		std::cout <<"---------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << std::right << "Index" << "|"
			<< std::setw(10) << std::right << "First name" << "|"
			<< std::setw(10) << std::right << "Last name" << "|"
			<< std::setw(10) << std::right << "Nickname" << "|" << std::endl;
		std::cout <<"---------------------------------------------" << std::endl;
	while (i < 8)
	{
		if (contacts[i].get_first_name().empty())
			break ;
		std::cout << "|" << std::setw(10) << std::right << i + 1 << "|"
			<< std::setw(10) << std::right << format_text(contacts[i].get_first_name()) << "|"
			<< std::setw(10) << std::right << format_text(contacts[i].get_last_name()) << "|"
			<< std::setw(10) << std::right << format_text(contacts[i].get_nick_name()) << "|" << std::endl;
		i++;
	}
		std::cout <<"---------------------------------------------" << std::endl;
	if (i == 0)
		return ;
	while (1)
	{
		std::cout << "Choose contact index" << std::endl;
		std::cin >> contact_index;
		if (std::cin.fail() || (contact_index > i || contact_index < 1))
		{
			std::cin.clear();
			std::cout << "Invalid input." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break ;
	}
	std::cout << "First name:      " << contacts[contact_index - 1].get_first_name() << std::endl;
	std::cout << "Last name:       " << contacts[contact_index - 1].get_last_name ()<< std::endl;
	std::cout << "Nickname:        "  << contacts[contact_index - 1].get_nick_name() << std::endl;
	std::cout << "Darkest secret:  "  << contacts[contact_index - 1].get_darkest_secret() <<std::endl;
	std::cout << "Phone number:    "  << contacts[contact_index - 1].get_phone_number() << std::endl;
}
