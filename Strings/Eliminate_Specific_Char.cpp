// C++ program to remove a particular character from a string.
#include <bits/stdc++.h>
using namespace std;

void removeChar(char* s, char c)
{

	int j, n = strlen(s);
	for (int i = j = 0; i < n; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}

int main()
{
    char str[1000];
    cin.getline(str,1000);
    cout<<"\n";

    cout<<"Enter Character to be eliminated from string :";
    char ch;
    cin>>ch;
    cout<<"New String is :\n";

	removeChar(str, ch);
	cout << str;
	return 0;
}
