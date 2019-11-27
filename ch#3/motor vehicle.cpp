#include <iostream>
#include<string>
using namespace std;
class MotorVehicle{
    public:
        string Motor_Vehicle,Fuel_Type,Color;
        int Year_Of_Manufacture,Engine_Capacity;

        MotorVehicle(string a,string b,string c){
            Motor_Vehicle=a;
            Fuel_Type=b;
            Color=c;
            }
        
        void display(){
         cout<<"Motor Vehicle:"<<Motor_Vehicle<<endl<<"Fuel Type:"<<Fuel_Type<<endl<<"Color:"<<Color<<endl<<"Year of Manufacture:"<<"2000"<<endl<<"Engine Capacity:"<<"1000"<<endl;   
        }
            };
    
int main()
{
    MotorVehicle a("suzuki","CNG","white");
    a.display();
    return 0;
}
