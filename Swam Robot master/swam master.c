#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define fwd 0x0a;
#define bck 0x05;
#define stp 0x00;
unsigned int a;
void main()
{
	while(1)
	{
		a=P0&0x0f;
		if(a==0x02)
		{
			P2=fwd;
			P3=P2;
		}
		if(a==0x04)
		{
			P2=lt;
			P1=P2;
		}
		if(a==0x06)
		{
			P2=rt;
			P3=P2;
		}
		if(a==0x08)
		{
			P2=bck;
			P3=P2;
		}
		if(a==0x05)
		{
			P2=stp;
			P3=P2;
		}
	}
}