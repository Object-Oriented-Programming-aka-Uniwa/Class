#include <iostream>
#include <cstring>
#include "STUDENT.h"

STUDENT::STUDENT (const char *Mat, string Name)
{
    Uid = new char [strlen (Mat) + 1];
    strcpy (Uid, Mat);
    Student = Name;
    Semester = 1;
}

STUDENT::STUDENT (const char *Mat, string Name, unsigned int Sem)
{
    Uid = new char [strlen (Mat) + 1];
    strcpy (Uid, Mat);
    Student = Name;
    Semester = Sem;
}

STUDENT::STUDENT (const STUDENT &student)
{
    Uid = new char [strlen (student.Uid) + 1];
    strcpy (Uid, student.Get_Uid ());
    Student = student.Get_Student ();
    Semester = student.Get_Semester ();
}

STUDENT::~STUDENT ()
{
    delete [] Uid;
}
    
void STUDENT::Set_Uid (const char *Mat)
{
    if (Uid != NULL)
        delete [] Uid;
    
    Uid = new char [strlen (Mat) + 1];
    strcpy (Uid, Mat);
}

void STUDENT::Set_Student (string Name)
{
    Student = Name;
}

void STUDENT::Set_Semester (unsigned int Sem)
{
    Semester = Sem;
}

char *STUDENT::Get_Uid () const
{
    return Uid;
}

string STUDENT::Get_Student () const
{
    return Student;
}

unsigned int STUDENT::Get_Semester () const
{
    return Semester;
}

void STUDENT::Print (ostream &output)
{
    output << Student << " " << Uid << "        " << Semester << endl;
}

void STUDENT::Increase_Sem ()
{
    Semester++;
}
