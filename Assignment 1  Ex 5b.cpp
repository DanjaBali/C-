/* b) Ask the user to input two different characters and output the pattern as given below (odd rows print characters c1 and c2, even rows print c2 and c1). The following example regards to characters ‘*’ and ‘@’ and number of rows 5. */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    char c1,c2;
    int n,j,i;
    
    cout << "Please enter the number of rows: " ;
    cin >> n;
    cout << endl;
    
    cout << "Please enter first character: " ;
    cin >> c1;
    cout << endl;
    cout << "Please enter second character: " ;
    cin >> c2;
    cout << endl;
    
   for (i = 1; i <= n; i++) {
       cout << i ;
       
       if (i % 2 == 0) {
           for (j = 1; j <= i; j++)
           cout << c2 << c1;
           cout << endl;
       } else {
           for (j = 1; j <= i; j++)
           cout << c1 << c2;
           cout << endl;
       }
   }
    
    return 0;
}
