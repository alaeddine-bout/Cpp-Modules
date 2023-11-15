/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:28:24 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 18:28:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ScavTrap : public ClapTrap {
	public :
		ScavTrap(const std::string & name);
		~ScavTrap();

		void	guardGate();
};