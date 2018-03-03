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
	
	float tbinh, tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + mang[i];
	}
	
	tbinh = tong / n;
	cout << "TRUNG BINH:  " << tbinh << endl;
	cout << "Cac phan tu lon hon trung binh: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (mang[i] > tbinh)
		{
			cout << mang[i] << "\t"<<endl;
		}
	}
	cout << "\t";

	return 0;
}