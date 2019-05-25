#include <iostream> 
#include <cmath>
#include <conio.h> 

using namespace std; 

int main()
{ 
    float Cvol, Clatar, Cbasar,Csurar, Crad, Chei; 
    float Pvol, Platar, Pbasar, Psurar, Plen, Pwid, Phei; 
    float Svol, Ssurar, Srad; 
    float pi = 3.14159; 
    
    char again; 
    char g; 
    
  do
    {
        cout << "\n******** Geometric Calculator ********\n" << endl;
        cout << "This program calculates the following geometric shapes: " << endl; 
        cout << "Enter 'C'' to calculate the volume, lateral area, base area, and surface area of a Cone." << endl; 
        cout << "Enter 'P' to calculate the volume, lateral area, base area, and surface area of a Pyramid (Rectangular)." << endl;
        cout << "Enter 'S' to calculate the volume and surface area of a Sphere." << endl; 
        cout << "\nWhat geometric shape do you like to calculate (C, P, or S)? "; 
        cin >> g; 
        
        
        switch (g)
        {
            case 'c':
            case 'C':
        {
            cout << "Input the radius of the Cone: ";
            cin >> Crad;
            cout << "Input the height of the cone: "; 
            cin >> Chei; 
            Cvol = Crad * Crad * (Chei / 3) * pi;
            Clatar = Crad * sqrt((Chei * Chei) + (Crad * Crad)) * pi; 
            Cbasar = Crad * Crad * pi; 
            Csurar =pi * Crad * (Crad + sqrt((Chei * Chei) + (Crad * Crad)));
            
            cout << "\nThe volume of the Cone is: " << Cvol << " cubic units";
            cout << "\nThe lateral area of the Cone is: " << Clatar << " square units";
            cout << "\nThe base area of the Cone is: " << Cbasar << " square units"; 
            cout << "\nThe surface area of the Cone is: " << Csurar << " square units";
            cout << "\n\nDo you want to calculate another set? Yes or No (Y/N)? ";
            cin >> again; 
            
            break; 
        }
        case 'p':
        case 'P':
        {
            cout << "Input the length of the Rectangular Pyramid: "; 
            cin >> Plen; 
            cout << "Input the width of the Rectangular Pyramid: "; 
            cin >> Pwid; 
            cout << "Input the height of the Rectangular Pyramid: "; 
            cin >> Phei; 
            Pvol = (Phei * Pwid * Plen) / 3; 
            Pbasar = Plen * Pwid;
            Platar = (Plen * sqrt(((Pwid / 2) * (Pwid / 2)) + (Phei * Phei)) + Pwid * sqrt(((Plen / 2) * (Plen / 2)) + (Phei * Phei)));
            Psurar = Pbasar + Platar; 
            
            cout << "\nThe volume of the Rectangular Pyramid is: " << Pvol << " cubic units";
            cout << "\nThe lateral area of the Rectangular Pyramid is: " << Platar << " square units"; 
            cout << "\nThe base area of the Rectangular Pyramid is: " << Pbasar << " square units"; 
            cout << "\nThe surface area of the Rectangular Pyramid is: " << Psurar << " square units"; 
            cout << "\n\nDo you want to calculate another set? Yes or No (Y/N)? ";
            cin >> again; 
            
            break; 
        }
        case 's':
        case 'S': 
        {
            cout << "Input the radius of the Sphere: ";
            cin >> Srad; 
            Svol = ((4 * pi * (Srad * Srad * Srad)) / 3);
            Ssurar = ((Srad * Srad) * pi * 4); 
            
            cout << "\nThe volume of the Sphere is: " << Svol << " square units";
            cout << "\nThe surface area of the Sphere is: " << Ssurar << " square units"; 
            cout << "\n\nDo you want to calculate another set? Yes or No (Y/N)? "; 
            cin >> again; 
            
            break; 
        }
        default:
			cout << "The input is invalid! Please Try Again!\n";
        }
    } 
    
    
    
	while (again == 'Y' || again == 'y');
	system("pause");
	if (again == 'n' || again == 'N');
	{
		cout << "******** Thank you for using Geometric Calculator! ********";
	}
        
        _getch();
        return 0;
}
