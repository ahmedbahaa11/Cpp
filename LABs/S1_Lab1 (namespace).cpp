
#include <iostream>
#include <string>

using namespace std ;
namespace circle 
{
    double perimeter (int Diameter)
    {
        double perimeter ;
        perimeter = Diameter * (22/7) ;
        return perimeter ;
    }
    void print (double x)
    {
        cout << "perimeter of circle = " << x << endl;
    }
}
namespace triangle 
{
    int perimeter (int x , int y , int z)
    {
        int perimeter ;
        perimeter = x + y + z ;
        return perimeter ;
    }
    void print (int x)
    {
        cout << "perimeter of triangle = " << x << endl;
    }
}
namespace rectangular 
{
    int perimeter (int Length , int Width )
    {
        int perimeter ;
        perimeter = 2 * (Length + Width)  ;
        return perimeter ;
    }
    void print (int x)
    {
        cout << "perimeter of rectangular = " << x << endl;
    }
}
int main() 
{
    double x;
    int y,z ;
    x = circle::perimeter(13);
    circle::print(x);

    y = triangle::perimeter(5,10,20);
    triangle::print(y);

    z = rectangular::perimeter(10,20);
    rectangular::print(z);
    

    return 0;
}
