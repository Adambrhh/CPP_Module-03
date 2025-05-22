/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:35:34 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/22 14:15:54 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->Name = "FR4G-TP";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << " has been constructed (default constructor)." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "FragTrap " << this->Name << " has been constructed (parameterized constructor)." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " has been destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap " << this->Name << " has been copied (copy constructor)." << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		this->Name = src.Name;
		this->HitPoints = src.HitPoints;
		this->EnergyPoints = src.EnergyPoints;
		this->AttackDamage = src.AttackDamage;
	}
	std::cout << "FragTrap " << this->Name << " has been assigned (assignment operator)." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuy()
{
	std::cout << this->Name << " requests a positive high five! ✋" << std::endl;
}
