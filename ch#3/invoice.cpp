#include<iostream>
#include<string>
using namespace std;

class invoice{
  
public:
    string part,description_part;
    int quantity,price;

    
public:

    
    invoice(string P1,string D,int Q,int P){
        
        part=P1;
        description_part=D;
        quantity=Q;
        price=P;
        
        
        cout<<"     |Part   |"<<"|Parts Description|\t"<<"|Quantity of item|\t"<<"|Price|\t\t"<<endl;
    }
    public:
    void getpart ()
    {
        cout<<"\t"<<part<< "\t" <<description_part<< "\t\t\t" <<quantity<<"\t\t"<< price<<"\t\t"<<endl<<endl;
    }
    void setpart(string a){
        
        part = a; 
    }
    };

int main()
{
  
    invoice a("mouse","gaming mouse",1,5000);

    a.getpart();
    return 0;
}
