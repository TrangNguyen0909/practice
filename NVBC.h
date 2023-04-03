#pragma once
#ifndef _NVBC
#define _NVBC
#include "NV.h"
class NVBC :public NV {
private:
	double hsl, hspc;
public:
	double gethsl();
	double gethspc();
	void sethsl(double);
	void sethspc(double);
	void nhap();
	void xuat();
	long tinhTienLuong();
	string getLoai();
};
#endif