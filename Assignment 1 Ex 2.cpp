/* Read the local time (24 hours format) in Tirana city from the user, e.g 7. Then the program asks the user for a state name and it prints out the time on that state. Assign 5 possible states, each on different time zones. Solve the problem by using if else.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int local_time_hour, local_time_minutes;
    string state;
    
    cout << "Please enter the local time in Tirana (24h format)" ;
    cout << "\nwhere the hours and minutes separated by a space: ";
    cin >> local_time_hour >> local_time_minutes;
    cout << endl;
    
    cout << "Please choose one of the following states (Finland, California, Australia, Brazil, Algeria): " << endl;
    cin >> state;
    cout << endl;
    
    cout << "The local time in Albania is " <<  setw(2) << setfill('0') << local_time_hour << ":" << setw(2) << setfill('0') << local_time_minutes << ". " ;
   
    if (state == "Finland" || state == "finland")
    {
        local_time_hour++;
           if (local_time_hour >= 24)
           local_time_hour -= 24;
        cout << "In Finland, the local time is " << setw(2) << setfill('0') << local_time_hour << ":" << setw(2) << setfill('0') << local_time_minutes << "." << endl;
    }
    else if (state == "California" || state == "california")
        {
        local_time_hour -= 9;
            if (local_time_hour >= 24)
            local_time_hour -= 24;
        cout << "In California, the local time is " << setw(2) << setfill('0') << local_time_hour << ":" << setw(2) << setfill('0') << local_time_minutes << "." << endl;
        }
    else if (state== "Australia" || state == "australia")
        {
        local_time_hour -= 8;
            if (local_time_hour >= 24)
            local_time_hour -= 24;
        cout << "In Australia, the local time is " << setw(2) << setfill('0') << local_time_hour << ":" << local_time_minutes << "." << endl;
        }
    
    else if (state == "Brazil" || state == "brazil")
        {
        local_time_hour -= 5;
            if (local_time_hour >= 24)
            local_time_hour -= 24;
        cout << "In Brazil, the local time is " << setw(2) << setfill('0') << local_time_hour << ":" << setw(2) << setfill('0') << local_time_minutes << "." << endl;
        }
    else if (state== "Algeria" || state == "algeria")
        {
        local_time_hour--;
            if (local_time_hour >= 24)
            local_time_hour -= 24;
        cout << "In Algeria, the local time is " << setw(2) << setfill('0') << local_time_hour << ":" << setw(2) << setfill('0') << local_time_minutes << "." << endl;
        }
    else
        cout << "You have not entered a correct state!" << endl;
    
    return 0;
}

