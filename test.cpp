////2051052058_NguyenQuocHuy_BT03
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{ 
 string tens;
 int soNgay;
 double tienCong;
 double tienLuong;
 cout <<"nhap ten: ";
 getline ( cin, ten );
 cout << "nhap so ngay lam viec: ";
 cin >> soBuoi;

 cout <<" nhap tien cong 1 ngay: ";
 cin >>tienCong;
 tienLuong = soBuoi * tienCong;
 cout <<"Ten:" << ten << endsl;
 cout <<" tien luong huy :" << fixed << setprecision (0) 
	 << tienLuong
 system ("pause");
 return 0;
}