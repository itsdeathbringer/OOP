#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum, product, avg ,smallest , largest ;
    
    cout << "Enter the integers: ";
    cin >> a >> b >> c;
    sum = a + b + c;
    cout << a << " + " << b << " + " << c <<" = " << sum <<endl;  
    
	product = a * b * c;
	cout << a << " * " << b << " * " << c << " = " << product <<endl;
	
	avg = (a + b + c)/2;
	cout << a << " + " << b << " + " << c << "/" << sum <<" = " << avg <<endl;
	
    largest = a;
    smallest = a;
    if(b>largest)
    largest=b;
    
    if(c>largest)
    largest=c;
    
    
    if(b>smallest)
    smallest=b;
    
    if(c>smallest)
    smallest=c;
    
    
	
	return 0;
	   
    
	
	
}
