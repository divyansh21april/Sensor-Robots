#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
unsigned int a;
void main()
{
while(1)
{
a=P1&0x0c;
if(P1==0x00)
{P2=stop;}
if(P1==0x04)
{P2=lt;}
if(P1==0x08)
{P2=rt;}
if(P1==0x0c)
{P2=st;}
}
}