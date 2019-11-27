#include <iostream>
#include <string>
using namespace std;
class acc{
  unsigned int account_number;
    string firstname,lastname;
    double balance;
public:
    acc(int a,string f,string l,double b ){
        
        account_number=a;
        firstname=f;
        lastname=l;
        balance=b;
    }
    void getpart()
		{
        	cout<<"Account No:"<<account_number<<"\nFirst Name:"<<firstname<<"\nLast Name:"<<lastname<<"\nBalance:"<<balance<<"\n";
        }
    	void setpart(int a)
		{
        	account_number=a;
        }
};
int main()
{
    acc obj(001,"haseeb","chaudary",10000);
    obj.getpart();
    return 0;
}
