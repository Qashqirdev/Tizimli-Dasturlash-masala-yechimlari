// Uch xonali sonning o'nliklar va birliklar xonasidagi raqamni o'rnini almashtiruvchi programma tuzilsin 
#include<iostream>
using namespace std;
int main()
{ int n;
	cin>>n;
	int k;
	k=(n/100) * 100 + (n%10) * 10 + (n%100) / 10;
	cout<<k;
	
	return 0;
}
