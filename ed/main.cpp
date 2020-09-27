#include <iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    float A,B,C,X,Y,Z;
    cin>>A>>B>>C;

    X=(B*B)-(4*A*C);
    cout<<fixed;
    cout<<setprecision(5);

    if(X<0)
        cout<<"Impossivel calcular"<<endl;
        else if(A==0)
            cout<<"Impossivel calcular"<<endl;
    else
    {
                Y=(-B+sqrt(X))/(A+A);
                Z=(-B-sqrt(X))/(A+A);
                cout<<"R1 = "<<Y<<endl;
                cout<<"R2 = "<<Z<<endl;
    }


    return 0;
}
