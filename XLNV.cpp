#include "NV.h"
#include <string>
NV::NV(string maso, string hoten, string phongban) :msnv(maso), hoten(hoten), phongban(phongban)
{
};
string NV::getMSNV() 
{
	return msnv;
}
string NV::getHoTen() 
{
	return hoten;
}
string NV::getPhongBan() 
{
	return phongban;
}
void NV::setMSNV(string ms) 
{
	msnv = ms;
}
void NV::setHoTen(string ht)
{
	hoten = ht;
}
void NV::setPhongBan(string pb) 
{
	phongban = pb;
}
double  NV::gethsl() 
{
	return -1;
}
double NV::gethspc()
{
	return -1;
}
double NV::getTienCong() 
{
	return -1;
}
double NV::getNgayCong() 
{
	return -1;
}
double NV::getHSVG() {
	return -1;
}
void NV::sethsl(double hsl) 
{
	return;
}
void NV::sethspc(double hspc)
{
	return;
}
void NV::setTienCong(double tiencong)
{
	return;
}
void NV::setNgayCong(double ngaycong) 
{
	return;
}
void NV::setHSVG(double hsvg) 
{
	return;
}
void NV::nhap()
{
	cin.ignore();
	cout << "Ma So: ";
	getline(cin, msnv);
	cout << "Ho ten: ";
	getline(cin, hoten);
	cout << "Phong ban: ";
	getline(cin, phongban);

}

void NV::xuat()
{
	cout << endl << "---             ---            ---" << endl;
	cout << "Ma So: " << msnv << endl;
	cout << "Ho ten: " << hoten << endl;
	cout << "Phong ban: " << phongban << endl;
}