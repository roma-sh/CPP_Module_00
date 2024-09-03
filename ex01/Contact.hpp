/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:14 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/03 12:10:21 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using namespace std;

class Contact
{
	public:
	string	first_name;
	string	last_name;
	string	nick_name;
	string	darkest_secret;
	int		phone_number;

	Contact();
	~Contact();
};

#endif
