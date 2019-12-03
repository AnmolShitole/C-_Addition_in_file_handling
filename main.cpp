#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int sum=0;
	cin>>i;
	cin>>j;
	ofstream fout("XYZ.txt",ios::out);
	fout<<i<<endl<<j<<endl;

	sum=i+j;
	
	ofstream fout1("DAC.txt",ios::out);
	fout1<<sum<<endl;

	fout.close();
	fout1.close();	
}


