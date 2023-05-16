#include <iostream>
#include <string>
using namespace std ;

class person
{
    private:
        string name ;
        int age ;
        bool type ;
    
    public:
        void Set_Person_Name(string Local_Name)
        {
            name = Local_Name ;
        }
        void Set_Person_Age(int Local_Age)
        {
            age = Local_Age ;
        }
        void Set_Person_Type(bool Local_Type)
        {
            type = Local_Type ;
        }
        virtual void Show_Data (void)
        {
            cout << "Name   : " << name << endl;
            cout << "Age    : " << age << endl;
            cout << "Type   : " << type << endl;
        }
        // person(string name,int age,bool type):name(name),age(age),type(type)
        // {
        //     /* Constructive Called */
        // }
};
/*============================================================*/
class student : virtual public person
{
    private:
        float GPA ;
        int Level ;
    public:
        void Set_Student_GPA (float Local_GPA)
        {
            GPA = Local_GPA ;
        }
        void Set_Student_Level (int Local_Level)
        {
            Level = Local_Level ;
        }
        void Show_Data (void) override
        {
            person::Show_Data();
            cout << "GPA    : " << GPA << endl;
            cout << "Level  : " << Level << endl;
        }
        // student(string name,int age,bool type,float GPA,int Level):GPA(GPA),Level(Level),person(name,age,type)
        // {
        //     /* Constructive Called */
        // }
};
/*============================================================*/
class sport : virtual public student
{
    private:
        int weight ;
        string Club;
    public:
        void Set_Sport_weight (int Local_weight)
        {
            weight = Local_weight ; 
        }
        void Set_Sport_Club (string Local_Club)
        {
            Club = Local_Club ; 
        }
         void Show_Data (void) override
        {
            student::Show_Data();
            cout << "Weight : " << weight << "Kg" << endl;
            cout << "Club   : " << Club << endl;
        }
        // sport(string name,int age,bool type,float GPA,int Level,int weight,string Club):weight(weight),Club(Club),student(name,age,type,GPA,Level)
        // {
        //     /* Constructive Called */
        // }
};
/*============================================================*/
class Employee : virtual public person
{
    private:
        int Salary;
        string Position;
    public:
        void Set_employee_Salary (int Local_Salary)
        {
            Salary = Local_Salary ; 
        }
        void Set_employee_Position (string Local_Position)
        {
            Position = Local_Position ; 
        }
        void Show_Data (void) override
        {
            person::Show_Data();
            cout << "Salary  : " << Salary << endl;
            cout << "Position: " << Position << endl;
        }
        void Show_OwnData_Only (void)
        {
            cout << "Salary  : " << Salary << endl;
            cout << "Position: " << Position << endl;
        }
        // Employee(string name,int age,bool type,int salary,string position):Salary(salary),Position(position),person(name,age,type)
        // {
        //     /* Constructive Called */
        // }
};
/*============================================================*/
class MultiTasker : public student , public Employee
{
    private:
        int work_hour;
        int study_hour;
    public:
        void Set_work_hour (int Local_work_hour)
        {
            work_hour = Local_work_hour ; 
        }
        void Set_study_hour (int Local_study_hour)
        {
            study_hour = Local_study_hour ; 
        }
        void Show_Data (void) override
        {
            student::Show_Data();
            Employee::Show_OwnData_Only();
            cout << "Work Hours  : " << work_hour << endl;
            cout << "Study Hours : " << study_hour << endl;
        }
};
/*============================================================*/

int main()
{
    MultiTasker M1 ;
    M1.Set_Person_Name("Bahaa");
    M1.Set_Person_Age(25);
    M1.Set_Person_Type(true);
    M1.Set_Student_GPA(3.55);
    M1.Set_Student_Level(4);
    M1.Set_employee_Salary(1500);
    M1.Set_employee_Position("Senior");
    M1.Set_study_hour(6);
    M1.Set_work_hour(10);
    M1.Show_Data();

/*
    cout << "================" << endl;
    cout << "      Sport     " << endl;
    cout << "================" << endl;
    sport S1("Bahaa",25,true,3.99,5,70,"Al-Ahly");
    // S1.Set_Person_Name("Bahaa");
    // S1.Set_Person_Age(25);
    // S1.Set_Person_Type(true);
    // S1.Set_Student_GPA(3.55);
    // S1.Set_Student_Level(4);
    // S1.Set_Sport_weight(60);
    // S1.Set_Sport_Club("Al Ahly");
    S1.Show_Data();

    cout << "================" << endl;
    cout << "    Employee   " << endl;
    cout << "================" << endl;

    Employee E1("Ahmed",20,true,15000,"Senior") ;
    // E1.Set_Person_Name("Ahmed");
    // E1.Set_Person_Age(20);
    // E1.Set_Person_Type(true);
    // E1.Set_employee_Salary(15000);
    // E1.Set_employee_Position("Senior");
    E1.Show_Data();
    // person P1;
    // P1.Set_Person_Name("Ahmed");
    // P1.Set_Person_Age(25);
    // P1.Set_Person_Type(true);
    // P1.Show_Person_Data();

*/
    return 0 ;
}

