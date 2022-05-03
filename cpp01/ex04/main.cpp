#include <iostream>
#include <string>
#include <fstream>


int main(int argc, char *argv[])
{
	std::ifstream	file;
	std::ifstream	fileReplace;
	std::string		filename;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return -1;
	}
	//открыть файл
	filename = argv[1];
	file.open(filename);
	//проверить корректность открытия файла
	if (!file)
	{
		std::cout << "Error opening source file" << std::endl;
		return -1;
	}
	//создать и открыть новый файл
	filename.append(".replace");
	fileReplace.open(filename);
	//проверить, что открыт
	if (!fileReplace)
	{
		std::cout << "Error opening target file" << std::endl;
		return -1;
	}
	//получаем строку из файла-источника
	while(!file.eof())
	{
		getline(file, str);
		//проверяем на совпадение со строкой S1
		//если совпадает, то в файл-цель записываем строку S2
		//иначе запишем полученную строку
		//когда закончим, сохраним файл и закроем
	}
	file.close();
	fileReplace.close();
	return 0;
}
