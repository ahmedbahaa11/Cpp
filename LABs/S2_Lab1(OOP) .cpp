#include <iostream>
#include <string>
using namespace std ;

class company
{
    private:
    int annual_earned_money = 0 ;
    int employee_number = 0 ;
    int customer_number = 0 ;
    int average_employee_salary = 0 ;

    public:
    company():employee_number(10),customer_number(2),average_employee_salary(1000)      // Constructive 
    {
        cout << "=== Constructive Called ===" << endl;
    }
    void Add_Employee (void);
    void Add_Customer (void);
    void Set_average_employee_salary ( int Local_Salary);
    void Set_annual_earned_money ( int Local_TargetValue);
    void Show_Company_Data (void);
};

int main()
{
    cout << "==============================" << endl;
    cout << "            Valeo             " << endl;
    cout << "==============================" << endl;
    company Valeo ;
    Valeo.Add_Customer();
    Valeo.Add_Employee();
    Valeo.Add_Employee();
    Valeo.Add_Employee();
    Valeo.Add_Employee();
    Valeo.Add_Employee();
    Valeo.Set_average_employee_salary(1500);
    Valeo.Set_annual_earned_money(500000);
    Valeo.Show_Company_Data();
/****************************************************************/
    cout << "==============================" << endl;
    cout << "            Avelabs           " << endl;
    cout << "==============================" << endl;
    company Avelabs ;
    Avelabs.Add_Customer();
    Avelabs.Add_Customer();
    for ( int i=0 ; i<10 ; i++ )
    {
        Avelabs.Add_Employee();
    }
    Avelabs.Set_average_employee_salary(2500);
    Avelabs.Set_annual_earned_money(1000000);
    Avelabs.Show_Company_Data();
/****************************************************************/

    return 0 ;
}

void company::Add_Employee (void)
{
    if ( employee_number < 100 )
    {
        employee_number ++ ;
    }
}
void company::Add_Customer (void)
{
    customer_number ++ ; 
}
void company::Set_average_employee_salary ( int Local_Salary)
{
    if ( Local_Salary > 1000 )
    {
        average_employee_salary = Local_Salary ;
    } 
    else
    {
        cout << "Invalid Salary Value" << endl;
    }
}
void company::Set_annual_earned_money ( int Local_TargetValue)
{
    annual_earned_money = Local_TargetValue ;
}
void company::Show_Company_Data (void)
{
    cout << "Anual Earned Money = " << annual_earned_money << endl ;
    cout << "Average Employee Salary = " << average_employee_salary << endl ;
    cout << "Number of Customers = " << customer_number << endl ;
    cout << "Number of Employees = " << employee_number << endl ;
}