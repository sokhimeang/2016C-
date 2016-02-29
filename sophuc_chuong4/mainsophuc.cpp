#include <iostream>
#include <stdio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	float phanthuc, phanao;
} sophuc;
	
int main(int argc, char** argv) {
	sophuc a[20];
	int n, i;
	cout<<"nhap so luong so phuc n: ";
	cin>>n;	
	for ( i = 0; i <= n - 1; i++){
		cout<<"nhap phan thuc cua so phuc thu "<<i+1<<": ";
		cin>>a[i].phanthuc;
		cout<<"nhap phan ao cua so phuc thu "<<i+1<<": ";
		cin>>a[i].phanao;
	}
	
	cout<<"cac so phuc ban vua nhap:"<<endl;
	for ( i = 0; i <= n - 1; i++){
		cout<<"\t#"<<i+1<<": "<<a[i].phanthuc<<" + j."<<a[i].phanao<<endl;
	}
	
	sophuc tong;
	for ( i = 0; i <= n - 1; i++){
		tong.phanthuc += a[i].phanthuc;
		tong.phanao += a[i].phanao;
	}
	cout<<"tong cua chung bang: "<<tong.phanthuc<<" + j."<<tong.phanao<<endl;	
	return 0;
}
