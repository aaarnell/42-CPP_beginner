#include <string>

class Type
{
protected:
	std::string input;
	std::string output;

public:
	Type();
	Type(std::string _input);
	Type(const type &other);
	virtual ~Type();

	virtual void printOut() = 0;
}
