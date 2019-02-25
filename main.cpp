#include <iostream>
#include <vector>
#include "teacher.h"
#include "alumn.h"
using namespace std;

void Calificando();

int main()
{
    Calificando();
}

void Calificando()
{
    Teacher t1("Abigail", "Marston", "38279856D");
    Teacher t2("Alberto", "Quesada", "34789876H");

    Alumn a1t1("Jose", "Galan", "58394509R");
    Alumn a2t1("Marcos", "Gonzalez", "47982044T");

    Alumn a1t2("Javier", "Castrillo", "39092849D");
    Alumn a2t2("Maria", "Lina", "29402495R");
    Alumn a3t2("Ultimo", "Ramirez", "34569874T");

    t1.addAlumn(a1t1);
    t1.addAlumn(a2t1);
    t2.addAlumn(a1t2);
    t2.addAlumn(a2t2);
    t2.addAlumn(a3t2);

    t1.assignGrade(a1t1, 5.0, 4.0, 3.0);
    t1.assignGrade(a2t1, 4.0, 9.0, 9.0);
    t2.assignGrade(a1t2, 5.0, 4.0, 3.0);
    t2.assignGrade(a2t2, 4.0, 9.0, 9.0);
    t2.assignGrade(a3t2, 10.0, 10.0);

    vector <Alumn> firstTeacherList;
    firstTeacherList = t1.getAlumnList();
    //Profesor1
    cout<<"Profesor: "<<t1.getName()<<" "<<t1.getSurname()<<"    DNI: "<<t1.getNif()<<endl;

    for (int i = 0; i < t1.getNumAlumns(); i++)
    {
        cout<<"     Alumn: "<<firstTeacherList[i].getName()<<" "<<firstTeacherList[i].getSurname()<<"      DNI: "<<firstTeacherList[i].getNif()<<endl;
        cout<<"     Numero de notas: "<<firstTeacherList[i].getNumberOfGrades()<< "    Nota media: "<<t1.averageGrade(firstTeacherList[i])<<endl;
        cout<<endl;
    }
    t1.printBestAlumn();
    cout<<endl;cout<<endl;cout<<"******************************************************"<<endl;

    vector <Alumn> secondTeacherList;
    secondTeacherList = t2.getAlumnList();
    //Profesor1
    cout<<"Profesor: "<<t2.getName()<<" "<<t2.getSurname()<<"    DNI: "<<t2.getNif()<<endl;

    for (int i = 0; i < t2.getNumAlumns(); i++)
    {
        cout<<"     Alumn: "<<secondTeacherList[i].getName()<<" "<<secondTeacherList[i].getSurname()<<"      DNI: "<<secondTeacherList[i].getNif()<<endl;
        cout<<"     Numero de notas: "<<secondTeacherList[i].getNumberOfGrades()<< "    Nota media: "<<t2.averageGrade(secondTeacherList[i])<<endl;
        cout<<endl;
    }
    t2.printBestAlumn();
    cout<<endl;cout<<endl;cout<<"******************************************************"<<endl;
}
