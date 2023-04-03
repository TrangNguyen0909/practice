#pragma once
#ifndef _NVHD
#define _NVHD
#include "NV.h"
class NVHD : public NV 
{
private:
	double tiencong, ngaycong, hsvg;
public:
	double getTienCong();
	double getNgayCong();
	double getHSVG();
	void setTienCong(double);
	void setNgayCong(double);
	void setHSVG(double);
	void nhap();
	void xuat();
	long tinhTienLuong();
	string getLoai();
};
#endif
