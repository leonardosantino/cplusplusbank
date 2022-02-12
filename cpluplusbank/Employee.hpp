#pragma once
#include <string>

class Employee
{
protected:
	std::string name;
	std::string cpf;

public:
	Employee(std::string name, std::string cpf);
	std::string getName();
	std::string getCpf();
};
