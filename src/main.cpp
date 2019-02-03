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

int main(int argc, char* argv[])
{
	if(argc == 3)
        {
	    stringstream ss; //Calling ss
	    ss << cin.rdbuf(); //Buffer
	    string Data = ss.str();	
	    cout << Data << endl; //Change Data

	    string goReplace = argv[1]; //Setting Values
	    string replacement = argv[2];
	

	    replace(Data, goReplace, replacement);
        }
    else
    {
	   cout << "Incorrect Arguments Passed." <<endl;	
    }
	return 0;
}
void replace(string & Data, string & goReplace, string & replacement) //Replace Function
{

	//loc--;
	//cout << Data[loc+1] << endl;

	std::size_t loc;

	while((loc = Data.find((" " + goReplace), 0)) != string::npos) //Replacing substring
	{
	    Data.replace(loc+1, goReplace.length(), replacement);
	}
}
