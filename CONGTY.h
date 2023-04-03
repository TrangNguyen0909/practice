#pragma once
#ifndef _CONGTY
#define _CONGTY
#include "NV.h"
class CONGTY 
{
private:
	NV** pNV;
	int sl;
public:
	CONGTY();
	~CONGTY();
	int getSL();
	void nhap();
	void xuat();
	NV* nhap1();
	void lietKeNVBCCoHSLtu35();
	int demNVHDCoSoNgayCong26();
	double tinhTienLuongNVPhongKeToan();
	double tinhTienLuongTBNVBC();
	bool KTNVHDKhongDiLam();
	void timNVBCHSLCaoNhat();
	void sapXepDSNVTangdanTheoMaSo();
	void xoa1NVTheoMaSo(string ms);
	void timNVTheoMaSo(string);
	void timNVTheoTen(string);
	void timNVTheoPhongBan(string);
	void timNVTheoTienLuong(double);
	string doiChuoiInHoa(string);
	string doiChuoiInThuong(string);
};
#endif
