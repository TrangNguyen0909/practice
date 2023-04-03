#include "CONGTY.h"
#include "NVBC.h"
#include "NVHD.h"
CONGTY::CONGTY() {
	pNV = NULL;
	sl = 0;
}
CONGTY::~CONGTY() {
	if (pNV != NULL) {
		for (int i = 0; i < sl; i++) {
			delete pNV[i];
		}
		delete[]pNV;
		pNV = NULL;
		sl = 0;
	}
}
int CONGTY::getSL() {
	return sl;
}
void CONGTY::nhap() {
	int loai;
	do {
		cout << "Nhap so luong nhan vien: ";
		cin >> sl;
	} while (sl < 1);
	pNV = new NV * [sl];
	for (int i = 0; i < sl; i++) {
		cout << "-------------------------------------------------" << endl
			<< "Nhap thong tin nhan vien " << i + 1 << endl;
		do {
			cout << "Nhap loai (1.NVBC, 2.NVHD): ";
			cin >> loai;
		} while (loai < 1 || loai>2);
		if (loai == 1) pNV[i] = new NVBC;
		else pNV[i] = new NVHD;
		pNV[i]->nhap();

	}
}
void CONGTY::xuat() {
	if (pNV == NULL) {
		cout << "DANH SACH NHAN VIEN RONG" << endl;

	}
	else {
		for (int i = 0; i < sl; i++) {
			pNV[i]->xuat();
		}
	}
}
NV* CONGTY::nhap1() {
	int loai;
	NV* pNV;
	do {
		cout << "Nhap loai (1.NVBC, 2.NVHD): ";
		cin >> loai;
	} while (loai < 1 || loai>2);
	if (loai == 1) pNV = new NVBC;
	else pNV = new NVHD;
	pNV->nhap();
	return pNV;
}
void CONGTY::lietKeNVBCCoHSLtu35() {
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if (pNV[i]->getLoai() == "NVBC" && pNV[i]->gethsl() > 3.5) {
			pNV[i]->xuat();
			dem++;
		}
		if (dem == 0) {
			cout << "Khong co nhan vien bien che nao co he so luong tren 3.5" << endl;
		}
	}
}
int CONGTY::demNVHDCoSoNgayCong26() {
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if (pNV[i]->getLoai() == "NVHD" && pNV[i]->getNgayCong() == 26) {
			dem++;
		}
	}
	return dem;
}
double CONGTY::tinhTienLuongNVPhongKeToan() {
	double s = 0;
	for (int i = 0; i < sl; i++) {
		if (doiChuoiInHoa(pNV[i]->getPhongBan()) == "KE TOAN") {
			s += pNV[i]->tinhTienLuong();
		}
	}
	return s;
}
double CONGTY::tinhTienLuongTBNVBC() {
	double s = 0;
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if (pNV[i]->getLoai() == "NVBC") {
			s += pNV[i]->tinhTienLuong();
			dem++;
		}
	}
	return (double)s / dem;

}
bool CONGTY::KTNVHDKhongDiLam() {
	for (int i = 0; i < sl; i++) {
		if (pNV[i]->getNgayCong() == 0) {
			return true;
		}
	}
	return false;

}
void CONGTY::timNVBCHSLCaoNhat() {
	double hslMax = -1, vt = -1;
	for (int i = 0; i < sl; i++) {
		if (pNV[i]->getLoai() == "NVBC") {
			vt = i;
			hslMax = pNV[i]->gethsl();
			break;
		}
	}
	if (vt == -1) {
		cout << "Khong co nhan vien bien che " << endl;
	}
	else {
		for (int i = 0; i < sl; i++) {
			if (pNV[i]->getLoai() == "NVBC" && pNV[i]->gethsl() > hslMax) {
				hslMax = pNV[i]->gethsl();
			}
		}
		for (int i = 0; i < sl; i++) {
			if (pNV[i]->getLoai() == "NVBC" && pNV[i]->gethsl() == hslMax) {
				pNV[i]->xuat();
			}
		}
	}
}
void CONGTY::sapXepDSNVTangdanTheoMaSo() {

	for (int i = 0; i < sl; i++) {
		for (int j = i + 1; j < sl; j++) {
			if (doiChuoiInHoa(pNV[i]->getMSNV()) > doiChuoiInHoa(pNV[j]->getMSNV())) {
				swap(pNV[i], pNV[j]);
			}
		}
	}
}
void CONGTY::xoa1NVTheoMaSo(string ms) {
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if (doiChuoiInHoa(pNV[i]->getMSNV()) == doiChuoiInHoa(ms)) {
			dem++;
			for (int j = i; j < sl; j++) {
				pNV[j] = pNV[j + 1];
			}
			sl--;
		}
	}
	if (dem == 0) {
		cout << "Khong co nhan vien co ma so: " << ms << endl;
	}
}
void CONGTY::timNVTheoMaSo(string ms) {
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if (doiChuoiInHoa(pNV[i]->getMSNV()) == doiChuoiInHoa(ms)) {
			pNV[i]->xuat();
			dem++;
		}
	}
	if (dem == 0) {
		cout << "Khong tim thay nhan vien co ma so: " << ms << endl;
	}
}
void CONGTY::timNVTheoTen(string ten) {
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if (doiChuoiInHoa(pNV[i]->getHoTen()) == doiChuoiInHoa(ten)) {
			pNV[i]->xuat();
			dem++;
		}
	}
	if (dem == 0) {
		cout << "Khong tim thay nhan vien co ten: " << ten << endl;
	}
}
void CONGTY::timNVTheoPhongBan(string pb) {
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if (doiChuoiInHoa(pNV[i]->getPhongBan()) == doiChuoiInHoa(pb)) {
			pNV[i]->xuat();
			dem++;
		}
	}
	if (dem == 0) {
		cout << "Khong tim thay nhan vien phong: " << pb << endl;
	}
}
void CONGTY::timNVTheoTienLuong(double tl) {
	int dem = 0;
	for (int i = 0; i < sl; i++) {
		if ((pNV[i]->getTienCong()) == tl) {
			pNV[i]->xuat();
			dem++;
		}
	}
	if (dem == 0) {
		cout << "Khong tim thay nhan vien co tien luong: " << tl << endl;
	}
}
string CONGTY::doiChuoiInHoa(string s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
	return s;
}
string CONGTY::doiChuoiInThuong(string s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	return s;
}