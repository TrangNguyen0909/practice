#pragma once
#pragma once
#ifndef _NV
#define _NV
#include <iostream>
using namespace std;
class NV {
protected:
	string msnv, hoten, phongban;
public:
	NV(string = " ", string = " ", string = " ");
	string getMSNV();
	string getHoTen();
	string getPhongBan();
	void setMSNV(string);
	void setHoTen(string);
	void setPhongBan(string);
	virtual double gethsl();
	virtual double gethspc();
	virtual double getTienCong();
	virtual double getNgayCong();
	virtual double getHSVG();
	virtual void sethsl(double);
	virtual void sethspc(double);
	virtual void setTienCong(double);
	virtual void setNgayCong(double);
	virtual void setHSVG(double);
	virtual void nhap();
	virtual void xuat();
	virtual long tinhTienLuong() = 0;
	virtual string getLoai() = 0;
};
#endif