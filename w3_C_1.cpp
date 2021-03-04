#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int f[n];
	bool check = false;
	for (int i = 0;i < n;i++)
	 {
	 	cin >> f[i];
	 	if (check == false)
	 	 for (int m = 0;m <= i - 1;m++)
	 	  for (int n = m + 1;n <= i;n++)
	 	   if (f[m] == f[n]) 
	 	    {
	 	    	cout << "yes";
	 	    	return 1;
			}
	 }
	if (check == false) cout << "no";
	return 0;
}
