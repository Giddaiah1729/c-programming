#include <REGX51.H>
sbit sw = P3^0;
void delay();
void main()
{
	int i;
	sw=1;
	while(1)
	{
		if(sw==0)
		{
	char a[10]={0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
	P2=0x00;
		for(i=0;i<10;i++)
		{
		P2=a[i];		
		delay();
	}
}
}
}
void delay()
{
	int i;
	for(i=0;i<30000;i++);
	//for(j=0;j<5000;j++);
}