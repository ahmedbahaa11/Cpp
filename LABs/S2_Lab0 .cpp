#include <iostream>
#include <string>
using namespace std ;
int main()
{
    int x = 5 ;
    int y = 10 ;
    int &ref = x ;

    cout<<" ref = "<< ref << endl ;

    ref = y ;

    cout<<" ref = "<< ref << endl ;
    ref = 20 ;
    cout<<" x = "<< x << endl ;
    cout<<" y = "<< y << endl ;

    return 0 ;
}