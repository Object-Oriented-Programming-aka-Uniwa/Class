#ifndef student_H
#define student_H

#include <string>
using namespace std;

class STUDENT
{
    private :
        char *Uid;
        string Student;
        unsigned int Semester;
    public :
        STUDENT (const char *, string);
        STUDENT (const char *, string, unsigned int);
        STUDENT (const STUDENT &);
        ~STUDENT ();
        void Set_Uid (const char *);
        void Set_Student (string);
        void Set_Semester (unsigned int);
        char *Get_Uid () const;
        string Get_Student () const;
        unsigned int Get_Semester () const;
        void Print (ostream &);
        void Increase_Sem ();
};

#endif
