/*************************************/
/* Project : population growth       */
/* Auther  : Ahmed Bahaa Nasr        */ 
/* Date    : 8/5/2023                */ 
/*************************************/

#include <iostream>
#include <string>
using namespace std ;

namespace governorate_1 
{
    namespace City_1
    {
        int *Arr_City = new int[4] ;
        void Edit (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 1 / City 1          " << endl ;
            cout << "========================================" << endl ;
            cout << "Entre Number of Peoples   : " ;
            cin >> Arr_City[0] ;
            cout << "Entre Number of Familyes  : " ;
            cin >> Arr_City[1] ;
            cout << "Entre Number of Employees : " ;
            cin >> Arr_City[2] ;
            cout << "Entre Number of Students  : " ;
            cin >> Arr_City[3] ;
        }
        void Print (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 1 / City 1          " << endl ;
            cout << "========================================" << endl ;
            cout << "Number of Peoples   : " << Arr_City[0] << endl ;
            cout << "Number of Familyes  : " << Arr_City[1] << endl ;
            cout << "Number of Employees : " << Arr_City[2] << endl ;
            cout << "Number of Students  : " << Arr_City[3] << endl ;  
        }
        void Delete (void)
        {
            // delete[] Arr_City ;
            Arr_City[0] = 0 ;
            Arr_City[1] = 0 ;
            Arr_City[2] = 0 ;
            Arr_City[3] = 0 ;
            cout << "========================================" << endl ;
            cout << "   Governorate 1 / City 1 was Deleted   " << endl ;
            cout << "========================================" << endl ; 
        }
    }
    namespace City_2
    {
        int *Arr_City = new int[4] ;
        void Edit (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 1 / City 2          " << endl ;
            cout << "========================================" << endl ;
            cout << "Entre Number of Peoples   : " ;
            cin >> Arr_City[0] ;
            cout << "Entre Number of Familyes  : " ;
            cin >> Arr_City[1] ;
            cout << "Entre Number of Employees : " ;
            cin >> Arr_City[2] ;
            cout << "Entre Number of Students  : " ;
            cin >> Arr_City[3] ;
        }
        void Print (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 1 / City 2          " << endl ;
            cout << "========================================" << endl ;
            cout << "Number of Peoples   : " << Arr_City[0] << endl ;
            cout << "Number of Familyes  : " << Arr_City[1] << endl ;
            cout << "Number of Employees : " << Arr_City[2] << endl ;
            cout << "Number of Students  : " << Arr_City[3] << endl ;  
        }
        void Delete (void)
        {
            // delete[] Arr_City ;
            Arr_City[0] = 0 ;
            Arr_City[1] = 0 ;
            Arr_City[2] = 0 ;
            Arr_City[3] = 0 ;
            cout << "========================================" << endl ;
            cout << "   Governorate 1 / City 2 was Deleted   " << endl ;
            cout << "========================================" << endl ; 
        }
    }
    namespace City_3
    {
        int *Arr_City = new int[4] ;
        void Edit (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 1 / City 3          " << endl ;
            cout << "========================================" << endl ;
            cout << "Entre Number of Peoples   : " ;
            cin >> Arr_City[0] ;
            cout << "Entre Number of Familyes  : " ;
            cin >> Arr_City[1] ;
            cout << "Entre Number of Employees : " ;
            cin >> Arr_City[2] ;
            cout << "Entre Number of Students  : " ;
            cin >> Arr_City[3] ;
        }
        void Print (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 1 / City 3          " << endl ;
            cout << "========================================" << endl ;
            cout << "Number of Peoples   : " << Arr_City[0] << endl ;
            cout << "Number of Familyes  : " << Arr_City[1] << endl ;
            cout << "Number of Employees : " << Arr_City[2] << endl ;
            cout << "Number of Students  : " << Arr_City[3] << endl ;
        }
        void Delete (void)
        {
            // delete[] Arr_City ;
            Arr_City[0] = 0 ;
            Arr_City[1] = 0 ;
            Arr_City[2] = 0 ;
            Arr_City[3] = 0 ;
            cout << "========================================" << endl ;
            cout << "   Governorate 1 / City 3 was Deleted   " << endl ;
            cout << "========================================" << endl ; 
        }
    }

    template <typename T2>
    int *  Sum_ThreeCities ( T2 City_1 , T2 City_2 , T2 City_3 )
    {
        int *Sum = new int[4] ;
        for ( int i=0 ; i<4 ; i++ )
        {
            Sum[i] = ( City_1::Arr_City[i] + City_2::Arr_City[i] + City_3::Arr_City[i] ) ;
        }
        cout << "====================================================" << endl ;
        cout << "=================   Governorate 1   ================" << endl ;
        cout << "====================================================" << endl ;
        cout << "Total Number of Peoples   ( Three Cities): "  << Sum[0] << endl ;
        cout << "Total Number of Familyes  ( Three Cities): "  << Sum[1] << endl ;
        cout << "Total Number of Employees ( Three Cities): "  << Sum[2] << endl ;
        cout << "Total Number of Students  ( Three Cities): "  << Sum[3] << endl ;
        
        return Sum ;
    }
    template <typename T1 , typename T2>
    T1  Sum_TwoCities ( T2 City_1 , T2 City_2 )
    {
        int *Sum = new int[4] ;
        for ( int i=0 ; i<4 ; i++ )
        {
            if ( ( City_1 == "City_1" && City_2 == "City_2" ) || ( City_1 == "City_2" && City_2 == "City_1" ) )
                Sum[i] = ( City_1::Arr_City[i] + City_2::Arr_City[i] ) ;
            if ( ( City_1 == "City_1" && City_2 == "City_3") || ( City_1 == "City_3" && City_2 == "City_1") )
                Sum[i] = ( City_1::Arr_City[i] + City_3::Arr_City[i] ) ;
            if ( ( City_1 == "City_2" && City_2 == "City_3") || ( City_1 == "City_3" && City_2 == "City_2") )
                Sum[i] = ( City_2::Arr_City[i] + City_3::Arr_City[i] ) ;
        }
        cout << "====================================================" << endl ;
        cout << "=================   Governorate 1   ================" << endl ;
        cout << "====================================================" << endl ;
        cout << "Total Number of Peoples   (" << City_1 << " + " << City_2 << "): "  << Sum[0] << endl ;
        cout << "Total Number of Familyes  (" << City_1 << " + " << City_2 << "): "  << Sum[1] << endl ;
        cout << "Total Number of Employees (" << City_1 << " + " << City_2 << "): "  << Sum[2] << endl ;
        cout << "Total Number of Students  (" << City_1 << " + " << City_2 << "): "  << Sum[3] << endl ;
        cout << "====================================================" << endl ;

        return Sum ;
    }
}
//=========================================================================================================================================================
namespace governorate_2 
{
    namespace City_1
    {
        int *Arr_City = new int[4] ;
        void Edit (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 2 / City 1          " << endl ;
            cout << "========================================" << endl ;
            cout << "Entre Number of Peoples   : " ;
            cin >> Arr_City[0] ;
            cout << "Entre Number of Familyes  : " ;
            cin >> Arr_City[1] ;
            cout << "Entre Number of Employees : " ;
            cin >> Arr_City[2] ;
            cout << "Entre Number of Students  : " ;
            cin >> Arr_City[3] ;
        }
        void Print (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 2 / City 1          " << endl ;
            cout << "========================================" << endl ;
            cout << "Number of Peoples   : " << Arr_City[0] << endl ;
            cout << "Number of Familyes  : " << Arr_City[1] << endl ;
            cout << "Number of Employees : " << Arr_City[2] << endl ;
            cout << "Number of Students  : " << Arr_City[3] << endl ; 
        }
        void Delete (void)
        {
            // delete[] Arr_City ;
            Arr_City[0] = 0 ;
            Arr_City[1] = 0 ;
            Arr_City[2] = 0 ;
            Arr_City[3] = 0 ;
            cout << "========================================" << endl ;
            cout << "   Governorate 2 / City 1 was Deleted   " << endl ;
            cout << "========================================" << endl ; 
        }
    }
    namespace City_2
    {
        int *Arr_City = new int[4] ;
        void Edit (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 2 / City 2          " << endl ;
            cout << "========================================" << endl ;
            cout << "Entre Number of Peoples   : " ;
            cin >> Arr_City[0] ;
            cout << "Entre Number of Familyes  : " ;
            cin >> Arr_City[1] ;
            cout << "Entre Number of Employees : " ;
            cin >> Arr_City[2] ;
            cout << "Entre Number of Students  : " ;
            cin >> Arr_City[3] ;
        }
        void Print (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 2 / City 2          " << endl ;
            cout << "========================================" << endl ;
            cout << "Number of Peoples   : " << Arr_City[0] << endl ;
            cout << "Number of Familyes  : " << Arr_City[1] << endl ;
            cout << "Number of Employees : " << Arr_City[2] << endl ;
            cout << "Number of Students  : " << Arr_City[3] << endl ;
        }
        void Delete (void)
        {
            // delete[] Arr_City ;
            Arr_City[0] = 0 ;
            Arr_City[1] = 0 ;
            Arr_City[2] = 0 ;
            Arr_City[3] = 0 ;
            cout << "========================================" << endl ;
            cout << "   Governorate 2 / City 2 was Deleted   " << endl ;
            cout << "========================================" << endl ; 
        }
    }
    namespace City_3
    {
        int *Arr_City = new int[4] ;
        void Edit (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 2 / City 3          " << endl ;
            cout << "========================================" << endl ;
            cout << "Entre Number of Peoples   : " ;
            cin >> Arr_City[0] ;
            cout << "Entre Number of Familyes  : " ;
            cin >> Arr_City[1] ;
            cout << "Entre Number of Employees : " ;
            cin >> Arr_City[2] ;
            cout << "Entre Number of Students  : " ;
            cin >> Arr_City[3] ;
        }
        void Print (void)
        {
            cout << "========================================" << endl ;
            cout << "        Governorate 2 / City 3          " << endl ;
            cout << "========================================" << endl ;
            cout << "Number of Peoples   : " << Arr_City[0] << endl ;
            cout << "Number of Familyes  : " << Arr_City[1] << endl ;
            cout << "Number of Employees : " << Arr_City[2] << endl ;
            cout << "Number of Students  : " << Arr_City[3] << endl ;
        }
        void Delete (void)
        {
            // delete[] Arr_City ; 
            Arr_City[0] = 0 ;
            Arr_City[1] = 0 ;
            Arr_City[2] = 0 ;
            Arr_City[3] = 0 ;
            cout << "========================================" << endl ;
            cout << "   Governorate 2 / City 3 was Deleted   " << endl ;
            cout << "========================================" << endl ; 
        }
    }

    template <typename T2>
    int *  Sum_ThreeCities ( T2 City_1 , T2 City_2 , T2 City_3 )
    {
        int *Sum = new int[4] ;
        for ( int i=0 ; i<4 ; i++ )
        {
            Sum[i] = ( City_1::Arr_City[i] + City_2::Arr_City[i] + City_3::Arr_City[i] ) ;
        }
        cout << "====================================================" << endl ;
        cout << "=================   Governorate 2   ================" << endl ;
        cout << "====================================================" << endl ;
        cout << "Total Number of Peoples   ( Three Cities): "  << Sum[0] << endl ;
        cout << "Total Number of Familyes  ( Three Cities): "  << Sum[1] << endl ;
        cout << "Total Number of Employees ( Three Cities): "  << Sum[2] << endl ;
        cout << "Total Number of Students  ( Three Cities): "  << Sum[3] << endl ;

        return Sum ;
    }
    template <typename T1 , typename T2>
    T1  Sum_TwoCities ( T2 City_1 , T2 City_2 )
    {
        int *Sum = new int[4] ;
        for ( int i=0 ; i<4 ; i++ )
        {
            if ( ( City_1 == "City_1" && City_2 == "City_2" ) || ( City_1 == "City_2" && City_2 == "City_1" ) )
                Sum[i] = ( City_1::Arr_City[i] + City_2::Arr_City[i] ) ;
            if ( ( City_1 == "City_1" && City_2 == "City_3") || ( City_1 == "City_3" && City_2 == "City_1") )
                Sum[i] = ( City_1::Arr_City[i] + City_3::Arr_City[i] ) ;
            if ( ( City_1 == "City_2" && City_2 == "City_3") || ( City_1 == "City_3" && City_2 == "City_2") )
                Sum[i] = ( City_2::Arr_City[i] + City_3::Arr_City[i] ) ;
        }
        cout << "====================================================" << endl ;
        cout << "=================   Governorate 2   ================" << endl ;
        cout << "====================================================" << endl ;
        cout << "Total Number of Peoples   (" << City_1 << " + " << City_2 << "): "  << Sum[0] << endl ;
        cout << "Total Number of Familyes  (" << City_1 << " + " << City_2 << "): "  << Sum[1] << endl ;
        cout << "Total Number of Employees (" << City_1 << " + " << City_2 << "): "  << Sum[2] << endl ;
        cout << "Total Number of Students  (" << City_1 << " + " << City_2 << "): "  << Sum[3] << endl ;
        cout << "====================================================" << endl ;
        return Sum ;
    }
}
//=========================================================================================================================================================
int main ()
{
    int Feature , Governorate , City , City1 , City2 ;
    string City_N1 ,City_N2 ;
    int *SumThree ;
    int *SumTwo ;
    cout << "===============================================================================================================" << endl ;
    cout << "=======================================      Welcome in our Country     =======================================" << endl ;

    while(1)
    { 
        cout << "===============================================================================================================" << endl ;
        cout << "                                         (1) Edit   Data  of  Specific City "        << endl ;
        cout << "                                         (2) View   Data from Specific City "        << endl ;
        cout << "                                         (3) Delete Data from Specific City "        << endl ;
        cout << "                                         (4) Edit   All Data  of  All Cities "       << endl ;
        cout << "                                         (5) View   All Data from All Cities "       << endl ;
        cout << "                                         (6) Delete All Data from All Cities "       << endl ;
        cout << "                                         (7) View Sumition of Data from Two Cities " << endl ;
        cout << "                                         (8) View Sumition of Data from All Cities " << endl ;
        cout << "                                         [0] Exit Program "                          << endl ;
        cout << "===============================================================================================================" << endl ;
        cout << "                                            Select needed Feature :  " ;
        cin >> Feature ;

        if ( Feature == 1 )
        {
            system ("cls");
            while (1)
            {
                cout << "========================" << endl ;
                cout << "(1) Governorate 1 "         << endl ;
                cout << "(2) Governorate 2 "         << endl ;
                cout << "[0] Back "                  << endl ;
                cout << "========================" << endl ;
                cout << "Select Governorate :  " ;
                cin  >> Governorate ;
                if ( Governorate == 0 )
                {
                    system("cls");
                    break;
                }
                cout << "===============" << endl ;
                cout << "(1) City 1 "                << endl ;
                cout << "(2) City 2 "                << endl ;
                cout << "(3) City 3 "                << endl ;
                cout << "[0] Back "                  << endl ;
                cout << "===============" << endl ;
                cout << "Select City :  " ;
                cin  >> City ;
                cout << "===============" << endl ;
                if ( City == 0 )
                {
                    system("cls");
                    break;
                }
                switch (Governorate)
                {
                    case 1 : system("cls");
                            switch (City)
                            {
                                case 1  :    governorate_1::City_1::Edit();      break; 
                                case 2  :    governorate_1::City_2::Edit();      break;
                                case 3  :    governorate_1::City_3::Edit();      break;
                                default :                                        break;
                            }
                            break;
                    case 2 : system("cls");
                            switch (City)
                            {
                                case 1  :    governorate_2::City_1::Edit();      break; 
                                case 2  :    governorate_2::City_2::Edit();      break;
                                case 3  :    governorate_2::City_3::Edit();      break;
                                default :                                        break;
                            }
                            break;
                    default :
                            break;
                }
                system ("cls");
                cout << "==========================================" << endl ;
                cout << "=======   Operation Successfully   =======" << endl ;
                cout << "==========================================" << endl ;
                break;
            }
        }
        else if ( Feature == 2 )
        {
            system ("cls");
            while (1)
            {
                cout << "========================" << endl ;
                cout << "(1) Governorate 1 "         << endl ;
                cout << "(2) Governorate 2 "         << endl ;
                cout << "[0] Back "                  << endl ;
                cout << "========================" << endl ;
                cout << "Select Governorate :  " ;
                cin  >> Governorate ;
                if ( Governorate == 0 )
                {
                    system("cls");
                    break;
                }
                cout << "===============" << endl ;
                cout << "(1) City 1 "                << endl ;
                cout << "(2) City 2 "                << endl ;
                cout << "(3) City 3 "                << endl ;
                cout << "[0] Back "                  << endl ;
                cout << "===============" << endl ;
                cout << "Select City :  " ;
                cin  >> City ;
                cout << "===============" << endl ;
                if ( City == 0 )
                {
                    system("cls");
                    break;
                }
                switch (Governorate)
                {
                    case 1 : system ("cls");
                            switch (City)
                            { 
                                case 1  :    governorate_1::City_1::Print();      break; 
                                case 2  :    governorate_1::City_2::Print();      break;
                                case 3  :    governorate_1::City_3::Print();      break;
                                default :                                         break;
                            }
                            break;
                    case 2 : system("cls");
                            switch (City)
                            {
                                case 1  :    governorate_2::City_1::Print();      break; 
                                case 2  :    governorate_2::City_2::Print();      break;
                                case 3  :    governorate_2::City_3::Print();      break;
                                default :                                         break;
                            }
                            break;
                    default :
                            break;
                }
                break;
            }
        }
        else if ( Feature == 3 )
        {
            system ("cls");
            while (1)
            {
                cout << "========================" << endl ;
                cout << "(1) Governorate 1 "         << endl ;
                cout << "(2) Governorate 2 "         << endl ;
                cout << "[0] Back "                  << endl ;
                cout << "========================" << endl ;
                cout << "Select Governorate :  " ;
                cin  >> Governorate ;
                if ( Governorate == 0 )
                {
                    system("cls");
                    break;
                }
                cout << "===============" << endl ;
                cout << "(1) City 1 "                << endl ;
                cout << "(2) City 2 "                << endl ;
                cout << "(3) City 3 "                << endl ;
                cout << "[0] Back "                  << endl ;
                cout << "===============" << endl ;
                cout << "Select City :  " ;
                cin  >> City ;
                cout << "===============" << endl ;
                if ( City == 0 )
                {
                    system("cls");
                    break;
                }
                switch (Governorate)
                {
                    case 1 : system("cls");
                            switch (City)
                            {
                                case 1  :    governorate_1::City_1::Delete();      break; 
                                case 2  :    governorate_1::City_2::Delete();      break;
                                case 3  :    governorate_1::City_3::Delete();      break;
                                default :                                          break;
                            }
                            break;
                    case 2 : system("cls"); 
                            switch (City)
                            {
                                case 1  :    governorate_2::City_1::Delete();      break; 
                                case 2  :    governorate_2::City_2::Delete();      break;
                                case 3  :    governorate_2::City_3::Delete();      break;
                                default :                                          break;
                            }
                            break;
                    default :
                            break;
                }
                break;
            }
        }
        else if ( Feature == 4 )
        {
            system ("cls");
            governorate_1::City_1::Edit() ;
            governorate_1::City_2::Edit() ;
            governorate_1::City_3::Edit() ;
            governorate_2::City_1::Edit() ;
            governorate_2::City_2::Edit() ;
            governorate_2::City_3::Edit() ;
            system ("cls");
            cout << "==========================================" << endl ;
            cout << "=======   Operation Successfully   =======" << endl ;
            cout << "==========================================" << endl ;
        }
        else if ( Feature == 5 )
        {
            system ("cls");
            governorate_1::City_1::Print() ;
            governorate_1::City_2::Print() ;
            governorate_1::City_3::Print() ;
            governorate_2::City_1::Print() ;
            governorate_2::City_2::Print() ;
            governorate_2::City_3::Print() ;
        }
        else if ( Feature == 6 )
        {
            system ("cls");
            governorate_1::City_1::Delete() ;
            governorate_1::City_2::Delete() ;
            governorate_1::City_3::Delete() ;
            governorate_2::City_1::Delete() ;
            governorate_2::City_2::Delete() ;
            governorate_2::City_3::Delete() ;
        }
        else if ( Feature == 7 )
        {
            system ("cls");
            while (1)
            {
                cout << "========================" << endl ;
                cout << "(1) Governorate 1 "       << endl ;
                cout << "(2) Governorate 2 "       << endl ;
                cout << "[0] Back "                << endl ;
                cout << "========================" << endl ;
                cout << "Select Governorate :  " ;
                cin  >> Governorate ;
                if ( Governorate == 0 )
                {
                    system("cls");
                    break;
                }
                cout << "======================" << endl ;
                cout << "(1) City 1 "            << endl ;
                cout << "(2) City 2 "            << endl ;
                cout << "(3) City 3 "            << endl ;
                cout << "[0] Back "              << endl ;
                cout << "======================" << endl ;
                cout << "Select First City :  " ;
                cin  >> City1 ;
                cout << "Select Second City :  " ;
                cin  >> City2 ;
                cout << "======================" << endl ;
                if ( City1 == 0 | City2 == 0 )
                {
                    system("cls");
                    break;
                }
                switch(City1)
                {
                    case 1 :    City_N1 = "City_1";   break;
                    case 2 :    City_N1 = "City_2";   break;
                    case 3 :    City_N1 = "City_3";   break;
                }
                switch(City2)
                {
                    case 1 :    City_N2 = "City_1";   break;
                    case 2 :    City_N2 = "City_2";   break;
                    case 3 :    City_N2 = "City_3";   break;
                }
                system("cls");
                switch (Governorate)
                { 
                    case 1 :    SumTwo = governorate_1::Sum_TwoCities <int*,string> (City_N1,City_N2) ;       break;
                    case 2 :    SumTwo = governorate_2::Sum_TwoCities <int*,string> (City_N1,City_N2) ;       break;
                    default :                                                                                 break;
                }
                break;
            }
        }
        else if ( Feature == 8 )
        {
            system ("cls");
            SumThree = governorate_1::Sum_ThreeCities <string> ("City_1","City_2","City_3") ;
            SumThree = governorate_2::Sum_ThreeCities <string> ("City_1","City_2","City_3") ;
        }
        else 
        {
            system ("cls");
            cout << "====================================================" << endl ;
            cout << "====================================================" << endl ;
            cout << "========================== =========================" << endl ;
            cout << "=========================   ========================" << endl ;
            cout << "======================         =====================" << endl ;
            cout << "===================    Good Bay   ==================" << endl ;
            cout << "================                     ===============" << endl ;
            cout << "==============     Ahmed Bahaa Nasr     ============" << endl ;
            cout << "================                     ===============" << endl ;
            cout << "===================    Good Bay   ==================" << endl ;
            cout << "======================         =====================" << endl ;
            cout << "=========================   ========================" << endl ;
            cout << "========================== =========================" << endl ;
            cout << "====================================================" << endl ;
            cout << "====================================================" << endl ;
            break ;
        }
            

    }
    
    



    // =================================================================
    // ====   to print array by pointer of first element of array   ====
    // =================================================================
    // cout << "Total Number of Peoples : "   << *(SumThree+0) << endl ;
    // cout << "Total Number of Familyes : "  << *(SumThree+1) << endl ;
    // cout << "Total Number of Employees : " << *(SumThree+2) << endl ;
    // cout << "Total Number of Students : "  << *(SumThree+3) << endl ;
    // cout << "========================================" << endl ;

    return 0 ;
}