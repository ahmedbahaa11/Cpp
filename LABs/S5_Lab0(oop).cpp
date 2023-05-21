#include <iostream>
#include <string>
using namespace std;

class Shape
{
    private:
       int Area ; 
       int x = 10;
    public:
        virtual void area (int x , int y) = 0 ;
        friend void Get_val (Shape& p);
        
};
void Get_val (Shape& p)  // function can access var in private
{
    cout << p.x << endl;
}
class Triangle : public Shape 
{
    private:
        int Area ;
    public:
        virtual void area (int x , int y) override
        {
            Area = x * y ;
            cout << "Triangle area = " << Area << endl;
        }
};
class Circle : public Shape 
{
    private:
       int Area ; 
    public:
        virtual void area (int x , int y) override
        {
            Area = x + y ;
            cout << "Circle area = " << Area << endl;
        }
};
class Rectangle : public Shape 
{
    private:
       int Area ; 
    public:
        virtual void area (int x , int y) override
        {
            Area = (x*2)+y ;
            cout << "Rectangle area = " << Area << endl;
        }
};

int main ()
{
    Triangle d ;
    Get_val(d);

    Triangle x ;
    x.area(5,10);
    Circle y ;
    y.area(5,10);
    Rectangle z ;
    z.area(5,10);

    return 0;
}