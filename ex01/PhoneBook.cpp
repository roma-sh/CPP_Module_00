/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:22 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/04 01:37:44 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using namespace std;

PhoneBook::PhoneBook()
{
	cout << "Your PhoneBook was created" << endl;
}

PhoneBook::~PhoneBook()
{
	cout << "Your PhoneBook was removed" << endl;
}

bool	PhoneBook::add_firstname(int i)
{
	cout << "Enter first name:" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (!getline(cin, contacts[i].first_name))
		return false;
	if (contacts[i].first_name.empty())
		add_firstname(i);
	return true;
}

bool	PhoneBook::add_lastname(int i)
{
	cout << "Enter last name:" << endl;
	if (!getline(cin, contacts[i].last_name))
		return false;
	if (contacts[i].last_name.empty())
		add_lastname(i);
	return true;
}

bool	PhoneBook::add_nickname(int i)
{
	cout << "Enter nickname:" << endl;
	if (!getline(cin, contacts[i].nick_name))
		return false;
	if (contacts[i].nick_name.empty())
		add_nickname(i);
	return true;
}
bool	PhoneBook::add_darkest_secret(int i)
{
	cout << "Enter the darkest secret:" << endl;
	if (!getline(cin, contacts[i].darkest_secret))
		return false;
	if (contacts[i].darkest_secret.empty())
		add_darkest_secret(i);
	return true;
}

bool	PhoneBook::add_phone_num(int i)
{
	cout << "Enter phone number:" << endl;
	if (!(cin >> contacts[i].phone_number))
		return false;
	if (cin.fail())
	{
		cin.clear();
		cout << "Invalid input. Please enter a valid integer." << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		add_phone_num(i);
	}
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
	cout << "Contact "<< contacts[i].first_name<< " was added"<<endl;
	return true;
}

string	format_text(string data)
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
		cout <<"---------------------------------------------" << endl;
		cout << "|" << setw(10) << right << "Index" << "|"
			<< setw(10) << right << "First name" << "|"
			<< setw(10) << right << "Last name" << "|"
			<< setw(10) << right << "Nickname" << "|" << endl;
		cout <<"---------------------------------------------" << endl;
	while (i < 8)
	{
		if (contacts[i].first_name.empty())
			break ;
		cout << "|" << setw(10) << right << i + 1 << "|"
			<< setw(10) << right << format_text(contacts[i].first_name) << "|"
			<< setw(10) << right << format_text(contacts[i].last_name) << "|"
			<< setw(10) << right << format_text(contacts[i].nick_name) << "|" << endl;
		i++;
	}
		cout <<"---------------------------------------------" << endl;
	if (i == 0)
		return ;
	while (1)
	{
		cout << "Choose contact index" << endl;
		cin >> contact_index;
		if (cin.fail() || (contact_index > i || contact_index < 1))
		{
			cin.clear();
			cout << "Invalid input." << endl;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
			break ;
	}
	cout << "First name:      " << contacts[contact_index - 1].first_name << endl;
	cout << "Last name:       " << contacts[contact_index - 1].last_name << endl;
	cout << "Nickname:        "  << contacts[contact_index - 1].nick_name << endl;
	cout << "Darkest secret:  "  << contacts[contact_index - 1].darkest_secret << endl;
	cout << "Phone number:    "  << contacts[contact_index - 1].phone_number << endl;
}
