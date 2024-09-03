/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:53:20 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/03 17:32:42 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

using namespace std;

int	main()
{
	string		cmd;
	PhoneBook	new_list;
	int	i = 0;
	while (1)
	{
		if (i > 7)
			i = 0;
		cout << "enter a command: add - search - exit"<<endl;
		cin >> cmd;

		if (cmd == "add")
		{
			new_list.add(i);
			i++;
		}
		else if (cmd == "search")
			new_list.search();
		else if (cmd == "exit")
		{
			cout << "Good Bye!!" << endl;
			break ;
		}
		else
			cout << "Invalid command" << endl;
	}
	return (0);
}
