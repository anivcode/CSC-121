#include <iostream> 
#include <cmath>
#include <limits>
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
    char second_choice;
    double volume, base, perimeter, surface_area, side, radius, height, slant_height;
    menu_choice = 0; 
    
    while (menu_choice != QUIT) { 

        cout << "1. Cube \n2. Sphere\n3. Prism\n4. Cylinder\n5. Cone\n6. Quit ";
        cin >> menu_choice; 

        switch (menu_choice) {

            case CUBE:
                {
                    cout << "A. Surface Area\nB. Volume ";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin >> second_choice; 
                    second_choice = static_cast<char>(toupper(second_choice));
                   

                    if (second_choice == 'A'){

                        cout << "Please input one side. "; 
                        cin >> side;
                        while (cin.fail()==1 || side <= 0){
                            cout << "Error! Input is invalid.\n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please input one side. "; 
                            cin >> side; 
                        }

                        surface_area = ( 6*(side*side));
                        cout << "The surface area is " << surface_area << " units squared. \n";
                    }
                    else if (second_choice == 'B'){

                        cout << "Please input one side. ";
                        cin >> side;
                        while (cin.fail()==1 || side <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please input one side. "; 
                            cin >> side; 
                        }
                        volume = (side * side * side); 
                        cout << "The volume is " << volume << " units cubed.\n";

                    }

                    }
                    break; 

            case SPHERE:
                { 
                    cout << "A. Surface Area\nB. Volume ";
                    cin >> second_choice;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    second_choice = static_cast<char>(toupper(second_choice));
                    
                    if (second_choice == 'A'){

                        cout << "Please enter the radius"; 
                        cin >> radius; 
                         while (cin.fail()==1 || radius <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please input one side. "; 
                            cin >> radius; 
                        }
                        surface_area = (4 * M_PI * radius * radius); 
                        cout << "The surface area of your sphere is " << surface_area << " units squared.\n";

                    }

                    else if (second_choice == 'B'){

                        cout << "Please enter the radius of your sphere. \n"; 
                        cin >> radius; 
                         while (cin.fail()==1 || radius <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please input one side. "; 
                            cin >> radius; 
                        }
                        volume = 4 * (M_PI * radius * radius * radius) / 3; 
                        cout << "Your volume is " << volume << " units squared.\n";

                    }
                }
                break; 

            case PRISM:
                {

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice; 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice)); 

                if(second_choice == 'A'){

                    cout << "Please enter your base, perimeter, and height.\n ";
                    cin >> base >> perimeter >> height;
                     while (cin.fail()==1 || base <= 0 || perimeter <= 0 || height <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please enter your base, perimeter, and height. "; 
                            cin >> base >> perimeter >> height; 
                        }
                    surface_area = (2 * base) + (perimeter * height);
                    cout << "Your surface area is " << surface_area << " units squared.\n";

                }
                else if(second_choice == 'B'){

                    cout << "Please enter your base and height.\n ";
                    cin >> base >> height;
                    volume = base * height; 
                     while (cin.fail()==1 || base <= 0 || height <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please enter your base and height.\n"; 
                            cin >> base >> height; 
                        }
                    cout << "Your volume is " << volume << " units cubed.\n"; 
    
                }
                }
                break; 


            case CYLINDER:{

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice; 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice));

                if (second_choice == 'A'){

                    cout << "Please enter your radius and height. ";
                    cin >> radius >> height;
                     while (cin.fail()==1 || radius <= 0 || height <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please enter your radius and height. "; 
                            cin >> radius >> height; 
                        }
                    surface_area = 2 * M_PI * radius * (radius + height);
                    cout << "Your surface area is " << surface_area << " units squared.\n"; 
                    
                }
                else if (second_choice == 'B'){ 

                    cout << "Please enter your radius and height. ";
                    cin >> radius >> height; 
                        while (cin.fail()==1 || radius <= 0 || height <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please enter your radius and height. "; 
                            cin >> radius >> height;
                            } 
                    volume = M_PI * (radius * radius) * height; 
                    cout << "Your volume is " << volume << " units cubed.\n"; 
                     
                }
            }
            break;

            case CONE:{

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice; 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice));

                if (second_choice == 'A'){

                    cout << "Please enter the radius and slant height. ";
                    cin >> radius >> height;
                        while (cin.fail()==1 || radius <= 0 || height <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please enter your radius and slant height. "; 
                            cin >> radius >> height;
                            }
                    surface_area = M_PI * radius * height + (M_PI * (radius * radius)); 
                    cout << "Your surface area is " << surface_area << " units squared.\n";

                } 
                else if (second_choice == 'B'){
                    cout << "Please enter the radius and the height. ";
                    cin >> radius >> height;
                    while (cin.fail()==1 || radius <= 0 || height <= 0){
                            cout << "Error! Input is invalid. \n";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "Please enter your radius and height. "; 
                            cin >> radius >> height;
                            }  
                    volume = (1.0/3.0) * M_PI * (radius * radius) * height; 
                    cout << "Your volume is " << volume << " units cubed.\n"; 

            }
            } 
            break;

            case QUIT:{  
                cout << "Goodbye!" << endl;
             }

        }
     }
    
 return 0; 
}