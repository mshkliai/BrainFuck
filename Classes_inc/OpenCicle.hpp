#ifndef OPENCICLE_H
# define OPENCICLE_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "IMindopen.hpp"

class 	OpenCicle : public IMindopen
{

public:

	OpenCicle();
	OpenCicle(OpenCicle const & obj);
	~OpenCicle();

	OpenCicle &operator = (OpenCicle const &);

	void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j);
	char	getChar();
};

#endif