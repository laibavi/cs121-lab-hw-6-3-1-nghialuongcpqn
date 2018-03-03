#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, a = 0, mang[50];
	cout << "Insert a num: ";
	cin >> n;

	while (n != 0)
	{
		int  item= n % 10 ;
		n /= 10;
		mang[a] = item;
		a++;
	}
	for (int i = 0; i < a; i++)
		cout << mang[i]<< "    ";
	
	return 0;
}