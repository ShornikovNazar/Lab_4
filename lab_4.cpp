#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, ".1251");
    double y, x;
    cout<<"Введіть значення х\n";
    cin>>x;
    y=((4*x*x-2)*(x+2)/(2*x+3))+(x*x*sin(x))/(2*x+1);
    cout<<y;
    return 0;
}