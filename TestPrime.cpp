#include <iostream>
#include <conio.h>
using namespace std;
bool prime (int x)
{
    if (x==1) return false;
    if (x<=3) return true;
    if (x%2==0) return false;
    for (int c=3;c<=x/2;c+=2)
        if (x%c==0) return false;
    return true;
}
int main()
{
    cout <<"Enter a number to show prime numbers from 2 to n : ";
    int n;
    cin>>n;
    for (int c=1;c<=n;c++)
    {
        if (prime(c)==true) cout<<c<<"\t";
    }
    getch();
    return 0;
}
