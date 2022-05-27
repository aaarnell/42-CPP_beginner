#include <string>
#include <iostream>

struct Data
{
	std::string	name;
	int			value;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data arr = {"DefaultStruct", -100000000};
	Data *ptr1 = &arr;

	std::cout << "name_ptr1 = '" << ptr1->name << "', value_ptr1 = '" << ptr1->value << "'" << std::endl;

	Data *ptr2;
	uintptr_t res = serialize(ptr1);

	std::cout << "ptr1 = '" << ptr1 << "', res (in int) = '" << res << "', res (in hex) = '" << std::hex << res << "'" << std::endl;

	ptr2 = deserialize(res);

	std::cout << "name_ptr2 = '" << ptr2->name << "', value_ptr2 = '"  << std::dec << ptr2->value << "'" << std::endl;

	return 0;
}

