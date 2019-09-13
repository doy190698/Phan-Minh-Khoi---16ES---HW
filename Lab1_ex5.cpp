#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
class Student{
private:
    string name;
    long id;
    double mathMark;
    double englishMark;
    double physicsMark;
    double chemistryMark;
public:
    Student(string Name, long Id)
    {
        name=Name;
        id=Id;
    }
    void setMathMark(double value)
    {
        if(value>0 && value <=100)
        {
            mathMark=value;
        }
    }
    void setEnglishMark(double value)
    {
        if(value>0 && value<=100)
        {
            englishMark=value;
        }
    }
    void setPhysicsMark(double value)
    {
        if(value>0 && value <=100)
        {
            physicsMark=value;
        }
    }
    void setChemistryMark(double value)
    {
        if(value>0 && value<=100)
        {
            chemistryMark=value;
        }
    }
    double getAverage()
    {
        double result=0;
        result=(mathMark+englishMark+physicsMark+chemistryMark)/4;
        return result;
    }
    void displayDetails()
    {
        cout << "name= " << name << endl;
        cout << "id= " << id << endl;
        cout << "average= " << getAverage() << endl;

    }
};
main()
{
Student Std("Haim",123123);
Std.setChemistryMark(98);
Std.setEnglishMark(88);
Std.setPhysicsMark(78);
Std.setMathMark(100);
Std.displayDetails();
}
