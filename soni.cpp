//  Satr berilgan. Satrdagi katta,kichik latin harflari va raqam,belgilar sonini aniqlavchi programma tuzilsin 
#include<iostream>
using namespace std;
int main()
{	string st;
	cin>>st;
    	int upper = 0, lower = 0, number = 0, special = 0;
	for (int i = 0; i < st.length(); i++)
	{
		if (st[i] >= 'A' && st[i] <= 'Z')
			upper++;
		else if (st[i] >= 'a' && st[i] <= 'z')
			lower++;
		else if (st[i]>= '0' && st[i]<= '9')
			number++;
		else
			special++;
	}
	cout << "Katta harflar soni : " << upper << endl;
	cout << "Kichik harflar soni : " << lower << endl;
	cout << "Raqamlar soni : " << number << endl;
	cout << "Belgilar soni : " << special << endl;

	cout<<st;
	
	return 0;
}
