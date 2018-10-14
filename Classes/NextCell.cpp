#include "../Classes_inc/NextCell.hpp"

NextCell::NextCell()
{
	return ;
}

NextCell::NextCell(NextCell const & obj)
{
	*this = obj;
}

NextCell::~NextCell()
{
	return ;
}

NextCell	&NextCell::operator = (NextCell const &)
{
	return *this;
}

void 		NextCell::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	if (*j == 29999)
	{
		throw std::out_of_range("30000 cells only");
	}
	else {
		*j += 1;
	}

	static_cast<void>(*stack);
	static_cast<void>(*cells);
	*i += 0;
}

char		NextCell::getChar()
{
	return '>';
}