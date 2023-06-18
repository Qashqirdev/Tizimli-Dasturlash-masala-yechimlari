// Satr berilgan. Satrdagi xamma katta harflarini kichigiga, kichiklarini kattasiga almashtiruvchi programma tuzilsin 
#include <iostream>
#include<string>

using namespace std;

int main() {
	string str;
    cout<<"Satrni kiriting ";
    getline(cin,str);

	for(int i=0;i<str.length();i++)
		str[i]=toupper(str[i]);

    cout<<"\n Katta harflarda :"<<str<<"\n";

	for(int j=0;j<str.length();j++)
		str[j]=tolower(str[j]);

    cout<<"Kichik harflarda : "<<str<<"\n";
}