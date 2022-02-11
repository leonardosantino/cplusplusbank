#include "Holder.hpp"

Holder::Holder(std::string name, std::string cpf) : name(name), cpf(cpf)
{
}

std::string Holder::getName()
{
	return this->name;
}

std::string Holder::getCpf()
{
	return this->cpf;
}
