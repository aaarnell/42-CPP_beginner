#include <string>

template <class T>
class Converter
{
protected:
	std::string input;
	bool		signConv;
	T			data;

public:
	Converter();
	Converter(std::string _input);
	Converter(const Converter &other);
	~Converter();

	void printTypes();
}
