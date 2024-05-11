#include <REGX51.H>
void main()
{
	
	int i;
	while(1)
	{
	P2=0x3F;
	for(i=0;i<32000;i++);
	P2=0x06;
	for(i=0;i<32000;i++);
	P2=0x5B;
	for(i=0;i<32000;i++);
	P2=0x4F;
	for(i=0;i<32000;i++);
	P2=0x66;
	for(i=0;i<32000;i++);
	P2=0x66;
	for(i=0;i<32000;i++);
	P2=0x6D;
	for(i=0;i<32000;i++);
	P2=0x7D;
	for(i=0;i<32000;i++);
	P2=0x07;
	for(i=0;i<32000;i++);
	P2=0xFF;
	for(i=0;i<32000;i++);
	P2=0x6F;
	for(i=0;i<32000;i++);
}
	}
	
	