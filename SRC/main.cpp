#include <iostream>
#include <stdexcept>

#include "../Classes_inc/IMindopen.hpp"
#include "../Classes_inc/CloseCicle.hpp"
#include "../Classes_inc/DecrCell.hpp"
#include "../Classes_inc/IncrCell.hpp"
#include "../Classes_inc/Enter.hpp"
#include "../Classes_inc/NextCell.hpp"
#include "../Classes_inc/OpenCicle.hpp"
#include "../Classes_inc/PrevCell.hpp"
#include "../Classes_inc/Putchar.hpp"
#include "../Classes_inc/Parser.hpp"
#include "../Classes_inc/Mindopen.hpp"

int main(int ac, char **av)
{
	Mindopen	brainFuck;

	if (ac != 2) {
		std::cerr << "Usage: ./mindopen fileName" << std::endl;
	}
	else {
		try {
			brainFuck.mindopen(av[1]);
		}
		catch (std::exception & e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}

	return 0;
}