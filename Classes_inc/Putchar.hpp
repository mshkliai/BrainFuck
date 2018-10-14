#ifndef PUTCHAR_H
# define PUTCHAR_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	Putchar : public IMindopen
{

public:

	Putchar();
	Putchar(Putchar const & obj);
	~Putchar();

	Putchar &operator = (Putchar const &);

	void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
};

#endif