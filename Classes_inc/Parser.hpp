#ifndef PARSER_H
# define PARSER_H

# include <iostream>
# include <vector>
# include <fstream>
# include <stdexcept>

# include "IMindopen.hpp"
# include "CloseCicle.hpp"
# include "DecrCell.hpp"
# include "IncrCell.hpp"
# include "Enter.hpp"
# include "NextCell.hpp"
# include "OpenCicle.hpp"
# include "PrevCell.hpp"
# include "Putchar.hpp"

class Parser
{
	public:

		Parser();
		Parser(char* fileName);
		Parser(Parser const & obj);
		~Parser();

		Parser 					&operator = (Parser const & obj);

		std::vector<IMindopen*>	parse();
	
	private:

		char*					_fileName;
		std::string				contentFile;

		void					readFromFile();

};

#endif