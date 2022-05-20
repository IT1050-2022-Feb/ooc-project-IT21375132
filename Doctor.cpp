#include <iostream>
#include <cstring>
#include "Doctor.h"
#include "System_User.h"
using namespace std;

Doctor::Doctor()
{
	strcpy(doctorID, "");
	strcpy(specialization, "");
	strcpy(qualification, "");
}

Doctor::Doctor(const char pEmail[], const char pName[], const char pNIC[], const char pDoctorID[], const char pSpecialization[], const char pQualification[]) : System_User(pEmail, pName, pNIC)
{
	strcpy(doctorID, pDoctorID);
	strcpy(specialization, pSpecialization);
	strcpy(qualification, pQualification);
}

void Doctor::displayDetails()
{
  cout << "Email : " << email << endl
		   << "Name : " << name << endl
		   << "NIC No : " << NIC << endl
	     << "Doctor ID : " << doctorID << endl
       << "Specialization : " << specialization << endl
		   << "Qualification : " << qualification << endl << endl;
}
