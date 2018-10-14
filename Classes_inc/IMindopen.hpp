#ifndef IMINDOPEN_H
# define IMINDOPEN_H

# include <iostream>
# include <vector>
# include <stdexcept>

class IMindopen
{
	public:

		virtual ~IMindopen() {}

		virtual void 	execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j) = 0;
		virtual char	getChar() = 0;
};

#endif