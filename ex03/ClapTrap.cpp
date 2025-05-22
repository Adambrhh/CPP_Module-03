/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:52:38 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/22 10:55:44 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("CL4P-TP"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << this->Name << " has been constructed (default constructor)." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << this->Name << " has been constructed (parameterized constructor)." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap " << this->Name << " has been copied (copy constructor)." << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
	{
		this->Name = src.Name;
		this->HitPoints = src.HitPoints;
		this->EnergyPoints = src.EnergyPoints;
		this->AttackDamage = src.AttackDamage;
	}
	std::cout << "ClapTrap " << this->Name << " has been assigned (assignment operator)." << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		std::cout << this->Name << " attacks " << target << ", causing " 
				  << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->Name << " has no more energy to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints > 0)
	{
		if (amount >= this->HitPoints)
		{
			this->HitPoints = 0;
			std::cout << this->Name << " succumbed to this last attack!" << std::endl;
		}
		else
		{
			this->HitPoints -= amount;
			std::cout << this->Name << " lost " << amount << " hit points! He has " 
					  << this->HitPoints << " left." << std::endl;
		}
	}
	else
		std::cout << this->Name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		this->HitPoints += amount;
		std::cout << this->Name << " repaired " << amount << " hit points! He now has " 
				  << this->HitPoints << " hit points." << std::endl;
	}
	else
		std::cout << this->Name << " has no more energy to repair!" << std::endl;
}

void ClapTrap::setAttribute(const std::string& attributeName, unsigned int value)
{
	if (attributeName == "HitPoints")
		this->HitPoints = value;
	else if (attributeName == "EnergyPoints")
		this->EnergyPoints = value;
	else if (attributeName == "AttackDamage")
		this->AttackDamage = value;
}

unsigned int ClapTrap::getAttribute(const std::string& attributeName) const
{
	if (attributeName == "HitPoints")
		return (this->HitPoints);
	else if (attributeName == "EnergyPoints")
		return (this->EnergyPoints);
	else if (attributeName == "AttackDamage")
		return (this->AttackDamage);
	return (0);
}
