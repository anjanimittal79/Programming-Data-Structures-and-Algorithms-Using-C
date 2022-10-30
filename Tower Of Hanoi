#include<stdio.h>
#include<conio.h>

void TowerOfHanoi(int n, char A, char B, char C)
{
// if number of disk is only 1
 if(n==1)
 {
  printf("Move disk from peg %c to peg %c\n",A,B);
  return;
 }
 TowerOfHanoi(n-1,A,C,B);
 printf("Move disk from peg %c to peg %c\n",A,B);
 TowerOfHanoi(n-1,C,B,A);
}

void main()
{
 int n;
 char A,B,C;
 clrscr();
 printf("Enter the number of disks:");
 scanf("%d",&n);
 TowerOfHanoi(n,'A','B','C');
 getch();
}




