#ifndef TEACHER_H
#define TEACHER_H

#include "alumn.h"
#include "base.h"

class Teacher : public Base
{
private:
    vector <Alumn> alumnList;
    int counter;
public:
    Teacher();
    Teacher(string, string, string);

    void addAlumn(Alumn aux);

    void assignGrade(Alumn &a, float gr);
    void assignGrade(Alumn &a, float gr, float gr2);
    void assignGrade(Alumn &a, float gr, float gr2, float gr3);

    float averageGrade(Alumn &a);

    void printAlumns();

    void printBestAlumn();

    int Alumnequals(Alumn a);

    vector<Alumn> getAlumnList();

    int getNumAlumns();
};

#endif // TEACHER_H
