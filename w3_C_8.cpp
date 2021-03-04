#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[n + 1];
	for (int i = 1;i <= n;i++) cin >> f[i];
	sort(f,f + n + 1);
	int s = 0;
	for (int i = 1;i < n;i++)
	 s += f[i]*(n - i);
	cout << s;
	return 0;
}
