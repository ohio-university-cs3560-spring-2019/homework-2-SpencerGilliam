///////////////////////////////////////////////
//Spencer Gilliam
//Professor Mourning
//01/28/2019
//CS 3560
//////////////////////////////////////////////

#include <iostream>
#include <sstream>
#include <string>
#include "../include/replace.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::stringstream;


void replace(string & Data, string & goReplace, string & replacement)  //Replace Function
{

	//loc--;
	//cout << Data[loc+1] << endl;

	std::size_t loc;

	while((loc = Data.find((" " + goReplace), 0)) != string::npos)
	{
	    Data.replace(loc+1, goReplace.length(), replacement);
	}
}
