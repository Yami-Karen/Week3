#include <iostream>
using namespace std;
int main()
{
	string s = "abcd";
	cout << s[-10] << " " << s[2] << " " << s[4] << endl;
	s[4] = 'r';
	cout << s;
	return 0;
}
