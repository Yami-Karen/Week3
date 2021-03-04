#include <iostream>
using namespace std;
int check(int x,int y,char* f[])
{
	int t = 0;
	for (int i = -1;i <= 1;i++)
	 for (int j = -1;j <= 1;j++)
	  if (f[x + i][y + j] == '*') t++;
	return t;  
}
int main()
{
	int m,n;
	cin >> m >> n;
	char* f[m + 2];
	for (int i = 0;i <= m + 1;i++) f[i] = new char;
	for (int i = 0;i <= m + 1;i++)
	 for (int j = 0;j <= n + 1;j++)
	  f[i][j] = '.';
	for (int i = 1;i <= m;i++)
	 for (int j = 1;j <= n;j++)
	  cin >> f[i][j];
	for (int i = 1;i <= m;i++) 
		{
	 		for (int j = 1;j <= n;j++)
	 		{
	 		 	if (f[i][j] == '*') cout << f[i][j] << " ";
	 		 	else cout << check(i,j,f) << " ";
			}
	 		cout << endl;
	 	}
	return 0;
}
