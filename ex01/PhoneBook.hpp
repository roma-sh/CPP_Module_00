/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:17 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/04 12:04:54 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{

	public:
		Contact		contacts[8];
		PhoneBook();
		~PhoneBook();
		bool		add(int i);
		void		search();

	private:
		bool		add_firstname(int i);
		bool		add_lastname(int i);
		bool		add_nickname(int i);
		bool		add_phone_num(int i);
		bool		add_darkest_secret(int i);
};

#endif
