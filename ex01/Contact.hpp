/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:14 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/04 12:28:59 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	darkest_secret;
	int		phone_number;
	public:
	Contact();
	~Contact();

	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nick_name();
	std::string	get_darkest_secret();
	int			get_phone_number();

	void	set_first_name(std::string data);
	void	set_last_name(std::string data);
	void	set_nick_name(std::string data);
	void	set_darkest_secret(std::string data);
	void	set_phone_number(int a);
};

#endif
