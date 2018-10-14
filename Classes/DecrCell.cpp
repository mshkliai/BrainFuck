#include "../Classes_inc/DecrCell.hpp"

DecrCell::DecrCell()
{
	return ;
}

DecrCell::DecrCell(DecrCell const & obj)
{
	*this = obj;
}

DecrCell::~DecrCell()
{
	return ;
}

DecrCell	&DecrCell::operator = (DecrCell const &)
{
	return *this;
}

void 		DecrCell::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	(*cells)[*j]--;

	(*stack)[0] += 0;
	*i += 0;
}

char		DecrCell::getChar()
{
	return '-';
}