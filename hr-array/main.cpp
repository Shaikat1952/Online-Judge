#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n],j,sum=0;
    for(j=0;j<n;j++)
    {
        cin>>arr[n];
        sum=sum+arr[n];
    }

    cout <<sum<< endl;
    return 0;
}
