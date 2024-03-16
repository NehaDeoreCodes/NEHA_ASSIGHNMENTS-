/*1.Write a program scan one number and update that number  with orignal value plus half value of orignal value
(use single variable) logic: a=100 a=150;*/
#include<stdio.h>
 int main()
 {
 	int a=100;
 	a=a+a/2;
 	printf("new value %d\n",a);
 	return 0;
 }
 
 //output:
 //new value 150
