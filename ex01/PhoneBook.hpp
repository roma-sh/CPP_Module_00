/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:17 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/03 17:00:00 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class PhoneBook
{

	public:
		Contact		contacts[8];
		PhoneBook();
		~PhoneBook();
		void		add(int i);
		void		search();

	private:
		void		add_firstname(int i);
		void		add_lastname(int i);
		void		add_nickname(int i);
		void		add_phone_num(int i);
		void		add_darkest_secret(int i);
};

#endif
