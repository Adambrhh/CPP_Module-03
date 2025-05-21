/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:52:36 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/21 17:37:11 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:52:36 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/21 17:50:00 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	clap;
	std::cout << "Hit Points: " << clap.getAttribute("HitPoints") << std::endl;
	std::cout << "Energy Points: " << clap.getAttribute("EnergyPoints") << std::endl;
	std::cout << "Attack Damage: " << clap.getAttribute("AttackDamage") << std::endl;
	clap.attack("Bandit");
	ScavTrap	scav;
	scav.guardGate();
	ScavTrap scavCopy(scav);
	scavCopy.guardGate();
	ScavTrap scavAssigned;
	scavAssigned = scav;
	scavAssigned.guardGate();
}
