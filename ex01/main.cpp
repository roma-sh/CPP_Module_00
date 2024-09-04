/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:53:20 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/04 12:05:54 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	std::string		cmd;
	PhoneBook	new_list;
	int	i = 0;
	while (1)
	{
		if (i > 7)
			i = 0;
		std::cout << "Enter a command: ADD - SEARCH - EXIT"<<std::endl;
		if (!(std::cin >> cmd))
			break ;
		if (cmd == "ADD")
		{
			if (!(new_list.add(i)))
				break ;
			i++;
		}
		else if (cmd == "SEARCH")
			new_list.search();
		else if (cmd == "EXIT")
		{
			std::cout << "Good Bye!!" << std::endl;
			break ;
		}
		else
			std::cout << "Invalid command, ";
	}
	return (0);
}
