#include <iostream>
#include <cstring>
#include "STUDENT.h"

int main (int argc, char **argv)
{
    char *uid1;
    char *uid2;
    string name1;
    string name2;
    unsigned int sem2;

    uid1 = new char [strlen ("21390154") + 1];
    strcpy (uid1, "21390154");
    name1 = "Evangelia Oikonomou";  // Translated name
    uid2 = new char [strlen ("19390005") + 1];
    strcpy (uid2, "19390005");
    name2 = "Vasileios Athanasiou"; // Translated name
    sem2 = 6;

    STUDENT Name1 (uid1, name1);
    STUDENT Name2 (uid2, name2, sem2);
    STUDENT Name3 (Name2);

    delete [] uid1;
    delete [] uid2;

    cout << "Student Name" << "       " << "Registration Number" << " " << "Current Semester" << endl << endl; // Header translated
    Name1.Print (cout);
    Name2.Print (cout);
    Name3.Print (cout);
    Name1.Increase_Sem ();
    Name2.Increase_Sem ();
    Name3.Increase_Sem ();
    cout << endl << "Student Name" << "       " << "Registration Number" << " " << "Next Semester" << endl << endl; // Header translated
    Name1.Print (cout);
    Name2.Print (cout);
    Name3.Print (cout);

    return 0;
}
