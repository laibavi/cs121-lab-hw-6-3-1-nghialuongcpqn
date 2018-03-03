#include <iostream>
#include <string>
using namespace std;

int main()
{
	int second, n, mang[50];
	cout << "So luong phan tu muon nhap: ";
	cin >> n;

	for (int i = 0; i< n; i++)
	{
		cout << "Nhap vao phan tu thu " << i + 1 << ": ";
		cin >> mang[i];
	}
	int max = mang[0];
	for (int i = 0; i< n; i++)
	{
		if (max < mang[i])
		{
			max = mang[i];
		}
	}
	
	if (mang[0] < mang[1])
	{
		int largest = mang[1];
		int second = mang[0];
	}
	else
	{
		max = mang[0];
		second = mang[1];
	}
	for (int i = 2; i< n; i++)
	{	
		if (mang[i] > max)
		{
			second = max;
			max = mang[i];
		}
		
		else if (mang[i] > second && mang[i] != max)
		{
			second = mang[i];
		}
	}
	cout << "2nd biggest is: " << second << endl;

	

	return 0;
}