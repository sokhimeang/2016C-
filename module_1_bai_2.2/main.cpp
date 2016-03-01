#include <iostream>
#include <string.h>

using namespace std;
main() 
{
	char a[999999];
	int dem = 0, i;
	
	do{
		cout<<"nhap chuoi $(0;200] vao\n\t: ";
		cin.getline(a, 999999);
		if (strlen(a) <= 0||strlen(a) >= 200) cout<<"sai dieu kien, do dai #(0;200].\n";
	} while (strlen(a) <= 0||strlen(a) >= 200);
	
	for( i = 0; i <= strlen(a); i++ ){
		if ( a[i] == ' '&& a[i+1] != ' ') dem++;
	}
	if ( a[0] != ' ') dem++;
	
	cout << "chuoi nay co "<< dem <<" tu."; 	
	return 0;
}
