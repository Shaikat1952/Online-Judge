#include <iostream>

using namespace std;

int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>arr[i][j];

    }

        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                sum=sum+arr[i][j];
            cout<<sum<<endl;

        }

    }





    return 0;
}
