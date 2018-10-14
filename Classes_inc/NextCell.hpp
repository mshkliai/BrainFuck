#ifndef NEXTCELL_H
# define NEXTCELL_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	NextCell : public IMindopen
{

public:

	NextCell();
	NextCell(NextCell const & obj);
	~NextCell();

	NextCell &operator = (NextCell const &);

	void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
};

#endif