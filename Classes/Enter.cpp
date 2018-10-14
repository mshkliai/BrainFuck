#include "../Classes_inc/Enter.hpp"

Enter::Enter()
{
	return ;
}

Enter::Enter(Enter const & obj)
{
	*this = obj;
}

Enter::~Enter()
{
	return ;
}

Enter	&Enter::operator = (Enter const &)
{
	return *this;
}

void 		Enter::execute(std::vector<IMindopen*> *stack, int *i, std::vector<unsigned char> *cells, int *j)
{
	std::string	input;

	std::cout << "Waiting for input one symbol: ";
	std::cin >> input;

	if (input.length() != 1) {
		throw std::logic_error("bad value");
	}
	else
	{
		char	symbol = input[0];
		(*cells)[*j] = static_cast<unsigned char>(symbol);
	}

	static_cast<void>(*stack);
	*i += 0;
}

char		Enter::getChar()
{
	return ',';
}