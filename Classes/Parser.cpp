#include "../Classes_inc/Parser.hpp"

Parser::Parser(char *fileName) : _fileName(fileName)
{
	return ;
}

Parser::Parser(Parser const & obj)
{
	*this = obj;
}

Parser::~Parser()
{
	return ;
}

Parser 					&Parser::operator = (Parser const & obj)
{
	this->_fileName = obj._fileName;
	this->contentFile = obj.contentFile;

	return *this;
}

std::vector<IMindopen*>	Parser::parse()
{
	std::vector<IMindopen*>	commands;

	this->readFromFile();

	for (size_t i = 0; i < this->contentFile.length(); i++)
	{
		switch (this->contentFile[i])
		{
			case '>':
				commands.push_back(new NextCell);
				break ;
			case '<':
				commands.push_back(new PrevCell);
				break ;
			case '+':
				commands.push_back(new IncrCell);
				break ;
			case '-':
				commands.push_back(new DecrCell);
				break ;
			case '.':
				commands.push_back(new Putchar);
				break ;
			case ',':
				commands.push_back(new Enter);
				break ;
			case '[':
				commands.push_back(new OpenCicle);
				break ;
			case ']':
				commands.push_back(new CloseCicle);
				break ;
			case ' ':
				break ;
			case '\t':
				break ;
			default:
				throw std::logic_error("unknown command"); 
		}
	}
	return commands;
}

void					Parser::readFromFile()
{
	std::ifstream			ifs(this->_fileName);
	char					buff[500];

	std::vector<IMindopen*>	commands;

	if ( !ifs.is_open() ) {
		throw std::logic_error("invalid file");
	}

	while ( ifs.getline(buff, 500) != '\0' ) {
		contentFile += static_cast<std::string>(buff);
	}
	ifs.close();
}