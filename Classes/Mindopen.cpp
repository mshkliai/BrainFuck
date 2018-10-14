#include "../Classes_inc/Mindopen.hpp"

Mindopen::Mindopen()
{
	for (int i = 0; i < 30000; i++) {
		this->cells.push_back(0);
	}
}

Mindopen::Mindopen(Mindopen const &obj)
{
	*this = obj;
}

Mindopen::~Mindopen() 
{ 
	for (size_t i = 0; i < this->stack.size(); i++) {
		delete this->stack[i];
	}
}

Mindopen &Mindopen::operator = (Mindopen const &obj)
{
	for (size_t i = 0; i < this->stack.size(); i++) {
		delete this->stack[i];
	}
	
	this->stack = obj.stack;
	this->cells = obj.cells;

	return *this;
}

void	Mindopen::mindopen(char *fileName)
{
	Parser	parser(fileName);
	int		j = 0;

	this->stack = parser.parse();

	for (int i = 0; static_cast<size_t>(i) < this->stack.size(); i++) {
		this->stack[i]->execute(&(this->stack), &i, &(this->cells), &j);
	}
}