#include <iostream>
#include <string>
using namespace std;

template<typename T>
class MyClass
{
    private:
       T Value ; 
       
    public:
        MyClass(T value):Value(value){}
        void SetValue (T Value)
        {
            this->Value = Value ;
        }
        T GetValue () const
        {
            return Value ;
        }
        T Add1(T Value) const
        {
            return this->Value + Value ;
        }
        T Subtract1(T Value) const
        {
            return this->Value - Value ;
        }
        
};

int main()
{
    MyClass<int> x(5);

    cout << "x value     : " << x.GetValue() << endl;
    cout << "Add 2       : " << x.Add1(2) << endl;
    cout << "Sunbtract 1 : " << x.Subtract1(1) << endl;

    return 0 ;
}