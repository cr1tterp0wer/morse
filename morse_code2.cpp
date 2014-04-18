
#include "morse_code2.h"
#include <iostream>
#include <map>
using namespace std;


std::string	get_input()
	{
		
		std::string      in;
		std::cout << "Enter your name:";
		std::cin >> in;
         
		return in;
	}

	void display(std::string _str)
	{
        std::string str = _str;
		std::vector<int> morse(4);
		std::map<std::string, std::vector<bool>*> LetterCode;

		//load map

		//LetterCode["A"] = vector<bool>({true, false});
	//	LetterCode["B"] = vector<bool>({false, true, true, true});
	/*	LetterCode["C"] = vector<bool>(false, true, false, true);
		LetterCode["D"] = vector<bool>(false, true, true, null);
		LetterCode["E"] = vector<bool>(true);
		LetterCode["F"] = vector<bool>(true, true, false, true);
		LetterCode["G"] = vector<bool>(false, false, true, null);
		LetterCode["H"] = vector<bool>(true, true, true, true);
		LetterCode["I"] = vector<bool>(true, true);
		LetterCode["J"] = vector<bool>(true, false, false, false);
		LetterCode["K"] = vector<bool>(false, true, false, null);
		LetterCode["L"] = vector<bool>(true, false, true, true);
		LetterCode["M"] = vector<bool>(false, false);
		LetterCode["N"] = vector<bool>(false, true);
		LetterCode["O"] = vector<bool>(false, false, false, null);
		LetterCode["P"] = vector<bool>(true, false, false, true);
		LetterCode["Q"] = vector<bool>(false, false, true, false);
		LetterCode["R"] = vector<bool>(true, false, true, null);
		LetterCode["S"] = vector<bool>(true, true, true, null);
		LetterCode["T"] = vector<bool>(false);
		LetterCode["U"] = vector<bool>(true, true, false, null);
		LetterCode["V"] = vector<bool>(true, true, true, false);
		LetterCode["W"] = vector<bool>(true, false, false, null);
		LetterCode["X"] = vector<bool>(false, true, true, false);
		LetterCode["Y"] = vector<bool>(false, true, false, false);
		LetterCode["Z"] = vector<bool>(false, false, true, true);

		*/
		std::cout << LetterCode["A"][0];

		//for(int i =0; i < str.length; i++)
	//	{

		//set morse
		//morse = LetterCode[

	//	}

	}

    int main(int argc, char *argv[])
    {
		std::string s = get_input();
		
		display(s);

	    return 0;
    }

	


/*
   map<int, string> Employees;
         // 1) Assignment using array index notation
   Employees[5234] = "Mike C.";
   Employees[3374] = "Charlie M.";
   Employees[1923] = "David D.";
   Employees[7582] = "John A.";
   Employees[5328] = "Peter Q.";
   */
