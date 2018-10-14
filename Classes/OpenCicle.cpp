#include "../Classes_inc/OpenCicle.hpp"

OpenCicle::OpenCicle()
{
	return ;
}

OpenCicle::OpenCicle(OpenCicle const & obj)
{
	*this = obj;
}

OpenCicle::~OpenCicle()
{
	return ;
}

OpenCicle	&OpenCicle::operator = (OpenCicle const &)
{
	return *this;
}

void 		OpenCicle::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	int bracket1 = -1;
	int	bracket2 = 0;

	if ( (*cells)[*j] == 0 )
	{
		while ( static_cast<size_t>(*i) < (*stack).size() )
		{
			if ( (*stack)[*i]->getChar() == '[' ) {
				bracket1++;
			}
			if ( (*stack)[*i]->getChar() == ']' ) 
			{
				if (bracket1 == bracket2) {
					break ;
				}
				else {
					bracket2++;
				}
			}
			*i += 1;
		}
		if ( static_cast<size_t>(*i) == (*stack).size() )
		{
			throw std::logic_error("no ]");
		}
	}
}

char		OpenCicle::getChar()
{
	return '[';
}
