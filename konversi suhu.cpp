#include <iostream>
using namespace std;

int main()
{
	cout<<"=======Konversi suhu dari celcius======="<<endl;
	float c, k, f, r;
	string input;
	
	awal :
	cout<<"Masukan nominal suhu : "<<endl;
	cin>>c;
	
	//rumus k, f, r
	k = c + 273.15;
	f = (c*1.8)+32;
	r = c*0.8;
	
	cout<<"\nHasil Celcius ke Kelvin : "<<k<<endl;
	cout<<"\nHasil Celcius ke Fahrenheit : "<<f<<endl;
	cout<<"\nHasil Celcius ke Reamur : "<<r<<endl;
	
	cout<<"Ulangi lagi? [y/n] : ";
	cin>>input;
	
	if(input == "y" || input == "Y"){
		goto awal ;
	} else{
		return 0;
	}
	
	if(input == "n" || input == "N"){
		return 0;
	}
}
