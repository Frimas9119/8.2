#include <iostream>
#include <string>

using namespace std;

int SerchB(const string s)
{
	int k = 0;
	int y= s.length();
	for (int i = 0;i < y;i++) {
		if (s[i] == 'B' || (s[i] == ' ' && s[i + 1] == 'b')) {
			k++;
		}
	}
	return k;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "The number of words that begin with B: " << SerchB(str) << endl;
	return 0;
}
