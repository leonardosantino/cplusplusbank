#pragma once
#include <string>

class Holder
{
private:
	std::string name;
	std::string cpf;

public:
	Holder(std::string name, std::string cpf);
	std::string getName();
	std::string getCpf();
};

