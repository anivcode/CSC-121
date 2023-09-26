#include <iostream> 
#include <cmath>
using namespace std;
const short CUBE = 1;
const short SPHERE  = 2; 
const short PRISM = 3;
const short CYLINDER = 4;
const short CONE = 5;
const short QUIT = 6;


int main()
{
    short menu_choice, second_choice;
    double volume, surface_area, side, radius, height, slant_height;

    while (menu_choice != QUIT) { 
        cout << "1. Cube \n2. Sphere\n3. Prism\n4. Cylinder\n5. Cone\n6. Quit";
        cin >> menu_choice; 

        switch (menu_choice) {
            case CUBE:
                {
                    cout << "A. Surface Area\nB.Volume";
                    cin >> second_choice; 
                    second_choice = static_cast<char>(toupper(second_choice));

                    if (second_choice = 'A'){
                        cout << "Please input one side. "; 
                        cin >> side; 
                        surface_area = ( 6*(side*side));
                        cout << "The surface area is " << surface_area << " units squared.";
                    }
                    if (second_choice = 'B'){
                        cout << "Please input one side. ";
                        cin >> side;
                        volume = (side * side * side); 
                        cout << "The volume is" << volume << " units cubed."
                   
                    }
                    }




                }





        }

    }; 

    return 0; 



}
