/*
 * Utilities.h
 *
 *  Created on: 21.12.2012
 *      Author: Pessu
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_
#include <string>

using namespace std;
class Utilities
{
public:
	Utilities();
	bool SavePlayer(string par1, string par2, short int par3, int par4, int par5, int par6,int par7);
	typedef struct retuned_array
	{
		string statsArray[30];
	} statsStruct;
	statsStruct LoadPlayer();
	int convertStringToInt(string par1);

	virtual ~Utilities();
};

#endif /* UTILITIES_H_ */
