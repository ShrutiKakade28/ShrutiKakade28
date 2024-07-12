#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter any three numbers: ";
    cin>>a>>b>>c;
    if (a>=b and a>=c)
    {
        cout<<"Maximum number is "<<a;
    }
    else if (b>=a and b>=c)
    {
        cout<<"Maximum number is "<<b;
    }
    else if (c>=a and c>=b)
    {
        cout<<"Maximum number is "<<c;
    }
    else
    {
        cout<<"Equal numbers";  
    }
    return 0;
    
}
