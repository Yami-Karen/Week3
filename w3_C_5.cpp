#include <iostream>
#include <iomanip>
using namespace std;
bool out;
int rev(int* f[],int i,int j,int count,int m,int n,int move)
{
	f[i][j] = count;
	if (count == m*n) out = true;
	if (out == true) return 1;
	if (f[i + 1][j] != 0 && f[i - 1][j] != 0 && f[i][j + 1] == 0) move = 1;
	else if (j == n && i != m|| f[i - 1][j] != 0 && f[i][j + 1] != 0 && f[i + 1][j] == 0) move = 2;
	else if (i == m && j != 1 || f[i + 1][j] != 0 && f[i][j + 1] != 0 && f[i][j - 1] == 0) move = 3;
	else if (j == 1 && i != 1|| f[i + 1][j] != 0 && f[i][j - 1] != 0 && f[i - 1][j] == 0) move = 4;
	
	switch(move)
	{
		case 1:
			rev(f,i,j + 1,count + 1,m,n,move);
			break;
		case 2:
			rev(f,i + 1,j,count + 1,m,n,move);
			break;
		case 3:
			rev(f,i,j - 1,count + 1,m,n,move);
			break;
		case 4:
			rev(f,i - 1,j,count + 1,m,n,move);
			break;
	}
	
	if (out == true) return 1;
}
int main()
{
	out = false;
	int m,n;
	cin >> m >> n;
	int* f[m + 2];
	for (int i = 1;i <= m + 1;i++) f[i] = new int;
	for (int i = 1;i <= m + 1;i++) 
	 for (int j = 1;j <= n + 1;j++)
	  f[i][j] = 0;
	rev(f,1,1,1,m,n,1);  
	cout << endl;
	for (int i = 1;i <= m;i++)
	 {
	 	for (int j = 1;j <= n;j++) cout << setw(5) << f[i][j];
	 	cout << endl;
	 }
	 delete(f);
	return 0;
}
