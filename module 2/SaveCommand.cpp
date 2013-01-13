/*
 * SaveCommand.cpp
 *
 *  Created on: 20.12.2012
 *      Author: Pessu
 */

#include "SaveCommand.h"
#include "Game.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include "Utilities.h"
void SaveCommand::Execute()
{
	string pName = GetGame()->GetPlayer().GetName();
	short int pAge = GetGame()->GetPlayer().GetAge();
	int pClass = GetGame()->GetPlayer().GetClass();
	int pExp = GetGame()->GetPlayer().GetExperience();
	int pGender = GetGame()->GetPlayer().GetGender();
	string pRace = GetGame()->GetPlayer().GetRace();
	int pHp = GetGame()->GetPlayer().GetHitpoints();

	if (SavePlayer(pName,pRace,pAge,pGender,pClass,pExp,pHp))
		std::cout<<"Game Saved!\n";
	else
		std::cout<<"Save failed!\n";
}
