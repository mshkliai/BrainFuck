#ifndef CLOSECICLE_H
# define CLOSECICLE_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	CloseCicle : public IMindopen
{

public:

	CloseCicle();
	CloseCicle(CloseCicle const & obj);
	~CloseCicle();

	CloseCicle &operator = (CloseCicle const &);

	void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
	
};

#endif