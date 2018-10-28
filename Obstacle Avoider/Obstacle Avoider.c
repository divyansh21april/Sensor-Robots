#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define rev 0x05;
#define stop 0x00;
unsigned int a,i,j,b;
void delay(unsigned int t)
{
	for(i=0;i<t;i++);
{ 
	for(j=0;j<1275;j++);
}
}

void main()
{
while(1)
{
a=P1&0x0c;
if(a==0x00)
{
	P2=st;
}
if(a==0x08)
{
	P2=rev;
	delay(1000);
	P2=rt;
	delay(1000);

}
if(a==0x04)
{
	P2=rev;
	delay(1000);
	P2=lt;
	delay(1000);

}
if(a==0x0c)
{
	P2=rev;
	delay(1000);
	P2=rt;
	delay(1000);
}
}
}