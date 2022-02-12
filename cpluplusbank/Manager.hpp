#pragma once
#include "Employee.hpp"

class Manager: public Employee
{

public:
	Manager(std::string name, std::string cpf);
};

