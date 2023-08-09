#include "Leaver.h"
#include <iostream>
#include <string>

namespace jinx
{
	void jinx::Leaver::leave(std::string userName)
	{
		std::cout << "До свиданья, " << userName << '!';
	}
}