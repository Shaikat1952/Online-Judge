#include <iostream>

using namespace std;

int main()
{
    float x;
    cin>>x;
    if(x>=0 && x<=25.0000)
    cout<<"Intervalo [0,25]"<<endl;
    else if (x>=25.00001 && x<=50.0000000 )
        cout<<"Intervalo (25,50]"<<endl;
    else if(x>=50.00000001 && x<=75.0000000)
        cout<<"Intervalo (50,75]"<<endl;
    else if(x>=75.00000001 && x<=100.0000000)
        cout<<"Intervalo (75,100]"<<endl;
        else
            cout<<"Fora de intervalo"<<endl;
    return 0;
}
