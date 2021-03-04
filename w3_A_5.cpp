#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int f[30];
	for (int i = 0;i < 30;i++) {f[i] = rand()%100 + 1; cout << f[i] << " ";}
	cout << endl;
	for (int i = 0;i < 29;i++)
	 for (int j = i + 1;j < 30;j++)
	  if (f[i] > f[j])
	   {
	   		int sw = f[i];
	   		f[i] = f[j];
	   		f[j] = sw;
	   }
	for (int i = 0;i < 30;i++) cout << f[i] << " ";
	return 0;
}
