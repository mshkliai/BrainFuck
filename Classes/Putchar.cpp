#include "../Classes_inc/Putchar.hpp"

Putchar::Putchar()
{
	return ;
}

Putchar::Putchar(Putchar const & obj)
{
	*this = obj;
}

Putchar::~Putchar()
{
	return ;
}

Putchar	&Putchar::operator = (Putchar const &)
{
	return *this;
}

void 		Putchar::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	 if ( (*cells)[*j] < 127 ) {
		std::cout << (*cells)[*j];
	 }

	static_cast<void>(*stack);
	*i += 0;
}

char		Putchar::getChar()
{
	return '.';
}