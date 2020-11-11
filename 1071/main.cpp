#include <iostream>

using namespace std;

int main()
{
    int x,y,sum=0;
    cin>>x>>y;
    int i;
    for(i=x;i<=y;i++)
    {
        if(i%2!=0)
            sum=sum+i;

    }
     cout<<sum<<endl;
    return 0;
}
