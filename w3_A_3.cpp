#include <iostream>
using namespace std;
int main()
{
	char daytab[2][12] = {
 {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
};
	for (int i = 0;i < 2;i++)
	 {
	 	for (int j = 0;j < 12;j++) cout << daytab[i][j] << " ";
	 	cout << endl;
	 }
	 cout << endl;
	 
	char aytab[2][12] = {
 {31,28,31,30,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
};
for (int i = 0;i < 2;i++)
	 {
	 	for (int j = 0;j < 12;j++) cout << aytab[i][j] << " ";
	 	cout << endl;
	 }
	 cout << endl;
	 
	 char ytab[][12] = {
 {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
};
	for (int i = 0;i < 2;i++)
	 {
	 	for (int j = 0;j < 12;j++) cout << ytab[i][j] << " ";
	 	cout << endl;
	 }
	 cout << endl;
	 
	 cout << "------------\n";
 char datab[2][12] = {
 31,28,31,30,31,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31,30,31,30,31
}; 
 	for (int i = 0;i < 2;i++)
	 {
	 	for (int j = 0;j < 12;j++) cout << datab[i][j] << " ";
	 	cout << endl;
	 }
	 cout << endl;
	 
	 char tab[2][12] = {
 31,28,31,30,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31,30,31,30,31
}; 
 	for (int i = 0;i < 2;i++)
	 {
	 	for (int j = 0;j < 12;j++) cout << tab[i][j] << " ";
	 	cout << endl;
	 }
	 cout << endl;
	 
	 char dadtab[][12] = {
 31,28,31,30,31,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31,30,31,30,31
}; 
 	for (int i = 0;i < 2;i++)
	 {
	 	for (int j = 0;j < 12;j++) cout << dadtab[i][j] << " ";
	 	cout << endl;
	 }
	 cout << endl;
	 
	return 0; 
}
