/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:25:00 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/22 14:47:52 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap(), Name("DiamondTrap")
{
	this->Name = "DI4D-TP";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << this->Name << " has been constructed (default constructor)." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), Name(name)
{
	this->Name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << this->Name << " has been constructed (parameterized constructor)." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->Name << " has been destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap " << this->Name << " has been copied (copy constructor)." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		this->Name = src.Name;
	}
	std::cout << "DiamondTrap " << this->Name << " has been assigned (assignment operator)." << std::endl;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->Name
			  << ", ClapTrap name: " << ClapTrap::Name << std::endl;
}
