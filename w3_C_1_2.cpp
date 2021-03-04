#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 0) return 0;
	int read,c = 0, l = 0;
	cin >> read;
	if (read%2 == 0) c++;else l++;
	if (n == 1)
	 {
	 	cout << "Min: " << read << endl;
	 	cout << "Max: " << read << endl;
	 	cout << "Chan: " << c << endl;
	 	cout << "Le: " << l << endl;
	 }
	else 
	 {
	 	int min = read;
	 	int max = read;
	 	for (int i = 1;i < n;i++)
	 	 {
	 	 	cin >> read;
	 	 	if (read%2 == 0) c++;else l++;
	 	 	if (read > max) max = read;
	 	 	if (read < min) min = read;
		 }
		cout << "Min: " << min << endl;
	 	cout << "Max: " << max << endl;
	 	cout << "Chan: " << c << endl;
	 	cout << "Le: " << l << endl; 
	 } 
	return 0; 
}
