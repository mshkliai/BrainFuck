#include "../Classes_inc/PrevCell.hpp"

PrevCell::PrevCell()
{
	return ;
}

PrevCell::PrevCell(PrevCell const & obj)
{
	*this = obj;
}

PrevCell::~PrevCell()
{
	return ;
}

PrevCell	&PrevCell::operator = (PrevCell const &)
{
	return *this;
}

void 		PrevCell::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	if (*j == 0)
	{
		throw std::out_of_range("-1 index");
		exit(0);
	}
	else {
		*j -= 1;
	}

	static_cast<void>(*stack);
	static_cast<void>(*cells);
	*i += 0;
}

char		PrevCell::getChar()
{
	return '<';
}