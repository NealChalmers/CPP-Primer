#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
	char s1[5] = "jack", s2[5] = "rose", s3[9];			//strcpy and strcat
	strcpy(s3, s1);
	strcat(s3, s2);
	cout << s3;
	cout << endl;
}