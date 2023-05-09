#include <iostream>
#include <string>
using namespace std ;

template <typename T>
T Sum_2 (T n1,T n2)
{
    return n1+n2 ; 
}

template <typename T1,typename T2,typename T3>
T1 Max (T2 n1,T3 n2)
{
    return (n1 > n2)? n1 : n2 ; 
}

template <typename T1,typename T2,typename T3>
T1 Sum1 (T2 n1,T3 n2)
{
    return n1+n2 ; 
}

int main() 
{
    cout << "=========" << endl ;
    cout << Sum_2 <int> (7.6,5.7) << endl ;
    cout << "=========" << endl ;
    cout << Max <int,float,float> (4.3,2.3) << endl ;
    cout << Max <int,char,float> ('A',5.3) << endl ; 
    cout << Max <float,float,float> (20.9,19.6) << endl ;
    cout << Max <char,int,int> (99,12) << endl ;
    cout << Max <string,string,string> ("Ahmed","Bahaa") << endl ;
    cout << "=========" << endl ;   
    cout << Sum1 <char,float,float> (4.3,2.3) << endl ;
    cout << Sum1 <char,char,float> ('A',5.3) << endl ; 
    cout << Sum1 <double,int,float> (20,20.6) << endl ;
    cout << Sum1 <char,int,int> (99,12) << endl ;
    cout << Sum1 <string,string,string> ("Ahmed","Bahaa") << endl ;
    cout << "=========" << endl ;

    return 0 ;
}