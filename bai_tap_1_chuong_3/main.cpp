#include <iostream>
#include <stdio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	int tuso, mauso;
} phanso;
phanso add(phanso a, phanso b){
	phanso c;
	c.tuso = a.tuso * b.mauso + a.mauso*b.tuso;
	c.mauso = a.mauso * b.mauso;
	return c;
}
void Print(phanso k){
	cout<<"tong cong cua 2 phan so bang: "<<k.tuso<<"/"<<k.mauso;
}

int main(int argc, char** argv) {
	
	phanso p, q, r;
	cout<<"nhap vao tu so cua p: ";
	cin>>p.tuso;
	cout<<"nhap vao mau so cua p: ";
	cin>>p.mauso;
	cout<<"nhap vao tu so cua q: ";
	cin>>q.tuso;
	cout<<"nhap vao mau so cua q: ";
	cin>>q.mauso;
	r = add( p, q);	
	Print(r);
	return 0;
}
