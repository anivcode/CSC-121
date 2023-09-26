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
    short menu_choice;
    double volume, side, radius, height, slant_height;

    while (menu_choice != QUIT) { 
        cout << "1. Cube \n2. Sphere\n3. Prism\n4. Cylinder\n5. Cone\n6. Quit";
        cin >> menu_choice; 

        switch (menu_choice) {
            case CUBE:



            case SPHERE: 


            case PRISM:


            case CYLINDER: 

            case CONE: 

            case QUIT:  

        }

    }; 

    return 0; 



}
