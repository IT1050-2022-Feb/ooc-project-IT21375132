#pragma once
#include <iostream>
#include "System_User.h"
using namespace std;

class Patient : public System_User
{
protected:
    char patientID[6];
    float height;
    float weight;

public:
    Patient();
    Patient(const char pEmail[], const char pName[], const char pNIC[], const char pPatientID[], float pHeight, float pWeight);
    void setPatientID(char pPatientID);
    void setHeight(float pHeight);
    void setWeight(float pWeight);
    char getPatientID();
    float getHeight();
    float getWeight();
    void displayDetails();
};

