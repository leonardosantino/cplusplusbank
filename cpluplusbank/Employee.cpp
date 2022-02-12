#include "Employee.hpp"

Employee::Employee(std::string name, std::string cpf) : name(name), cpf(cpf)
{
}

std::string Employee::getName()
{
	return this->name;
}

std::string Employee::getCpf()
{
	return this->cpf;
}
