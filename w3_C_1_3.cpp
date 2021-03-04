#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[10];
	for (int i = 0;i < 10;i++) f[i] = 0;
	int read;
	for (int i = 1;i <= n;i++) 
	 {
	 	cin >> read;
	 	f[read]++;
	 }
	for (int i = 0;i < 10;i++)  cout << i << " " << f[i] << endl;
	return 0;
}
