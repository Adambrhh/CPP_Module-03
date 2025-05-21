/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:52:44 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/21 17:10:38 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
class ClapTrap
{
protected:
	std::string		Name;
	unsigned int	HitPoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;
public:
	ClapTrap();
	ClapTrap(ClapTrap const &src);
	ClapTrap&		operator=(ClapTrap const &src);
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			setAttribute(const std::string& attributeName, unsigned int value);
	unsigned int	getAttribute(const std::string& attributeName) const;
	~ClapTrap();

};

#endif