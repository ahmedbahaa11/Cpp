#include <iostream>
#include <string>
using namespace std ;

class school
{
    private:
    int Max_Student = 0 ;
    int Student_Numbers = 0 ;
    int Teacher_Numbers = 0 ;

    public:
    string Name  ;
    school():Max_Student(0),Student_Numbers(10),Teacher_Numbers(0) // Constructive 
    {
        cout << "=== Constructive Called ===" << endl;
    }
    void Set_Max_Student ( int Local_MaxStudent);
    void Set_Student_Numbers ( int Local_StudentNumbers);
    void Set_Teacher_Numbers ( int Local_TeacherNumbers);
    void Show_School_Data (void);
};

int main()
{
    cout << "==============================" << endl;
    school S1 ;
    S1.Name = "iTi" ;
    S1.Set_Max_Student (150);
    S1.Set_Student_Numbers (120);
    S1.Set_Teacher_Numbers (10);
    S1.Show_School_Data ();
    
/****************************************************************/
    cout << "==============================" << endl;
    school S2 ;
    S2.Name = "HTI" ;
    S2.Set_Max_Student (200);
    S2.Set_Student_Numbers (175);
    S2.Set_Teacher_Numbers (15);
    S2.Show_School_Data ();
    cout << "==============================" << endl;
/****************************************************************/

    return 0 ;
}

void school::Set_Max_Student ( int Local_MaxStudent)
{
    Max_Student = Local_MaxStudent ;
}
void school::Set_Student_Numbers ( int Local_StudentNumbers)
{
    if ( Local_StudentNumbers < Max_Student )
    {
        Student_Numbers = Local_StudentNumbers ;
    } 
    else
    {
        cout << "Not Allowed Student Number" << endl;
    }
}
void school::Set_Teacher_Numbers ( int Local_TeacherNumbers)
{
    
    if ( Local_TeacherNumbers < 20 )
    {
        Teacher_Numbers = Local_TeacherNumbers ;
    } 
    else
    {
        cout << "Not Allowed Teacher Number" << endl;
    }
}
void school::Show_School_Data (void)
{
    cout << "School Name : " << Name << endl ;
    cout << "Maximum Student Number : " << Max_Student << endl ;
    cout << "Number of Students : " << Student_Numbers << endl ;
    cout << "Number of Teacher = " << Teacher_Numbers << endl ;
}