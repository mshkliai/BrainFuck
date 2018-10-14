#ifndef ENTER_H
# define ENTER_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	Enter : public IMindopen
{

public:

	Enter();
	Enter(Enter const & obj);
	~Enter();

	Enter &operator = (Enter const &);

	void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
};

#endif