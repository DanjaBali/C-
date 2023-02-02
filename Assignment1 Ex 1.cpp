/* Two different points in the coordinative plane are given from the user A(x1,y1) and B(x2,y2). Define if the line AB is parallel to the x axes, or parallel to the y axis or it intercepts the axes. Check if the line passes through the origin (0,0).*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1,x2,y1,y2,k,y_intersect;
    
    cout << "Please enter the coordinates of point A: " ;
    cin >> x1 >> y1;
    cout << endl;
    
    cout << "Please enter the coordinates of point B: " ;
    cin >> x2 >> y2;
    cout << endl;
    
    if (x1==x2 && y1==y2)
        cout << "Error! No line is created. The coordinates of point A are the same as those of point B. " << endl;
    else
    {
        if (x2-x1 == 0)
         cout << "The line AB is parallel to the y axis." << endl;
        else if (y2-y1 == 0)
         cout << "The line AB is parallel to the x axis." << endl;
        else
         cout << "The line AB intercepts the axes." << endl;
    
    k= (y2-y1)/(x2-x1);
    y_intersect=y1-k*x1;

    
        if (y_intersect == 0 )
         cout << "The line AB passes through the origin (0;0)." << endl;
        else
         cout << "The line AB doesn't pass through the origin (0;0)." << endl; }
    
    return 0;
}

