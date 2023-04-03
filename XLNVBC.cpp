#include"NVBC.h"
double NVBC::gethsl() {
	return hsl;
}
double NVBC::gethspc() {
	return hspc;
}
void NVBC::sethsl(double hsl)
{
	this->hsl = hsl;
}
void NVBC::sethspc(double hspc)
{
	this->hspc = hspc;
}
void NVBC::nhap()
{
	NV::nhap();
	cout << "He so luong: ";
	cin >> hsl;
	cout << "He so phu cap chuc vu: ";
	cin >> hspc;
}
void NVBC::xuat() {
	NV::xuat();
	cout << "He so luong: " << hsl << endl;
	cout << "He so phu cap chuc vu: " << hspc << endl;
	cout << "Tien luong: " << tinhTienLuong() << endl;
}
long NVBC::tinhTienLuong()
{
	return (1 + hsl + hspc) * 1000;

}
string NVBC::getLoai()
{
	return "NVBC";
}