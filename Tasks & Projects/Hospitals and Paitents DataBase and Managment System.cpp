/*********************************************************************/
/* Project : Hospitals and Patients Data Base and Management System  */
/* Auther  : Ahmed Bahaa Nasr                                        */ 
/* Date    : 14/5/2023                                               */ 
/*********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Create Class for Hospital
class Hospital
{
    private:
    int H_Rate;
    int H_Available_Beds;
    int H_Phone;
    int H_NumberofDoctors;
    int H_BedPrice_perDay;

    public: 
    string H_Name;
    string H_Location;
    void SetHospital_Rate(int Copy_Rate);
    void SetHospital_AvailableBeds(int Copy_AvailableBeds);
    void SetHospital_Phone(int Copy_Contacts);
    void SetHospital_NumberofDoctors(int Copy_NumberofDoctors);
    void SetHospital_BedPrice_perDay(int Copy_BedPrice_perDay);
    void Decrement_AvailableBeds (void);
    void Increment_AvailableBeds (void);
    void Show_HospitaltData(void);
    int  GetAvailableBeds(void);
};

// Create Class for Patient
class Patient
{
    private:
    int P_ID;
    int P_Age;
    int P_Phone;
    string P_Gender;
    string P_AllocatedHospital;

    public:
    string P_Name;
    void SetPatient_ID(int Copy_ID);
    void SetPatient_Age(int Copy_Age);
    void SetPatient_Phone(int Copy_Phone);
    void SetPatient_Gender(string Copy_Gender);
    void SetPatient_AllocatedHospital(string Copy_AllocatedHospital);
    string GetPatient_AllocatedHospital(void);
    void Show_PatientData(void);
};

/* Global Vairables & Objects */
Hospital H1,H2,H3 ;
Patient P1,P2,P3 ;
int Feature ;
int hospital ;
int patient ;
int p,h ;
/* Functions Declerations */
void GetFeature (void);
void InitHospitals_DataBase (void);
void InitPatients_DataBase (void);
void Show_All_Patients_Data (void);
void Show_All_Hospitals_Data (void);
void ShowSpecificHospital(void);
void EditSpecificHospital (void);
void ShowSpecificPatient(void);
void EditSpecificPatient(void);
/*===================================================================*/
/*===================    main Application     =======================*/
/*===================================================================*/
int main()
{
    cout << endl ;
    cout << "******************************************" << endl ;
    cout << "******************************************" << endl ;
    cout << "**    Welcome to My Hospitals System    **" << endl ;
    cout << "**      Auther : Ahmed Bahaa Nasr       **" << endl ;
    cout << "**      Embedded Software Engineer      **" << endl ;
    cout << "******************************************" << endl ;
    cout << "******************************************" << endl ;

    InitHospitals_DataBase();
    InitPatients_DataBase();

    while (1)
    {
        GetFeature();
        
        if ( Feature == 0 )
        {
            cout << "******************************************" << endl ;
            cout << "******************************************" << endl ;
            cout << "******************************************" << endl ;
            cout << "**********      Good Bay       ***********" << endl ;
            cout << "******************************************" << endl ;
            cout << "******************************************" << endl ;
            cout << "******************************************" << endl ;
            break ;
        }
        else if ( Feature == 1  )
        {
            Show_All_Hospitals_Data();
        }
        else if ( Feature == 2  )
        {
            ShowSpecificHospital();
        }
        else if ( Feature == 3  )
        {
            ShowSpecificHospital();
            EditSpecificHospital();
        }
        else if ( Feature == 4  )
        {
            cout << "==================================" << endl;
            cout << "Available Beds in Hospital " << H1.H_Name << " : " << H1.GetAvailableBeds() << endl;
            cout << "Available Beds in Hospital " << H2.H_Name << " : " << H2.GetAvailableBeds() << endl;
            cout << "Available Beds in Hospital " << H3.H_Name << " : " << H3.GetAvailableBeds() << endl; 
            cout << "==================================" << endl;  
        }
        else if ( Feature == 5  )
        {
            Show_All_Hospitals_Data();
            Show_All_Patients_Data();
            cout << endl ;
            cout << endl ;
        }
        else if ( Feature == 6  )
        {
            Show_All_Patients_Data();
        }
        else if ( Feature == 7  )
        {
            ShowSpecificPatient();
        }
        else if ( Feature == 8  )
        {
            ShowSpecificPatient();
            EditSpecificPatient();
        }
        else if ( Feature == 9  )
        {
            cout<< "====================="  << endl ;
            cout<< "(1) "         << P1.P_Name << "   (1) " << H1.H_Name << endl ;
            cout<< "(2) "         << P2.P_Name << "   (2) " << H2.H_Name << endl ;
            cout<< "(3) "         << P3.P_Name << "   (3) " << H3.H_Name << endl ;
            cout<< "====================="  << endl ;
            cout<< "Select Patient : "  ;
            cin >> p ;
            cout<< "Select Hospital to Reserve on it : "  ;
            cin >> h ;
            switch(p)
            {
                case 1 : 
                        switch(h)
                        {
                            case 1  : P1.SetPatient_AllocatedHospital(H1.H_Name);    H1.Decrement_AvailableBeds();    break;   
                            case 2  : P1.SetPatient_AllocatedHospital(H2.H_Name);    H2.Decrement_AvailableBeds();    break;  
                            case 3  : P1.SetPatient_AllocatedHospital(H3.H_Name);    H3.Decrement_AvailableBeds();    break;  
                            default :                                                                                 break;
                        }
                        break;
                case 2 : 
                        switch(h)
                        {
                            case 1  : P2.SetPatient_AllocatedHospital(H1.H_Name);    H1.Decrement_AvailableBeds();    break;
                            case 2  : P2.SetPatient_AllocatedHospital(H2.H_Name);    H2.Decrement_AvailableBeds();    break;
                            case 3  : P2.SetPatient_AllocatedHospital(H3.H_Name);    H3.Decrement_AvailableBeds();    break;
                            default :                                                                                 break;
                        }
                        break;
                case 3 : 
                        switch(h)
                        {
                            case 1  : P3.SetPatient_AllocatedHospital(H1.H_Name);    H1.Decrement_AvailableBeds();    break;
                            case 2  : P3.SetPatient_AllocatedHospital(H2.H_Name);    H2.Decrement_AvailableBeds();    break;
                            case 3  : P3.SetPatient_AllocatedHospital(H3.H_Name);    H3.Decrement_AvailableBeds();    break;
                            default :                                                                                 break;
                        }
                        break;
            }
            cout << endl ;
            cout << "==========================================================" << endl; 
            cout << "                  Reservation Successfully                " << endl;
            cout << "==========================================================" << endl; 
        }
        else if ( Feature == 10  )
        {
            cout<< "=============="  << endl ;
            cout<< "(1) "         << P1.P_Name << endl ;
            cout<< "(2) "         << P2.P_Name << endl ;
            cout<< "(3) "         << P3.P_Name << endl ;
            cout<< "=============="  << endl ;
            cout<< "Select Patient : "  ;
            cin >> p ;
            string x ;
            switch(p)
            {
                case 1 :    
                        x = P1.GetPatient_AllocatedHospital() ;
                        if      ( x == "H1" )   {H1.Increment_AvailableBeds();}
                        else if ( x == "H2" )   {H2.Increment_AvailableBeds();}
                        else if ( x == "H3" )   {H3.Increment_AvailableBeds();}
                        P1.SetPatient_AllocatedHospital(" ");    
                        break;
                case 2 : 
                        x = P2.GetPatient_AllocatedHospital() ;
                        if      ( x == "H1" )   {H1.Increment_AvailableBeds();}
                        else if ( x == "H2" )   {H2.Increment_AvailableBeds();}
                        else if ( x == "H3" )   {H3.Increment_AvailableBeds();}
                        P2.SetPatient_AllocatedHospital(" ");    
                        break;
                case 3 : 
                        x = P3.GetPatient_AllocatedHospital() ;
                        if      ( x == "H1" )   {H1.Increment_AvailableBeds();}
                        else if ( x == "H2" )   {H2.Increment_AvailableBeds();}
                        else if ( x == "H3" )   {H3.Increment_AvailableBeds();}
                        P3.SetPatient_AllocatedHospital(" ");    
                        break;
            }
            cout << endl ;
            cout << "==========================================================" << endl; 
            cout << "                  Reservation is Canceled                 " << endl;
            cout << "==========================================================" << endl; 
        }   
    }
    return 0 ;
}

/*=================================================================================================*/
/*===================           Features Functions Implementation           =======================*/
/*=================================================================================================*/
void InitHospitals_DataBase (void)
{
    H1.H_Name = "H1" ;
    H1.H_Location = "Cairo" ;
    H1.SetHospital_Phone (123456789) ;
    H1.SetHospital_Rate(5);
    H1.SetHospital_AvailableBeds(50);
    H1.SetHospital_NumberofDoctors(15);
    H1.SetHospital_BedPrice_perDay(1500);
    H2.H_Name = "H2" ;
    H2.H_Location = "Gizaa" ;
    H2.SetHospital_Phone (112233445) ;
    H2.SetHospital_Rate(4);
    H2.SetHospital_AvailableBeds(70);
    H2.SetHospital_NumberofDoctors(12);
    H2.SetHospital_BedPrice_perDay(1300);
    H3.H_Name = "H3" ;
    H3.H_Location = "Alexa" ;
    H3.SetHospital_Phone (663322559) ;
    H3.SetHospital_Rate(3);
    H3.SetHospital_AvailableBeds(90);
    H3.SetHospital_NumberofDoctors(10);
    H3.SetHospital_BedPrice_perDay(1000); 
}
void InitPatients_DataBase (void)
{
    P1.P_Name = "Ahmed" ;
    P1.SetPatient_Age(25);
    P1.SetPatient_ID(100);
    P1.SetPatient_Gender(" Male ");
    P1.SetPatient_Phone(1026446865);
    // P1.SetPatient_AllocatedHospital("H1");
    P2.P_Name = "Islam" ;
    P2.SetPatient_Age(23);
    P2.SetPatient_ID(101);
    P2.SetPatient_Gender(" Male ");
    P2.SetPatient_Phone(1233216547);
    // P2.SetPatient_AllocatedHospital("H2");
    P3.P_Name = "Walaa" ;
    P3.SetPatient_Age(20);
    P3.SetPatient_ID(102);
    P3.SetPatient_Gender("Female");
    P3.SetPatient_Phone(1692581417);
    // P3.SetPatient_AllocatedHospital("H3");
}
void GetFeature (void)
{
    for (int i=0 ; i<=5 ; i++ )
    {
       cout << endl ; 
    }
    cout << "=========================================================================================================="<< endl ;
    cout << " (1) View All Hospitals Data                  |    (6) View All Patient Data"                              << endl ;
    cout << " (2) View Specific Hospital Data              |    (7) View Specific Patient Data"                         << endl ;
    cout << " (3) Edit Specific Hospital Data              |    (8) Edit Specific Patient Data"                         << endl ;
    cout << " (4) View Available Beds of All Hospitals     |    (9) Reserve Patient in Specific Hospital"               << endl ;
    cout << " (5) View All Hospitals and Patients Data     |    (10) Cancel Patient Reservation from Specific Hospital" << endl ;
    cout << " (0) Exit The Program"                                                                                     << endl ;
    cout << "=========================================================================================================="<< endl ;
    cout << "                                      Select Feature :   "                                                         ;
    cin  >>                                            Feature                                                                  ;
    system("cls");
}
void Show_All_Hospitals_Data (void)
{
    cout << "===========================================================================================" << endl ;
    cout << "                                     Table of Hospitals                                    " << endl ;
    cout << "===========================================================================================" << endl ;
    cout << "  Name " << " | " << "Location" << " |   " << "Phone  " << " | " << "Rate" << " | " << "No.of Doctors" << " | " << "Available Beds" << " | "  << "Bed Price Per Day" << endl ;
    cout << "-------------------------------------------------------------------------------------------" << endl ;
    H1.Show_HospitaltData();
    H2.Show_HospitaltData();
    H3.Show_HospitaltData();
    cout << "===========================================================================================" << endl ;
    cout << endl ;
}
void Show_All_Patients_Data (void)
{
    cout << "=================================================================================" << endl ;
    cout << "                                 Table of Patients                               " << endl ;
    cout << "=================================================================================" << endl ;
    cout << "  Name " << "   |   " << "ID " << "   |     " << "Phone     " << " |   " << "Age" << "  |  " << " Gender " << "  | " << "Allocated Hospital" << endl ;
    cout << "---------------------------------------------------------------------------------" << endl ;
    P1.Show_PatientData();
    P2.Show_PatientData();
    P3.Show_PatientData();
    cout << "=================================================================================" << endl ;
}
void ShowSpecificHospital(void)
{
    cout<< "==========="  << endl ;
    cout<< "(1) "         << H1.H_Name << endl ;
    cout<< "(2) "         << H2.H_Name << endl ;
    cout<< "(3) "         << H3.H_Name << endl ;
    cout<< "==========="  << endl ;
    cout<< "Select Hospital : "        << endl ;
    cin >> hospital ;
    cout << "===========================================================================================" << endl ;
    cout << "  Name " << " | " << "Location" << " |   " << "Phone  " << " | " << "Rate" << " | " << "No.of Doctors" << " | " << "Available Beds" << " | "  << "Bed Price Per Day" << endl ;
    cout << "-------------------------------------------------------------------------------------------" << endl ;
    switch(hospital)
    {
        case 1  :    H1.Show_HospitaltData();    break;
        case 2  :    H2.Show_HospitaltData();    break;
        case 3  :    H3.Show_HospitaltData();    break;
        default :                                break;
    }
    cout << "===========================================================================================" << endl ;
}
void EditSpecificHospital (void)
{   
    string NewName , NewLocation ;
    int NewPhone , NewRate , NewNoDoctors , NewAvailbeBeds , NewPrice ;
    cout << "Entre New Name Of Hospital : " ;
    cin  >>  NewName ;
    cout << "Entre New Location Of Hospital : " ;
    cin  >>  NewLocation ;
    cout << "Entre New Phone Of Hospital : " ;
    cin  >>  NewPhone ;
    cout << "Entre New Rate Of Hospital : " ;
    cin  >>  NewRate ;
    cout << "Entre New No.of Doctors On Hospital : " ;
    cin  >>  NewNoDoctors ;
    cout << "Entre New No.of Available Beds On Hospital : " ;
    cin  >>  NewAvailbeBeds ;
    cout << "Entre New Price of Bed Per Day On Hospital : " ;
    cin  >>  NewPrice ;
    switch(hospital)
    {
        case 1  :   
                    H1.H_Name = NewName ;
                    H1.H_Location = NewLocation ;
                    H1.SetHospital_Phone(NewPhone);
                    H1.SetHospital_Rate(NewRate);
                    H1.SetHospital_NumberofDoctors(NewNoDoctors);
                    H1.SetHospital_AvailableBeds(NewAvailbeBeds);
                    H1.SetHospital_BedPrice_perDay(NewPrice);
                    break;
        case 2  :   
                    H2.H_Name = NewName ;
                    H2.H_Location = NewLocation ;
                    H2.SetHospital_Phone(NewPhone);
                    H2.SetHospital_Rate(NewRate);
                    H2.SetHospital_NumberofDoctors(NewNoDoctors);
                    H2.SetHospital_AvailableBeds(NewAvailbeBeds);
                    H2.SetHospital_BedPrice_perDay(NewPrice);
                    break;
        case 3  :   
                    H3.H_Name = NewName ;
                    H3.H_Location = NewLocation ;
                    H3.SetHospital_Phone(NewPhone);
                    H3.SetHospital_Rate(NewRate);
                    H3.SetHospital_NumberofDoctors(NewNoDoctors);
                    H3.SetHospital_AvailableBeds(NewAvailbeBeds);
                    H3.SetHospital_BedPrice_perDay(NewPrice);
                    break;            
        default :   break;
    }
    cout << endl ;
    cout << "==========================================================" << endl; 
    cout << "                    Modified Successfully                 " << endl;
    cout << "==========================================================" << endl;
}            
void ShowSpecificPatient(void)
{
    cout<< "==========="  << endl ;
    cout<< "(1) "         << P1.P_Name << endl ;
    cout<< "(2) "         << P2.P_Name << endl ;
    cout<< "(3) "         << P3.P_Name << endl ;
    cout<< "==========="  << endl ;
    cout<< "Select Patient : "        << endl ;
    cin >> patient ;
    cout << "=================================================================================" << endl ;
    cout << "  Name " << "   |   " << "ID " << "   |     " << "Phone     " << " |   " << "Age" << "  |  " << " Gender " << "  | " << "Allocated Hospital" << endl ;
    cout << "---------------------------------------------------------------------------------" << endl ;
    switch(patient)
    {
        case 1  :    P1.Show_PatientData();    break;
        case 2  :    P2.Show_PatientData();    break;
        case 3  :    P3.Show_PatientData();    break;
        default :                              break;
    }
    cout << "=================================================================================" << endl ;
}
void EditSpecificPatient(void)
{
    string New_Name , New_AllocatedHospital ;
    int New_ID , New_Age , New_Phone , New_Gender ;
    cout << "Entre New Name Of Patient : " ;
    cin  >>  New_Name ;
    cout << "Entre New ID Of Patient : " ;
    cin  >>  New_ID ;
    cout << "Entre New Phone Of Patient : " ;
    cin  >>  New_Phone ;
    cout << "Entre New Age Of Patient : " ;
    cin  >>  New_Age ;
    cout << "(1) Male  , (2) Female  | Select Gender Of Patient : " ;
    cin  >>  New_Gender ;
    cout << "Entre New Allocated Hospital about Patient : " ;
    cin  >>  New_AllocatedHospital ;
    switch(patient)
    {
        case 1  :   
                    P1.P_Name = New_Name ;
                    P1.SetPatient_ID(New_ID);
                    P1.SetPatient_Age(New_Age);
                    P1.SetPatient_Phone(New_Phone);
                    P1.SetPatient_AllocatedHospital(New_AllocatedHospital);
                    if ( New_Gender == 1 )
                        P1.SetPatient_Gender(" Male ");
                    else if ( New_Gender == 2 )
                        P1.SetPatient_Gender("Female");
                    break;
        case 2  :   
                    P2.P_Name = New_Name ;
                    P2.SetPatient_ID(New_ID);
                    P2.SetPatient_Age(New_Age);
                    P2.SetPatient_Phone(New_Phone);
                    P2.SetPatient_AllocatedHospital(New_AllocatedHospital);
                    if ( New_Gender == 1 )
                        P2.SetPatient_Gender(" Male ");
                    else if ( New_Gender == 2 )
                        P2.SetPatient_Gender("Female");
                    break;
        case 3  :   
                    P3.P_Name = New_Name ;
                    P3.SetPatient_ID(New_ID);
                    P3.SetPatient_Age(New_Age);
                    P3.SetPatient_Phone(New_Phone);
                    P3.SetPatient_AllocatedHospital(New_AllocatedHospital);
                    if ( New_Gender == 1 )
                        P3.SetPatient_Gender(" Male ");
                    else if ( New_Gender == 2 )
                        P3.SetPatient_Gender("Female");
                    break;            
        default :   break;
    }
    cout << endl ;
    cout << "==========================================================" << endl; 
    cout << "                    Modified Successfully                 " << endl;
    cout << "==========================================================" << endl;
}

/*=================================================================================================*/
/*===================    Hospital Class Public Functions Implementation     =======================*/
/*=================================================================================================*/
void Hospital::SetHospital_Rate(int Copy_Rate)
{
    if( Copy_Rate <= 5 )
    {
        H_Rate = Copy_Rate ;
    }   
}
void Hospital::SetHospital_AvailableBeds(int Copy_AvailableBeds)
{
    if( Copy_AvailableBeds <= 100 )
    {
        H_Available_Beds = Copy_AvailableBeds ;
    }
}
void Hospital::SetHospital_Phone(int Copy_Phone)
{
    if( Copy_Phone <= 9999999999 )
    {
        H_Phone = Copy_Phone ;
    }
}
void Hospital::SetHospital_NumberofDoctors(int Copy_NumberofDoctors)
{
    if( Copy_NumberofDoctors <= 50 )
    {
        H_NumberofDoctors = Copy_NumberofDoctors ;
    }
}
void Hospital::SetHospital_BedPrice_perDay(int Copy_BedPrice_perDay)
{
    if( Copy_BedPrice_perDay <= 2000 )
    {
        H_BedPrice_perDay = Copy_BedPrice_perDay ;
    }
}
void Hospital::Show_HospitaltData(void)
{
    cout <<  "   " << H_Name            << "   |  " ;
    cout << H_Location        << "   | " ;
    cout << H_Phone           << " |  " ;
    cout << H_Rate            << "   |      " ;
    cout << H_NumberofDoctors << "       |       " ;
    cout << H_Available_Beds  << "       |      " ;
    cout << H_BedPrice_perDay << " $" << endl  ;
}
int  Hospital::GetAvailableBeds(void)
{
    return H_Available_Beds ;
}
void Hospital::Decrement_AvailableBeds (void)
{
    H_Available_Beds -- ;
}
void Hospital::Increment_AvailableBeds (void)
{
    H_Available_Beds ++ ;
}

/*=================================================================================================*/
/*===================     Patient Class Public Functions Implementation     =======================*/
/*=================================================================================================*/
void Patient::SetPatient_ID(int Copy_ID)
{
    if( Copy_ID <= 9999 )
    {
        P_ID = Copy_ID ;
    }  
}
void Patient::SetPatient_Age(int Copy_Age)
{
    if( Copy_Age <= 100 )
    {
        P_Age = Copy_Age ;
    }
}
void Patient::SetPatient_Phone(int Copy_Phone)
{
    if( Copy_Phone <= 9999999999 )
    {
        P_Phone = Copy_Phone ;
    }
}
void Patient::SetPatient_Gender(string Copy_Gender)
{
    if( Copy_Gender == " Male " || Copy_Gender == "Female" )
    {
        P_Gender = Copy_Gender ;
    }
}
void Patient::SetPatient_AllocatedHospital(string Copy_AllocatedHospital)
{
    if( Copy_AllocatedHospital == "H1" || Copy_AllocatedHospital == "H2" || Copy_AllocatedHospital == "H3" )
    {
        P_AllocatedHospital = Copy_AllocatedHospital ;
    }
    else
    {
        P_AllocatedHospital = " " ;
    }
}
string Patient::GetPatient_AllocatedHospital(void)
{
    return P_AllocatedHospital ;
}
void Patient::Show_PatientData(void)
{
    cout << "  " << P_Name              << "   |   " ;
    cout << P_ID                << "   |   " ;
    cout << P_Phone             << "   |   " ;
    cout << P_Age               << "   |   " ;
    cout << P_Gender            << "   |         " ;
    cout << P_AllocatedHospital <<  endl  ;
}