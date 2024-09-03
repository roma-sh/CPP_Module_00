/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:22 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/04 00:14:47 by rshatra          ###   ########.fr       */
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

void	PhoneBook::add_firstname(int i)
{
	cout << "enter first name:" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, contacts[i].first_name);
	if (cin.eof())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		// return ;
		add_firstname(i);
	}
	if (contacts[i].first_name.empty())
		add_firstname(i);
}

void	PhoneBook::add_lastname(int i)
{
	cout << "enter last name:" << endl;
	getline(cin, contacts[i].last_name);
	if (contacts[i].last_name.empty())
		add_lastname(i);
}

void	PhoneBook::add_nickname(int i)
{
	cout << "enter nickname:" << endl;
	getline(cin, contacts[i].nick_name);
	if (contacts[i].nick_name.empty())
		add_nickname(i);
}
void	PhoneBook::add_darkest_secret(int i)
{
	cout << "enter the darkest secret:" << endl;
	getline(cin, contacts[i].darkest_secret);
	if (contacts[i].darkest_secret.empty())
		add_darkest_secret(i);
}

void	PhoneBook::add_phone_num(int i)
{
	cout << "enter phone number:" << endl;
	cin >> contacts[i].phone_number;
	if (cin.fail())
	{
		cin.clear();
		cout << "Invalid input. Please enter a valid integer." << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		add_phone_num(i);
	}
}

void PhoneBook::add(int i)
{
	add_firstname(i);
	add_lastname(i);
	add_nickname(i);
	add_darkest_secret(i);
	add_phone_num(i);
	cout << "contact was added"<<endl;
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

		cout << setw(10) << right << "index" << "|"
			<< setw(10) << right << "first name" << "|"
			<< setw(10) << right << "last name" << "|"
			<< setw(10) << right << "nickname" << "|" << endl;
	while (i < 8)
	{
		cout << setw(10) << right << i + 1 << "|"
			<< setw(10) << right << format_text(contacts[i].first_name) << "|"
			<< setw(10) << right << format_text(contacts[i].last_name) << "|"
			<< setw(10) << right << format_text(contacts[i].nick_name) << "|" << endl;
		i++;
	}
	while (contact_index > 8 || contact_index < 1)
	{
		cout << "choose contact number 1-2-3 .... 8" << endl;
		cin >> contact_index;
		if (cin.fail())
		{
			cin.clear();
			cout << "Invalid input. Please enter a valid integer." << endl;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	cout << "first name:      " << contacts[contact_index - 1].first_name << endl;
	cout << "last name:       " << contacts[contact_index - 1].last_name << endl;
	cout << "nickname:        "  << contacts[contact_index - 1].nick_name << endl;
	cout << "drakest secret:  "  << contacts[contact_index - 1].darkest_secret << endl;
	cout << "Phone number:    "  << contacts[contact_index - 1].phone_number << endl;
}
