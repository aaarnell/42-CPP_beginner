#pragma once
#include <string>
#define NUM_OF_IDEAS 100

class Brain
{
private:
	std::string ideas[NUM_OF_IDEAS];

public:
	Brain();
	Brain(const Brain &other);
	~Brain();

	Brain& operator=(const Brain &other);
};
