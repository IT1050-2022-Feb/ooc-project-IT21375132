#include <iostream>
#include "Patient.h"
#include <cstring>
using namespace std;

Patient::Patient()
{
	strcpy(patientID, "");
	height = 0;
	weight = 0;
}

Patient::Patient(const char pEmail[], const char pName[], const char pNIC[], const char pPatientID[], float pHeight, float pWeight) : System_User(pEmail, pName, pNIC)
{
	strcpy(patientID, pPatientID);
	height = pHeight;
	weight = pWeight;
}

void Patient::displayDetails()
{ 
	cout << "Email : " << email << endl
		   << "Name : " << name << endl
		   << "NIC No : " << NIC << endl
       << "Patient ID : " << patientID << endl
		   << "Height : " << height << endl
		   << "Weight : " << weight << endl << endl;
}
