/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:42:14 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/22 14:14:41 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->Name = "SC4V-TP";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " has been constructed (default constructor)." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " has been constructed (parameterized constructor)." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " has been destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap " << this->Name << " has been copied (copy constructor)." << std::endl;
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
	std::cout << "ScavTrap " << this->Name << " has been assigned (assignment operator)." << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		std::cout << "ScavTrap " << this->Name << " attacks " << target
				  << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->Name << " has no more energy to attack!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->Name << " is now in Gate keeper mode." << std::endl;
}
