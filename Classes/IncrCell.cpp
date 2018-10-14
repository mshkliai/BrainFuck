#include "../Classes_inc/IncrCell.hpp"

IncrCell::IncrCell()
{
	return ;
}

IncrCell::IncrCell(IncrCell const & obj)
{
	*this = obj;
}

IncrCell::~IncrCell()
{
	return ;
}

IncrCell	&IncrCell::operator = (IncrCell const &)
{
	return *this;
}

void 		IncrCell::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	(*cells)[*j]++;

	static_cast<void>(*stack);
	*i += 0;
}

char		IncrCell::getChar()
{
	return '+';
}