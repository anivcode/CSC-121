#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
// references: https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus
// https://stackoverflow.com/a/12657984
// Anthony Behery Harper SI
using namespace std;
int main()
{

    double min_angle, max_angle, min_vel, max_vel, random_angle, random_vel, final_angle;
    double ft_distance, air_time, max_height, loop, increments, x, y;
    cout << "Hello! ";
    cout << "Please enter the minimum and maximum angle you would like: ";
    cin >> min_angle >> max_angle;
    srand(static_cast<unsigned> (time(nullptr))) ;
    random_angle = ( rand() % int(max_angle - min_angle) + min_angle );

    final_angle = random_angle * M_PI / 180;

    cout << "Please enter a minimum and maximum velocity: ";
    cin >> min_vel >> max_vel; 
    random_vel = ( rand() % int(max_vel - min_vel) + min_vel);

    ft_distance = (random_vel * random_vel) / 32 * sin(2 * final_angle);
    air_time = ft_distance / (random_vel * cos(final_angle));
    max_height = ((random_vel* sin(final_angle))*(air_time/2) - pow(32/2*(air_time/2), 2));

    increments = 400; 
    loop = 0;
    
    cout.setf(ios_base::fixed);
    cout.precision(2);

    while (loop <= increments) { 
        x = (random_vel  * cos(final_angle)) * loop;
        y = ((random_vel * sin(final_angle)) * loop) - 1/2*32*(loop*loop);

        cout << loop << setw(30) << setfill(' ') << fixed << setprecision(2);
        cout << x << setw(30) << setfill(' ') << fixed << setprecision(2);
        cout << y << setw(30) << setfill(' ') << fixed << setprecision(2) << endl;

        loop = loop + 20;
    }

    return 0;
}