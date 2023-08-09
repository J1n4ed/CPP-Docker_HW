// main client file Leaver_Client.cpp

/*
  27.02.2023
  Тема 2, Занятие 11
  Работа 3, Динамическая библиотека CMake
  CPP-07
  @j1n4ed
*/

#include "Leaver.h"
#include <iostream>
#include <string>

#ifdef _WIN32
#include <Windows.h>
#endif

#ifdef _WIN64
#include <Windows.h>
#endif

#ifdef linux
#include <cstdlib>
#endif

int main(int argc, char** argv)
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif

#ifdef _WIN64
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif

#ifdef linux
	setlocale(LC_ALL, "russian");
#endif

	std::string userName;

	std::cout << "¬ведите им€: ";
	getline(std::cin, userName);

	std::cout << '\n';

	jinx::Leaver leaver;

	leaver.leave(userName);

	//-----------

	std::cout << '\n' << "Press any key to exit...";
	std::getchar();
	return EXIT_SUCCESS;
}