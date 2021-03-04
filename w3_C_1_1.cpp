#include<iostream>
using namespace std;
int main()
{
	int i;
	double n,f[100],sum = 0;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> f[i];
		sum += f[i];
	}
	double aver = sum/n, var = 0;
	for(i = 1;i <= n;i++)
	var += (f[i]-aver)*(f[i]-aver)/(n-1);
	cout << "Average: " << aver << endl;
	cout << "Variance: " << var;
	return 0;
}
