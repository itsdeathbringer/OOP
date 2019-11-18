#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, product, difference ,quotient ;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    sum = a + b;
    cout << a << " + " << b << " = " << sum <<endl;  
    
	product = a * b;
	cout << a << " * " << b << " = " << product <<endl;
	
	difference = a - b;
	cout << a << " - " << b << " = " << difference <<endl;
	
	quotient = a / b;
	cout << a << " / " << b << " = " << quotient <<endl; 
	
	
	return 0;
	   
    
	
	
}
