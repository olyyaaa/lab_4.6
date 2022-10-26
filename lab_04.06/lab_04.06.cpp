// lab_04.06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double P, S;
    int i, k;
    S = 0;
    i = 1;
    while (i <= 15)
    {
        P = 1;
        k = 1;
        while (k <= i)
        {
            P *= sqrt(k);
            k++;
        }
        S += (sin(10. * i) + cos(10. * i)) / P;
        i++;
    }
    cout << S << endl;
    S = 0;
    i = 1;
    do {
        P = 1;
        k = 1;
        do {
            P *= sqrt(k);
            k++;
        } while (k <= i);
        S += (sin(10. * i) + cos(10. * i)) / P;
        i++;
    } while (i <= 15);
    cout << S << endl;
    S = 0;
    for (i = 1; i <= 15; i++)
    {
        P = 1;
        for (k = 1; k <= i; k++)
        {
            P *= sqrt(k);
        }
        S += (sin(10. * i) + cos(10. * i)) / P;
    }
    cout << S << endl;
    S = 0;
    for (i = 15; i >= 1; i--)
    {
        P = 1;
        for (k = i; k >= 1; k--)
        {
            P *= sqrt(k);
        }
        S += (sin(10. * i) + cos(10. * i)) / P;
    }
    cout << S << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
