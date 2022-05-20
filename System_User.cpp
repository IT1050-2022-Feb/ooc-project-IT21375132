#include <iostream>
#include "System_User.h"
#include <cstring>
using namespace std;

System_User::System_User()
{
	strcpy(email, "");
	strcpy(name, "");
	strcpy(NIC, "");
}

System_User::System_User(const char pEmail[], const char pName[], const char pNIC[])
{
	strcpy(email, pEmail);
	strcpy(name, pName);
	strcpy(NIC, pNIC);
}

void System_User::displayDetails()
{
	cout << "Email : " << email << endl
		   << "Name : " << name << endl
		   << "NIC No : " << NIC << endl;
}
