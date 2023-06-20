//parallelpepedning tomonilari a,b,c berilgan hajmini va yuzasini toping
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,v,s;
    cin>>a>>b>>c;
   	v=a*b*c;
    cout<<"v=" << v <<endl;
    s=2*(a*b+b*c+a*c);
    cout<<"s=" <<s <<endl;
    return 0;
    
}
