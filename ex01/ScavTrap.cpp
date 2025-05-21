/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:42:14 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/21 17:27:47 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->Name = "SC4V-TP";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << this->Name << " is coming!" << std::endl;
}

ScavTrap::~ScavTrap() {}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	*this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
    if (this != &src)
    {
        this->Name = src.Name;
        this->HitPoints = src.HitPoints;
        this->EnergyPoints = src.EnergyPoints;
        this->AttackDamage = src.AttackDamage;
    }
    std::cout << this->Name << " assigned!" << std::endl;
    return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << this->Name << " is now in Gate keeper mode." << std::endl;
}
