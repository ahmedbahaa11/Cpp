/*****************************************/
/* Project : Project 3 inheritance       */
/* Auther  : Ahmed Bahaa Nasr            */ 
/* Date    : 14/5/2023                   */ 
/*****************************************/
#include <iostream>
#include <string>
using namespace std;
/*====================================================================================*/
/*========================     Main Class (MaterialObject)     =======================*/
/*====================================================================================*/
class MaterialObject
{
    private:
        int weight;
        string color;
    public:
        void SetMaterialWieght (int Copy_weight)
        {
            weight = Copy_weight ;
        }
        void SetMaterialColor (string Copy_Color)
        {
            color = Copy_Color ;
        }
        virtual void ShowData (void) 
        {
            cout << "Material Weight : " << weight << endl;
            cout << "Material Color : " << color << endl;
        }
};
/*====================================================================================*/
/*======================     First inheritance (LivingThing)     =====================*/
/*====================================================================================*/
class LivingThing : virtual public MaterialObject
{
    private:
        int LifeTime ;
    public:
        void SetLifeTime (int Copy_Lifetime)
        {
            LifeTime = Copy_Lifetime ;
        }
        virtual void ShowData (void) override
        {
            MaterialObject::ShowData();
            cout << "Life Time : " << LifeTime << endl;
        }
};
class Plant : virtual public LivingThing
{
    private:
        string PlantType ;  
    public:
        void SetPlantType (string Copy_PlantType)
        {
            PlantType = Copy_PlantType ;
        }  
        virtual void ShowData (void) override
        {
            LivingThing::ShowData();
            cout << "Plant Type : " << PlantType << endl;
        } 
};
class Animal : virtual public LivingThing
{
    private:
        string Name ;  
    public:
        void SetAnimalName (string Copy_Name)
        {
            Name = Copy_Name ;
        }  
        virtual void ShowData (void) override
        {
            LivingThing::ShowData();
            cout << "Animal Name : " << Name << endl;
        } 
};
class Reptile : virtual public Animal
{
    private:
        int Length ;  
    public:
        void SetReptileLength (int Copy_Length)
        {
            Length = Copy_Length ;
        }  
        virtual void ShowData (void) override
        {
            Animal::ShowData();
            cout << "Reptile Length : " << Length << endl;
        } 
};
class Mammal : virtual public Animal
{
    private:
        int NumberofLegs ;
        int age ;  
    public:
        void SetMammalNumberofLegs (int Copy_NumberofLegs)
        {
            NumberofLegs = Copy_NumberofLegs ;
        } 
        void SetMammalAge (int Copy_age)
        {
            age = Copy_age ;
        }  
        virtual void ShowData (void) override
        {
            Animal::ShowData();
            cout << "Mammal Number of Legs : " << NumberofLegs << endl;
            cout << "Mammal Age : " << age << endl;
        } 
};
class Cat : virtual public Mammal
{
    private:
        string CatType ;  
    public:
        void SetCatType (string Copy_CatType)
        {
            CatType = Copy_CatType ;
        }  
        virtual void ShowData (void) override
        {
            Mammal::ShowData();
            cout << "Cat Type : " << CatType << endl;
        } 
};
class Dog : virtual public Mammal
{
    private:
        string DogType ;  
    public:
        void SetDogType (string Copy_DogType)
        {
            DogType = Copy_DogType ;
        }  
        virtual void ShowData (void) override
        {
            Mammal::ShowData();
            cout << "Dog Type : " << DogType << endl;
        } 
};
class Platypus : virtual public Mammal
{
    private:
        string PlatypusName ;  
    public:
        void SetPlatypusName (string Copy_PlatypusName)
        {
            PlatypusName = Copy_PlatypusName ;
        }  
        virtual void ShowData (void) override
        {
            Mammal::ShowData();
            cout << "Platypus Name : " << PlatypusName << endl;
        } 
};
class Human : virtual public Mammal
{
    private:
        string HumanName ;  
        bool HumanType ;
    public:
        void SetHumanName (string Copy_HumanName)
        {
            HumanName = Copy_HumanName ;
        }
        void SetHumanType (bool Copy_HumanType)
        {
            HumanType = Copy_HumanType ;
        }  
        virtual void ShowData (void) override
        {
            Mammal::ShowData();
            cout << "Human Name : " << HumanName << endl;
            cout << "Human Type : " << HumanType << endl;
        } 
};
class Artist : virtual public Human
{
    private:
        int YearSalary ;  
    public:
        void SetArtistYearSalary (int Copy_YearSalary)
        {
            YearSalary = Copy_YearSalary ;
        }  
        virtual void ShowData (void) override
        {
            Human::ShowData();
            cout << "Artist Year Salary : " << YearSalary << endl;
        } 
};
class ShopKeeper : virtual public Human
{
    private:
        int Wealth ;    // ثروة 
    public:
        void SetShopKeeperWealth (int Copy_Wealth)
        {
            Wealth = Copy_Wealth ;
        }  
        virtual void ShowData (void) override
        {
            Human::ShowData();
            cout << "ShopKeeper Wealth : " << Wealth << endl;
        } 
};
class Dentist : virtual public Human
{
    private:
        int PriceDoctor ;    
    public:
        void SetPriceDoctor (int Copy_PriceDoctor)
        {
            PriceDoctor = Copy_PriceDoctor ;
        }  
        virtual void ShowData (void) override
        {
            Human::ShowData();
            cout << "Dentist Price Doctor : " << PriceDoctor << endl;
        } 
};
class Ken : virtual public Dentist
{
    private:
        string Name ;    
    public:
        void SetName (string Copy_Name)
        {
            Name = Copy_Name ;
        }  
        virtual void ShowData (void) override
        {
            Dentist::ShowData();
            cout << "Ken Name : " << Name << endl;
        } 
};
class Flo : virtual public ShopKeeper
{
    private:
        string Name ;    
    public:
        void SetName (string Copy_Name)
        {
            Name = Copy_Name ;
        }  
        virtual void ShowData (void) override
        {
            ShopKeeper::ShowData();
            cout << "Flo Name : " << Name << endl;
        } 
};
class Beth : virtual public Artist
{
    private:
        string Name ;    
    public:
        void SetName (string Copy_Name)
        {
            Name = Copy_Name ;
        }  
        virtual void ShowData (void) override
        {
            Artist::ShowData();
            cout << "Beth Name : " << Name << endl;
        } 
};
/*====================================================================================*/
/*====================     Second inheritance (NonLivingThing)     ===================*/
/*====================================================================================*/
class NonLivingThing : virtual public MaterialObject
{
    private:
        bool motile ;   // متحرك او لا
    public:
        void SetMotileorNon (bool Copy_motile)
        {
            motile = Copy_motile ;
        }  
        virtual void ShowData (void) override
        {
            MaterialObject::ShowData();
            cout << "Motile : " << motile << endl;
        }  
};
class Rock : virtual public NonLivingThing
{
    private:
        int denstiy ;  
    public:
        void SetRockDenstiy (int Copy_denstiy)
        {
            denstiy = Copy_denstiy ;
        }  
        virtual void ShowData (void) override
        {
            NonLivingThing::ShowData();
            cout << "Denstiy : " << denstiy << endl;
        } 
};
class Air : virtual public NonLivingThing
{
    private:
        int denstiy ;
        int speed ;
    public:
        void SetAirDenstiy (int Copy_denstiy)
        {
            denstiy = Copy_denstiy ;
        }  
        void SetAirSpeed (int Copy_Speed)
        {
            speed = Copy_Speed ;
        } 
        virtual void ShowData (void) override
        {
            NonLivingThing::ShowData();
            cout << "Denstiy : " << denstiy << endl;
            cout << "Speed   : " << speed << endl;
        } 
};
/*====================================================================================*/
int main()
{     
    cout << "=============================" << endl;              
    Beth x ;
    x.SetAnimalName("Humman");
    x.SetArtistYearSalary(12000);
    x.SetHumanName("Ahmed");
    x.SetHumanType(true);
    x.SetLifeTime(25);
    x.SetMammalAge(25);
    x.SetMammalNumberofLegs(2);
    x.SetName("Beth");
    x.SetMaterialColor("Black");
    x.SetMaterialWieght(70);
    x.ShowData();
    cout << "=============================" << endl;
    Flo y ;
    y.SetAnimalName("Humman");
    y.SetShopKeeperWealth(2000000);
    y.SetHumanName("Islam");
    y.SetHumanType(true);
    y.SetLifeTime(50);
    y.SetMammalAge(30);
    y.SetMammalNumberofLegs(2);
    y.SetName("Flo");
    y.SetMaterialColor("wight");
    y.SetMaterialWieght(90);
    y.ShowData();
    cout << "=============================" << endl;
    Ken z ;
    z.SetAnimalName("Humman");
    z.SetPriceDoctor(150);
    z.SetHumanName("Zahra");
    z.SetHumanType(false);
    z.SetLifeTime(60);
    z.SetMammalAge(40);
    z.SetMammalNumberofLegs(2);
    z.SetName("Ken");
    z.SetMaterialColor("Blue");
    z.SetMaterialWieght(60);
    z.ShowData();
    cout << "=============================" << endl;
    Dog a ;
    a.SetAnimalName("Dog");
    a.SetDogType("Baladi");
    a.SetLifeTime(20);
    a.SetMammalAge(10);
    a.SetMammalNumberofLegs(4);
    a.SetMaterialColor("Yellow");
    a.SetMaterialWieght(30);
    a.ShowData();
    cout << "=============================" << endl;
    Plant b ;
    b.SetLifeTime(1);
    b.SetMaterialColor("Green");
    b.SetMaterialWieght(10);
    b.SetPlantType("Ne3na3");
    b.ShowData();
    cout << "=============================" << endl;
    Rock c ;
    c.SetMaterialColor("Red");
    c.SetMaterialWieght(1000);
    c.SetMotileorNon(0);
    c.SetRockDenstiy(500);
    c.ShowData();
    cout << "=============================" << endl;
    
    return 0 ;
}