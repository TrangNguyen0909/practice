#include "CONGTY.h"
#include <string>
int main() 
{
	CONGTY cty;
	int chon;
	string ms;
	string ten;
	string pb;
	double tl;
	int dem = 0;
	do
	{
		system("cls");
		cout << "=====================================================" << endl
			<< "CHUONG TRINH XU LY CONG TY" << endl
			<< "1. Nhap du lieu nhan vien cong ty." << endl
			<< "2. Xuat du lieu nhan vien cong ty." << endl
			<< "3. Liet ke NVBC co he so luong tu 3.5 tro len." << endl
			<< "4. Dem so luong NVHD co so ngay cong la 26." << endl
			<< "5. Tinh tong tien luong da tra cho nhan vien phong ke toan ." << endl
			<< "6. Tinh tien luong trung binh cua cac NVBC." << endl
			<< "7. Kiem tra cong ty co NVHD khong di lam ngay nao khong." << endl
			<< "8. Tim NVBC co he so luong cao nhat." << endl
			<< "9. Sap xep danh sach nhan vien tang dan theo ma so." << endl
			<< "10. Them mot nhan vien moi." << endl
			<< "11. Xoa nhan vien theo ma so." << endl
			<< "12. Tim kiem nhan vien." << endl
			<< "0. Thoat chuong trinh." << endl
			<< "Ban chon: ";
		cin >> chon;
		switch (chon) 
		{
		case 0:
			cout << "Dang thoat chuong trinh" << endl;
			break;
		case 1:
			cty.nhap();
			break;
		case 2:
			cout << "DANH SACH NHAN VIEN CONG TY" << endl;
			cty.xuat();
			break;
		case 3:
			cout << "Danh sach nhan vien co he so luong tu 3.5 tro len: " << endl;
			cty.lietKeNVBCCoHSLtu35();
			break;
		case 4:
			cout << "So luong nhan vien co so ngay cong 26: " << cty.demNVHDCoSoNgayCong26() << endl;
			break;
		case 5:
			cout << "Tong tien luong da tra cho nhan vien phong \" ke toan \": " << cty.tinhTienLuongNVPhongKeToan() << endl;
			break;
		case 6:
			cout << "Tien luong trung binh NVBC: " << cty.tinhTienLuongTBNVBC() << endl;
			break;
		case 7:
			if (cty.KTNVHDKhongDiLam()) {
				cout << "Co NVHD khong di lam ngay nao" << endl;
			}
			else {
				cout << "Khong co NVHD khong di lam ngay nao" << endl;
			}
			break;
		case 8:
			cout << "NVBC co he so luong cao nhat: " << endl;
			cty.timNVBCHSLCaoNhat();
			break;
		case 9:
			cty.sapXepDSNVTangdanTheoMaSo();
			cout << "DANH SACH NHAN VIEN SAU KHI SAP XEP" << endl;
			cty.xuat();
			break;
		case 10:
			cty.nhap1();
			break;
		case 11:
			cin.ignore();
			cout << "Nhap ma so nhan vien can xoa: ";
			getline(cin, ms);
			cty.xoa1NVTheoMaSo(ms);
			break;
		case 12:
			do
			{
				int chon1;
				cout << "1. Tim nhan vien theo ma so." << endl
					<< "2. Tim nhan vien theo ten." << endl
					<< "3. Tim nhan vien theo phong ban." << endl
					<< "4. Tim nhan vien theo tien luong." << endl
					<< "Ban chon: ";
				cin >> chon1;
				switch (chon1) 
				{
				case 1:
					cin.ignore();
					cout << "Nhap ma so nhan vien can tim: ";
					getline(cin, ms);
					cty.timNVTheoMaSo(ms);
					dem++;
					break;
				case 2:
					cin.ignore();
					cout << "Nhap ho ten nhan vien can tim: ";
					getline(cin, ten);
					cty.timNVTheoTen(ten);
					dem++;

					break;
				case 3:
					cin.ignore();
					cout << "Nhap phong ban nhan vien can tim: ";
					getline(cin, pb);
					cty.timNVTheoPhongBan(pb);
					dem++;

					break;
				case 4:
					cout << "Nhap tien luong nhan vien can tim: ";
					cin >> tl;
					cty.timNVTheoTienLuong(tl);
					dem++;

					break;
				default:
					cout << "Vui long chon lai!!! ";
					break;
				}
				if (dem != 0) {
					break;
				}
			} while (chon <0|| chon>4);
			break;
		default:
			cout << "Vui long nhap lai!!! ";
			break;
		}
		system("pause");
	} while (chon != 0);
	return 1;
}