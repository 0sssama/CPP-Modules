/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:14:49 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 23:35:17 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include "PhoneBook.hpp"

// commands
void	ft_add(PhoneBook *phonebook);
void	ft_search(PhoneBook *phonebook);
void	ft_exit(void);
void	ft_not_found(void);

#endif