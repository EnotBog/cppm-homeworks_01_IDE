#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>
#include <fstream>





int main()
{

	//SetConsoleOutputCP(65001);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string q = "привт";
	std::string w = "Hello";
	std::string e;
	std::cout << q << " " << w << " " << std::endl;
	std::cin >> e;
	std::cout << e;

	return 0;
}