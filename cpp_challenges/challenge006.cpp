/** 
 *  @file    challenge006.cpp
 *  @author  Ibar Romay 
 *  @github  rowmatrix  
 *  @date    10/24/2016 
 *  
 *  @brief calculate pi accurately to at least 30 decimal places
 *
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define CORRECT_PI 3.141592653589793238462643383279

int main(int argc, char const *argv[])
{
    double pi = 1;     // Initialize pi
    bool flag = true;  // flag to alternate

    // Use the Gregory-Leibniz Series
    for (double i=3; i < 1000000000; i+=2)
    {
        if (flag)
        {
            pi -= 1.0 / i;
        }
        else
        {
            pi += 1.0 / i;   
        }
        flag = !flag;
        // cout << "i = " << i << " flag = " << flag <<" pi = " << 4*pi << endl;
    }

    cout << "pi = " << setprecision(30) << 4*pi << endl;
    cout << "pi = " << CORRECT_PI << endl;
    cout << "Correct up to 30 digits? " << (4*pi == CORRECT_PI) << endl;

    return 0;
}