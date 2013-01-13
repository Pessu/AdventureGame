/*
 * Utilities.cpp
 *
 *  Created on: 21.12.2012
 *      Author: Pessu
 */

#include "Utilities.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include "Globals.h"

using namespace std;

Utilities::Utilities()
{

}

Utilities::~Utilities()
{

}

int isNumeric(char* str)
{
    int len = strlen(str);
    int i = 0;
    int ret = 1;
    int deccnt = 0;
    while(i < len && ret != 0)
    {
        if(str[i] == '.')
        {
            deccnt++;
            if(deccnt > 1)
                ret = 0;
        }
        else
            ret = isdigit(str[i]);
        i++;
    }
    return ret;
}


int Utilities::convertStringToInt(string par1)
{
	int result = atoi(par1.c_str());
	return result;
}

Utilities::statsStruct Utilities::LoadPlayer()
{
	statsStruct result;
	string str;

	ifstream instream;
	instream.open("PlayerInfo.bin", ios::in);
	int i = 0;

	if (instream.is_open())
	{
		while(!instream.eof())
		{
			getline (instream,result.statsArray[i],'\n');
			i++;
		}
		instream.close();
	}
	else
	{
		throw (FileNotFoundException("File error, could not load"));
	}

	return result;
}

bool Utilities::SavePlayer(string par1, string par2, short int par3, int par4, int par5, int par6,int par7)
{
	ofstream outstream("PlayerInfo.bin", ios::out | ios::trunc);
	if (outstream)
	{
		outstream << par1 << endl;
		outstream << par2 << endl;
		outstream << par3 << endl;
		outstream << par4 << endl;
		outstream << par5 << endl;
		outstream << par6 << endl;
		outstream << par7 << endl;

		outstream.close();
		return true;
	}
	else
	{
		throw (FileNotFoundException("File error, could not save"));
	}
	outstream.close();
	return false;
}
