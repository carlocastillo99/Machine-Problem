#include <iostream> 
#include <cmath> 
#include <conio.h>
#define PI 3.1415926535 
using namespace std; 
  
int main()  
{  
    float sidea, sideb, sidec; 
    float S; //for Heron's formula
    float area;
    float apothem;
    float perimeter;
    char again;
    double d, e, f, g;
    double circum1, circum2;
    
    do
    {
    cout << "********Welcome to Triangle Calculator!********\n";
    cout << "Enter side a: ";
    cin >> sidea;
    cout << "Enter side b: ";
    cin >> sideb;
    cout << "Enter side c: ";
    cin >> sidec;
    float alpha = (acos((pow(sideb, 2) + pow(sidec, 2) - pow(sidea, 2))/(2*(sideb*sidec)))); 
    float beta = (acos((pow(sidea, 2) + pow(sidec, 2) - pow(sideb, 2))/(2*(sidea*sidec)))); 
    float gamma = (acos((pow(sidea, 2) + pow(sideb, 2) - pow(sidec, 2))/(2*(sideb*sidea))));
    
  	alpha = alpha * 180 / PI; 
    beta = beta * 180 / PI; 
    gamma = gamma * 180 / PI; 
 	
	cout << "alpha : " << alpha << " degrees\n"; 
    cout << "beta : " << beta << " degrees\n"; 
    cout << "gamma : " << gamma << " degrees\n"; 
  
  
    if(sidea==sideb && sideb==sidec)  
    {  
        cout << "This is an equilateral triangle.\n"; 
    }  
    else if(sidea==sideb || sidea==sidec || sideb==sidec) 
    {  
        cout << "This is an isosceles triangle.\n";  
    }  
    else 
    {  
        cout << "This is a scalene triangle.\n";  
    }  
    { 

    if (sidea + sideb > sidec) 
        cout << "This is an acute triangle."; 

    else if (sidea + sideb == sidec) 
        cout << "This is a right triangle."; 
  
    else
        cout << "This is an obtuse triangle."; 
	}
	perimeter = sidea+sideb+sidec;
	S= perimeter/2;
	area = sqrt((S*(S-sidea))*((S-sideb)*(S-sidec)));
	apothem = (2 * area)/perimeter;
	d = cos(beta);
	e = sin(beta);
	f = sidec * static_cast<double>(d);
	g = sidec * static_cast<double>(e);
	circum1 = sidea / 2;
	circum2 = (pow(g, 2) - (sidea * f) + pow(f ,2))/ (2 * g);

	cout << "\nThe area of the triangle is: " << area;
	cout << "\nThe length of the apothem is: " << apothem;
	cout << "\nThe Circumcenter (x,y): (" << circum1;
	cout << "," << circum2 << ")" << endl << endl;
	cout << "\n\nDo you want to calculate another set? Yes or No (Y/N)? ";
	cin >> again; 
}
	while (again == 'Y' || again == 'y');
	system("pause");

  	_getch();
    return 0;  
} 


