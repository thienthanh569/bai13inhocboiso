// bai13inhocboiso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "tim boi so\n";
    int so;
    cout << "Nhap so:  "; cin >> so;
    for (int i = 1; i <= so; i++) {

        if (so % i == 0);
        cout << i << " ";
    }
}