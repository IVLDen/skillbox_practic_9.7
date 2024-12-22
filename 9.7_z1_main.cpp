#include <iostream>
#include <cmath> 

int main ()
{
    std::cout << "Введите время отправления в формате HH:MM: \n";
    std::string time_departure ;
    std::cin >> time_departure;

    std::cout << "Введите время прибытия в формате HH:MM: \n";
    std::string time_arrival ;
    std::cin >> time_arrival;

    int hours_in_path, minutes_in_path ;
    int hours, minutes; // время отправления
    int a_hours, a_minutes; // время прибытия


    if (time_departure.length() != 5 || time_departure[2] != ':' || time_departure[0] < '0'
            || time_departure[0] > '9' || time_departure[1] < '0' || time_departure[1] > '9'
            || time_departure[3] < '0' || time_departure[3] > '9' || time_departure[4] <'0'
            || time_departure[4] > '9') {

                std::cout <<"Error!\n";
            }
    else {
        hours =  10 * (time_departure[0] - '0') + (time_departure[1] - '0');
         minutes = 10 * (time_departure[3] - '0') + (time_departure[4] - '0');

        if (hours > 23 || minutes > 59) {
            std::cout << "Error!\n";
        }
    }



    if (time_arrival.length() != 5 || time_arrival[2] != ':' || time_arrival[0] < '0'
            || time_arrival[0] > '9' || time_arrival[1] < '0' || time_arrival[1] > '9'
            || time_arrival[3] < '0' || time_arrival[3] > '9' || time_arrival[4] <'0'
            || time_arrival[4] > '9') {

                std::cout <<"Error!\n";
                return 0;
            }
    else {
        a_hours =  10 * (time_arrival[0] - '0') + (time_arrival[1] - '0');
         a_minutes = 10 * (time_arrival[3] - '0') + (time_arrival[4] - '0');

        if (a_hours > 23 || a_minutes > 59) {
            std::cout << "Error!\n";
            return 0;
        }
    }



    if (hours > a_hours) {
        hours_in_path = 24 - (hours - a_hours);
    }
    else {
        hours_in_path = a_hours - hours;
    }

    if (minutes > a_minutes) { 
        hours_in_path -= 1;
        minutes_in_path = (60 - abs (minutes - a_minutes) );
        
    }

    else {
        minutes_in_path = abs (minutes - a_minutes);
    }
    

    std::cout <<hours_in_path<< " часов,  "<<minutes_in_path<<" минут\n";

    return 0;
}
