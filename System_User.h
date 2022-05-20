#pragma once
#include <iostream>
using namespace std;

class System_User
{
protected:
    char email[50];
    char name[20];
    char NIC[15];

public:
    System_User();
    System_User(const char pEmail[], const char pName[], const char pNIC[]);
    void setEmail(char pEmail);
    void setName(char pName);
    void setNIC(char pNIC);
    char getEmail();
    char getName();
    char getNIC();
    void displayDetails();

};


