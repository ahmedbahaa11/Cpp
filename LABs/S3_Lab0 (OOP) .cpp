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
    static int counter ;
    school():Max_Student(10),Student_Numbers(10),Teacher_Numbers(10) // Constructive 
    {
        cout << "=== Constructive Called ===" << endl;
        counter ++ ;
        cout << "Counter = " << counter << endl;
    }
    void Set_Max_Student ( int Local_MaxStudent);
    void Set_Student_Numbers ( int Local_StudentNumbers);
    void Set_Teacher_Numbers ( int Local_TeacherNumbers);
    void Show_School_Data (void);
    school(int x):Max_Student(x),Student_Numbers(x),Teacher_Numbers(x) // Constructive
    {
        // cout << "Constructive Called (int)" << endl;
        counter ++ ;
        // cout << "Counter = " << counter << endl;
    }
    ~school()
    {
        // cout << "Destructive Called" << endl;
    }
    static void Sum(int a, int b)        // static function
    {
        cout<<"Sum = "<< a+b << endl;
    }
    school(int x,int y):Max_Student(0),Student_Numbers(x),Teacher_Numbers(y) // Constructive
    {
        counter ++ ;
    }
    school operator ++ ()
    {
        int temp1 , temp2 ;
        temp1 = Student_Numbers ;
        temp2 = Teacher_Numbers ;
        ++ temp1 ;
        ++ temp2 ;
        return school(temp1,temp2);
    }
     school operator ++ (int)
    {
        int temp1 , temp2 ;
        temp1 = Student_Numbers ;
        temp2 = Teacher_Numbers ;
        temp1 ++ ;
        temp2 ++ ;
        return school(temp1,temp2);
    }
    school operator -- ()
    {
        int temp1 , temp2 ;
        temp1 = Student_Numbers ;
        temp2 = Teacher_Numbers ;
        -- temp1 ;
        -- temp2 ;
        return school(temp1,temp2);
    }
    school operator -- (int)
    {
        int temp1 , temp2 ;
        temp1 = Student_Numbers ;
        temp2 = Teacher_Numbers ;
        temp1 -- ;
        temp2 -- ;
        return school(temp1,temp2);
    }
    school operator + (school d2 )
    {
        int x = Student_Numbers + d2.Student_Numbers ;
        int y = Teacher_Numbers + d2.Teacher_Numbers ;
        return school(x,y);
    }
    school operator - (school d2 )
    {
        int x = Student_Numbers - d2.Student_Numbers ;
        int y = Teacher_Numbers - d2.Teacher_Numbers ;
        return school(x,y);
    }
    school operator * (school d2 )
    {
        int x = Student_Numbers * d2.Student_Numbers ;
        int y = Teacher_Numbers * d2.Teacher_Numbers ;
        return school(x,y);
    }
    school operator / (school d2 )
    {
        int x = Student_Numbers / d2.Student_Numbers ;
        int y = Teacher_Numbers / d2.Teacher_Numbers ;
        return school(x,y);
    }
};

int school::counter = 0 ;

int main()
{
    cout << "==============================" << endl;
    school::Sum(50,50);     // static function
    cout << "==============================" << endl;
    school S1 ;
    S1.Name = "iTi" ;
    // S1.Set_Max_Student (150);
    // S1.Set_Student_Numbers (120);
    // S1.Set_Teacher_Numbers (10);
    S1.Show_School_Data ();
    
/****************************************************************/
    cout << "==============================" << endl;
    school S2 = S1 ;
    S2.Show_School_Data ();
    cout << "==============================" << endl;
/****************************************************************/
    school S3 = ++S1 ;
    S3.Show_School_Data ();
    cout << "==============================" << endl;
    school S4 = S1++ ;
    S4.Show_School_Data ();
    cout << "==============================" << endl;
    school S5 = --S1 ;
    S5.Show_School_Data ();
    cout << "==============================" << endl;
    school S6 = S1-- ;
    S6.Show_School_Data ();
    cout << "==============================" << endl;
    school S7 = S1 + S2 ;
    S7.Show_School_Data ();
    cout << "==============================" << endl;
    school S8 = S1 - S2 ;
    S8.Show_School_Data ();
    cout << "==============================" << endl;
    school S9 = S1 * S2 ;
    S9.Show_School_Data ();
    cout << "==============================" << endl;
    school S10 = S1 / S2 ;
    S10.Show_School_Data ();
    cout << "==============================" << endl;
    school S11 = (S9)+(S10)+(S3) ;
    S11.Show_School_Data ();
    cout << "==============================" << endl;
    school S12 = (S1 * S2)+(S1 / S2)+(S3);
    S12.Show_School_Data ();
    cout << "==============================" << endl;

    cout << "Counter = " << school::counter << endl;
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
    // cout << "School Name : " << Name << endl ;
    // cout << "Maximum Student Number : " << Max_Student << endl ;
    cout << "Number of Students : " << Student_Numbers << endl ;
    cout << "Number of Teacher  : " << Teacher_Numbers << endl ;
}