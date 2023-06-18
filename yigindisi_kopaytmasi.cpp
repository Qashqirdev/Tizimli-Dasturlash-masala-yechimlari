// Uch xonali son berilgan. Uning raqamlar yig'indisini va raqamlar ko'paytmasini aniqlovchi programma tuzilsin 
#include<iostream>
using namespace std;
int main()
{ int n;
	cin>>n;
	int yigindi, kopaytma;
	yigindi = n%10 + (n/10) % 10 + (n/100) % 10;
	kopaytma = (n%10) * ((n/10) % 10) * (n/100) % 10;
	cout<<"Raqamlari yig'indisi : "<<yigindi <<"\n";
	cout<<"Raqamlari ko'paytmasi : "<< kopaytma;
	
	return 0;
}
