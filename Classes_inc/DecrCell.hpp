#ifndef DECRCELL_H
# define DECRCELL_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	DecrCell : public IMindopen
{

public:

	DecrCell();
	DecrCell(DecrCell const & obj);
	~DecrCell();

	DecrCell &operator = (DecrCell const &);

	void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
};

#endif