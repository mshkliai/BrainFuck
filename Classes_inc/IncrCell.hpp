#ifndef INCRCELL_H
# define INCRCELL_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	IncrCell : public IMindopen
{

public:

	IncrCell();
	IncrCell(IncrCell const & obj);
	~IncrCell();

	IncrCell &operator = (IncrCell const &);

	void	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
};

#endif