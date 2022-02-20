//			WELLCOME TO PRORAM
//	Program.2 Input Output Addition Of Two Number
// Header File
#include<stdio.h>
#include<conio.h>
void main()
{

	//Declaretion DataType
	int Num1,Num2,Res=0;
	clrscr();

	printf("\tEnter the Addition Of Two Number\n");
	scanf("%d %d",&Num1,&Num2);

	//Operation of Addition
	Res=Num1+Num2;
	printf("Addition = %d",Res);

	getch();

}