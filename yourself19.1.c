#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// khai bao cau truc
typedef struct MonHang
{
	// cac truong` cua struct
	int maSo; 
	int giaCa;
	int soLuong;
} MonHang;

#define tongSoHang    5 // lam the nay thay doi do dai cua mang cho de~

// khai bao kho hang
MonHang khohang[tongSoHang];

// ham` nhap thong tin kho hang
void nhap()
{
	printf("Nhap thong tin kho hang:\n");
	int i;
	for(i=0; i<tongSoHang; i++)
	{
		printf("Mon hang thu %d", i+1);
		printf("\nMa so: ");
		scanf("%d", &khohang[i].maSo); // nhap ma so
		printf("Gia ca: ");
		scanf("%d", &khohang[i].giaCa);	// nhap gia ca
		printf("So luong: ");
		scanf("%d", &khohang[i].soLuong); // nhap so luong
	}
}

// ham` xuat thong tin kho hang
void xuat()
{
	int i;
	printf("------------Xuat thong tin------------\n");
	for(i=0; i<tongSoHang; i++)
	{
		printf("\n\nMa so: %d", khohang[i].maSo);
		printf("\nGia ca: %d", khohang[i].giaCa);
		printf("\nSo luong: %d", khohang[i].soLuong);
	}
}


int tongGiaTriKhoHang()
{
	int tong = 0; // khoi tao tong = 0
	int i;
	for(i=0; i<tongSoHang; i++)
	{
		tong += khohang[i].giaCa; // cong don` gia ca cac mon hang vao tong
	}
	
	return tong; // tra ve tong gia tri.
}


int main()
{
	nhap();
	xuat();
	printf("\nTong gia tri kho hang: %d", tongGiaTriKhoHang());
	
	return 0;
}
