#ifndef MINDOPEN_H
# define MINDOPEN_H

# include <iostream>
# include <vector>
# include <stdexcept>

# include "Parser.hpp"
# include "IMindopen.hpp"

class	Mindopen
{

	public:
	
		Mindopen();
		Mindopen(Mindopen const &obj);
		~Mindopen();

		Mindopen &operator = (Mindopen const &obj);

		void	mindopen(char *fileName);

	private:

		std::vector<IMindopen*> 			stack;
		std::vector<unsigned char> 			cells;
	
};

#endif