#include <stdio.h>
int main()
{
	//Buoc 2: Nhap vao mot so nguyen n nho hon 100
	int n;
	do
	{
		printf("\nNhap vao mot so nguyen duong n (n<100):");
		scanf("%d",&n);
		if (n <= 0 || n >= 100)
		{
			 printf("\nVui long nhap so nguyen duong n <= 100!");
		}
	}	
 	while(n <= 0 ||n >= 100);
 	
 	//Buoc 5: Goi ham va kiem tra ket qua
 	printNumbers(n);
 	
 	return 0;
}
//Buoc 4: Xay dung ham chi  tiet ham
 void printNumbers (int n)
 {
 	printf("\nCac so tu 1 den %d la:",n);
 	for (int i = 1;i <= n; i++)
 	
 }

