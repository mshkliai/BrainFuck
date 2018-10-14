#ifndef PREVCELL_H
# define PREVCELL_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	PrevCell : public IMindopen
{

public:

	PrevCell();
	PrevCell(PrevCell const & obj);
	~PrevCell();

	PrevCell &operator = (PrevCell const &);

	void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
};

#endif