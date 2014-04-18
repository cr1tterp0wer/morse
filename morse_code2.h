#pragma once
#include <vector>
#include <string>

class morse_code
{
	  //  std::fstream *fs;
    std::string       *in;
	std::vector<int>  *morse;


public:
    std::string	get_input();
    void display();

};
