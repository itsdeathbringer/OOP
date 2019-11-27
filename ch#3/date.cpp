#include <iostream>
#include <string>
using namespace std;

class Date{

    int day;
	int month;
    int year;
    
    public:
        void date(int d,int m,int y){
        	day=d;
        	month=m;
        	year=y;
		}
		
		void set_day(int a){
		
			day=a;
		
		
		}
		void get_day(){
			cout<<"current Day is = "<<day<<endl;
		}
	    void set_month(int a){
	    	month=a;
	    
			}
		
		void get_month(){
			cout<<"current month is = "<<month<<endl;
		}	
	    void set_year(int a){
	    	year=a;
	    }
	    void get_year(){
	    	cout<<"current year is = "<<year<<endl;
		}
        void displayDate(){
        	if(month<=12 && month>=1 && day<=31 && day>=1)
        	cout<<month<<"/"<<day<<"/"<<year;
        	else{
        		month=1,day=1;
        		
        		cout<<month<<"/"<<day<<"/"<<year;
			}
		}

};

main()
{	
int day,month,year;
	cout<<"enter the day ";
	cin>>day;       
	cout<<"enter the month ";
	cin>>month;
	cout<<"enter the year ";
	cin>>year;
	cout<<endl;
	Date obj;
	obj.date(day,month,year);
	obj.displayDate();
}
