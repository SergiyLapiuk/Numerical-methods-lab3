#include <iostream>
#include <cmath>

using namespace std;

void simpleIteration() {
    double x = 1.25;
    double y = 0;

    double epsilon = 0.01;

    double x_last = 0;
    double y_last = 0;

     do  {
        
        x_last = x;
        y_last = y;

        x = (0.9 + cos(y)) / 3;
        y = sin(x - 0.6) - 1.6;
     } while (max(abs(x - x_last), abs(y - y_last)) > epsilon);

     cout << "Solution:" << endl;
     cout << "x = " << x << "; y = " << y;
} 

int main()
{
    simpleIteration();
    return 0;
}


