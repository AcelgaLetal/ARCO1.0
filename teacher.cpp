#include "teacher.h"
#include "alumn.h"

Teacher::Teacher()
{

}
Teacher::Teacher(string _name, string _surname, string _nif) : Base (_name, _surname, _nif)
{
    counter = 0;
}


void Teacher:: assignGrade(Alumn &a, float gr)
{
    if(Alumnequals(a) != -1)
    {
        alumnList[Alumnequals(a)].addGrade(gr);
    }
}

void Teacher:: assignGrade(Alumn &a, float gr, float gr2)
{
    if(Alumnequals(a) != -1)
    {
        alumnList[Alumnequals(a)].addGrade(gr);
        alumnList[Alumnequals(a)].addGrade(gr2);
    }
}

void Teacher:: assignGrade(Alumn &a, float gr, float gr2, float gr3)
{
    if(Alumnequals(a) != -1)
    {
        alumnList[Alumnequals(a)].addGrade(gr);
        alumnList[Alumnequals(a)].addGrade(gr2);
        alumnList[Alumnequals(a)].addGrade(gr3);
    }
}

void Teacher::addAlumn(Alumn aux)
{

    alumnList.push_back(aux);
    counter++;
}

float Teacher::averageGrade(Alumn &a)
{
    vector <float> allGrades;
    float sum = 0.0;
    float result = 0.0;
    int numGrades = 0;

    if(Alumnequals(a) != -1)
    {
        allGrades = alumnList[Alumnequals(a)].getGrades();
        numGrades = alumnList[Alumnequals(a)].getNumberOfGrades();
    }

    for(int i = 0; i < numGrades; i++)
    {
        sum += allGrades[i];
    }

    result = sum / numGrades;

    return result;

}

void Teacher::printAlumns()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"Nombre: "<<alumnList[i].getName()<<" Media: "<<averageGrade(alumnList[i])<<endl;
    }
}

void Teacher::printBestAlumn()
{
    float bestGrade = 0.0;
    float aux = 0.0;
    int bestAlumn;

    for(int i = 0; i < counter; i++)
    {
        if(alumnList[i].getNumberOfGrades() == 3)
        {
            aux = averageGrade(alumnList[i]);

            if(aux > bestGrade)
            {
              bestGrade = aux;
              bestAlumn = i;
            }
        }
    }
    cout<<"El mejor alumno del profesor "<<getName()<<" "<<getSurname()<<" es: "<<alumnList[bestAlumn].getName();
}

int Teacher::Alumnequals(Alumn a)
{
    for(int i = 0; i < counter; i++)
    {
        if(a.getName() == alumnList[i].getName())
        {
            if(a.getSurname() == alumnList[i].getSurname())
            {
                if(a.getNif() == alumnList[i].getNif())
                {
                    return i;
                }
            }
        }
    }
    return -1;
}

vector<Alumn> Teacher::getAlumnList()
{
    return alumnList;
}

int Teacher::getNumAlumns()
{
    return counter;
}




