#include<string.h>
#include "Student.h"
#include <iostream>
using namespace std;
// Assign studentId and name
 void Student::assignDetails(int id,char sname[20]) {
   studentId = id;
   strcpy(name,sname);
}

// Display StudentId and Name
void  Student::display() {
cout << studentId <<endl  << name ;
}
