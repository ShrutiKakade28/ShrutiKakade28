#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter number: ";
    cin>>n;
    while (i<=10)
    {
        cout<<n<<'x'<<i<<"="<<n*i<<"\n";
        i++;
    }
    //We can also use for loop as follows
    //for(i=1; i<=10; i++)
    //{
        //cout<<n<<'x'<<i<<"="<<n*i<<"\n";
    //}
    return 0;
}
