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
// 
   
class Cube{ 

    private: 
        double side; 
    public: 
        Cube(void) : side{1} { } 

        void set_side(double s){
            if (s >= 0) {
              side = s;  
            }
            else { 
            cout << "Error! Your input cannot be negative. ";
            } 
        }

        double get_side() {
            return side; 
        } 

        double volume() {
            return pow(side, 3);
        }

        double surface_area() {
            return 6 * pow(side, 2);
        }

};

class Sphere{ 

    private: 
        double radius; 
    public: 
        Sphere(void) : radius{1} { } 

        void set_side(double r){
            if (r >= 0) {
              radius = r;  
            }
            else { 
            cout << "Error! Your input cannot be negative. ";
            } 
        }

        double get_side() {
            return radius; 
        } 

        double volume() {
            return (4/3) * M_PI * pow(radius, 3);
        }

        double surface_area() {
            return 4 * M_PI * pow(radius, 2);
        }

};

class Prism{ 

    private: 
        double base, perimeter, height; 
    public: 
        Prism(void) : base{1}, perimeter{1}, height{1} { } 

        void set_base(double b){
            if (b >= 0) {
              base = b;  
            }
            else { 
            cout << "Error! Your input cannot be negative. ";
            } 
        }
        void set_perimeter(double p){
            if (p >= 0) {
              perimeter = p;  
            }
            else { 
            cout << "Error! Your input cannot be negative. ";
            } 
        }

        void set_height(double h){
            if (h >= 0) {
              height = h;  
            }
            else { 
            cout << "Error! Your input cannot be negative. ";
            } 
        }

        double get_base() {
            return base; 
        } 

        double get_perimeter(){
            return perimeter;
        }

        double get_height(){
            return height;
        }

        double volume() {
            return base * height;
        }

        double surface_area() {
            return (2 * base) + (perimeter * height);
        }

};

class Cylinder{ 

    private: 
        double radius, height; 
    public: 
        Cylinder(void) : radius{1}, height{1} { } 

        void set_radius(double r){
            if (r >= 0) {
              radius = r;  
            }
            else { 
            cout << "Error! Your input cannot be negative. ";
            } 
        }

        void set_height(double h){
            if (h >= 0){
                height = h;
            }
            else{
            cout << "Error! Your input cannot be negative. "; 
            }
        }  
        
        double get_radius(){
            return radius; 
        } 

        double get_height(){
            return height;
        }

        double volume() {
            return M_PI * pow(radius, 2) * height;
        }

        double surface_area() {
            return 2 * M_PI * radius * (radius + height);
        }

};

class Cone{ 

    private: 
        double radius, height; 
    public: 
        Cone(void) : radius{1}, height{1} { } 

        void set_radius(double r){
            if (r >= 0) {
              radius = r;  
            }
            else { 
            cout << "Error! Your input cannot be negative. ";
            } 
        }

        void set_height(double h){
            if (h >= 0){
                height = h;
            }
            else{
            cout << "Error! Your input cannot be negative. "; 
            }
        }  
        
        double get_radius(){
            return radius; 
        } 

        double get_height(){
            return height;
        }

        double volume() {
            return (1.0/3.0) * M_PI * pow(radius, 2) * height;
        }

        double surface_area() {
            return M_PI * radius * height + (M_PI * pow(radius, 2));
        }

};

int main(){

    short menu_choice;
    char second_choice;
    menu_choice = 0;

    while (menu_choice != QUIT) { 

        cout << "1. Cube \n2. Sphere\n3. Prism\n4. Cylinder\n5. Cone\n6. Quit ";
        cin >> menu_choice; 

        switch(menu_choice) {

            case CUBE:{

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice));


            }

            case SPHERE:{

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice));

                if (second_choice == 'A'){ }
                else if (second_choice == 'B'){}

            }
            
            case PRISM:{

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice));

                if (second_choice == 'A'){}
                else if (second_choice == 'B'){}

            }

            case CYLINDER:{

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice));

                if (second_choice == 'A'){}
                else if (second_choice == 'B'){}

            } 

            case CONE:{

                cout << "A. Surface Area\nB. Volume ";
                cin >> second_choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                second_choice = static_cast<char>(toupper(second_choice));

                if (second_choice == 'A'){}
                else if (second_choice == 'B'){}

            } 

    



    }
}
    