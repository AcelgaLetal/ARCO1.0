#include "alumn.h"

Alumn::Alumn()
{
    counter = 0;
}
Alumn::Alumn(string _name, string _surname, string _nif) : Base (_name, _surname, _nif)
{
    counter = 0;
}

int Alumn::getNumberOfGrades()
{
    return counter;
}

vector<float> Alumn::getGrades()
{
    return grades;
}

void Alumn::addGrade(float n)
{
    grades.push_back(n);
    counter++;
}
