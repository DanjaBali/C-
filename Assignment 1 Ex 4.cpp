/* Display even integer numbers in a column, from a to b (a<b) except m and n (m and n are values
between a and b). a,b,c,d are given from the user. Use continue statement.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int a,b,m,n, counter;
    
    cout <<"Please enter two integer numbers where the first one is less than the second: ";
    cin >> a >> b;
    cout << endl;
    
    
    if (a<b)
    {
        cout << "Please enter the two values which should not be displayed: ";
        cin >> m >> n;
        cout << endl;
        
        cout << "The even integers between " << a << " and " << b << " are: " << endl;
        
        if (a % 2 == 0)
            counter = a;
        else
            counter = a+1;
        
        for (int i= counter; i<b; i+=2)
        {
            if (i == m || i == n)
            {
                continue;
            }
            cout << setw(1) << i << endl;
        }
    }
    else
        cout <<"Error! The first number should be less than the second number!" << endl;
    
    return 0;
}
