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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size_arr1,size_arr2;
	std::string buf;

	std::ifstream file_in("E:\\Project\\IDE\\in.txt");
	std::ofstream file_out("E:\\Project\\IDE\\out.txt");

	if (file_in.is_open()) { std::cout << "File: 'file_in' Open" << "\n"; }
	else { std::cerr << "File: 'file_in' Not open" << "\n"; return 1; }


	file_in >> buf;
	size_arr1 = std::stoi(buf);



	int *arr_1 =new int[size_arr1];

	if (size_arr1 < 0)
	{
		std::cout << "Размер массива arr_2 меньше 0";
	}


	for (int i = 0; i < size_arr1; i++)
	{
		file_in >> arr_1[i];
	}



	file_in >> buf;
	size_arr2 = std::stoi(buf);

	if (size_arr2 < 0) 
	{ std::cout << "Размер массива arr_2 меньше 0"; }

	 int* arr_2 = new int[size_arr2]; 


	for (int i = 0; i < size_arr2; i++)
	{
		file_in >> arr_2[i];
	}

	////////////////////////////////////////////////////////////////////////////////////

	while (true)
	{
		int count=0;

		file_out << size_arr2 << "\n";

		for (int y = size_arr2-1; count!=5; y--)////// устанавливаетс значение сколько знаков напечатать с конца массива
		{
			file_out << arr_2[y]<<" ";
			count++;
		}

		

		for (int i = 0; count<size_arr2; i++)
		{
			file_out << arr_2[i] << " ";
			count++;
		}

		file_out << "\n";

		break;
	}


	while (true)
	{
		int count = 0;

		file_out << size_arr1 << "\n";

		for (int y = size_arr1 - 1; count != 3; y--)////// устанавливаетс значение сколько знаков напечатать с конца массива
		{
			file_out << arr_1[y] << " ";
			count++;
		}



		for (int i = 0; count < size_arr1; i++)
		{
			file_out << arr_1[i] << " ";
			count++;
		}

		file_out << "\n";

		break;
	}

	delete[]arr_1;
	delete[]arr_2;

	return 0;
}