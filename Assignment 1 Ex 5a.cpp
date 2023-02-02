/* Print the pattern using loops. a) Number or rows n>=2 or n<10. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, i,k;
    
    cout << "Please enter the number of rows.";
    cout << "\nThis number must be greater or equal to 2 or less than 10: ";
    cin >> n;
    cout << endl;
    
    if (n>=2 && n<10) {
        for (i = 0; i <= n; i++) {
            for (k = 0; k < i; k++) {
                cout << " " << i ;
            }
            cout << endl;
        }
    } else {
        cout << "Error! The number of rows must be greater or equal to 2 or less than 10!" << endl;
    }
    
    return 0;
}
