#include "../Classes_inc/CloseCicle.hpp"

CloseCicle::CloseCicle()
{
	return ;
}

CloseCicle::CloseCicle(CloseCicle const & obj)
{
	*this = obj;
}

CloseCicle::~CloseCicle()
{
	return ;
}

CloseCicle	&CloseCicle::operator = (CloseCicle const &)
{
	return *this;
}

void 		CloseCicle::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	int bracket1 = -1;
	int bracket2 = 0;

	while (*i > 0)
	{
		if ( (*stack)[*i]->getChar() == ']' ) {
			bracket1++;
		}

		if ( (*stack)[*i]->getChar() == '[' ) 
		{
			if (bracket1 == bracket2)
			{
				*i -= 1;
				return ;
			}
			else {
				bracket2++;
			}
		}
		*i -= 1;
	}
	throw std::logic_error("no [");

	(*cells)[0] += 0;
	*j += 0;
}

char		CloseCicle::getChar()
{
	return ']';
}