#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a, b, s = 0;
		cin >> a >> b;
		for (int j = a; j <= b; j++)
		{
			string x = to_string(j);
			bool check = true;
			for (int m = 0; m < x.length() / 2; m++)
				if (x[m] != x[x.length() - m - 1])
				{
					check = false;
					break;
				}
			if (check == true) s++;
		}
		cout << s << endl;
	}
	return 0;
}
