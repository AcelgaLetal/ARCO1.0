#include "base.h"

Base::Base()
{

}
Base::Base(string _name, string _surname, string _nif)
{
    name = _name;
    surname = _surname;
    nif = _nif;
}

void Base::setName(string n)
{
    name = n;
}

void Base::setSurname(string n)
{
    surname = n;
}

void Base::setNif(string n)
{
    nif = n;
}

string Base::getName()
{
    return name;
}

string Base::getSurname()
{
    return surname;
}

string Base::getNif()
{
    return nif;
}

