#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[n + 1][n + 1];
	for (int i = 0;i <= n;i++)
	 for (int j = 0;j <= n;j++) 
	  f[i][j] = 0;
	f[1][1] = 1;
	for (int i = 2;i <= n;i++)
	 for (int j = 1;j <= i;j++)
	  f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
	for (int i = 1;i <= n;i++)  
	{
	 	for (int j = 1;j <= i;j++) cout << f[i][j] << " ";
	 	cout << endl;
	}
	return 0;
}
