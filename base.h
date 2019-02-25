#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <vector>
using namespace std;

class Base
{
private:
    string name;
    string surname;
    string nif;
public:
    Base();
    Base(string, string, string);

    void setName(string n);
    void setSurname(string n);
    void setNif(string n);

    string getName();
    string getSurname();
    string getNif();
};

#endif // BASE_H
