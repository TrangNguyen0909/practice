#include "NVHD.h"
double NVHD::getTienCong()
{
	return tiencong;
}
double NVHD::getNgayCong() {
	return ngaycong;
}
double NVHD::getHSVG() {
	return hsvg;
}
void NVHD::setTienCong(double tc) {
	tiencong = tc;
}
void NVHD::setNgayCong(double nc) {
	ngaycong = nc;
}
void NVHD::setHSVG(double hsvg) {
	this->hsvg = hsvg;
}
void NVHD::nhap() {
	NV::nhap();
	cout << "Tien cong: ";
	cin >> tiencong;
	cout << "Ngay cong: ";
	cin >> ngaycong;
	cout << "He so vuot gio: ";
	cin >> hsvg;
}
void NVHD::xuat() {
	NV::xuat();
	cout << "Tien cong: " << tiencong << endl;
	cout << "Ngay cong: " << ngaycong << endl;
	cout << "He so vuot gio: " << hsvg << endl;
	cout << "Tien luong: " << tinhTienLuong() << endl;
}
long NVHD::tinhTienLuong() {
	return tiencong * ngaycong * (1 + hsvg);
}
string NVHD::getLoai() {
	return "NVHD";
}