#include<iostream>
using namespace std;
int x = 10;
int main()
{
    int x=30;
    cout << "Global x =" << :: x;
    cout << "Local x =" << x;
    return (0);
}