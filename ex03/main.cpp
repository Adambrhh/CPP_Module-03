/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:05:42 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/22 14:59:23 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dt1;
	std::cout << "Hit Points: " << dt1.getAttribute("HitPoints") << std::endl;
    std::cout << "Energy Points: " << dt1.getAttribute("EnergyPoints") << std::endl;
    std::cout << "Attack Damage: " << dt1.getAttribute("AttackDamage") << std::endl;
	dt1.whoAmI();
	DiamondTrap dt2("Diamondy");
	dt2.whoAmI();
	dt2.attack("Bandit");
	dt2.takeDamage(30);
	dt2.beRepaired(20);
	DiamondTrap dt3(dt2);
	dt3.whoAmI();
	DiamondTrap dt4;
	dt4 = dt2;
	dt4.whoAmI();
	return (0);
}
