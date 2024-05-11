#include <REGX51.H>
sbit r0=P1^0;
sbit r1=P1^1;
sbit r2=P1^2;
sbit r3=P1^3;
sbit c0=P1^4;
sbit c1=P1^5;
sbit c2=P1^6;
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
sfr lcd=0xB0;
void cmd(char );
void lcd_data(char );
void delay();

void main()
{
	cmd(0x38);
	delay();
	cmd(0x01);
	delay();
	cmd(0x0c);
	delay();
	cmd(0x06);
	delay();
	cmd(0x80);
	delay();
while(1)
{
r0=0;
if(c0==0)
{
	lcd_data('1');
	delay();delay();delay();delay();delay();
}
if(c1==0)
{
	lcd_data('2');
	delay();
}
if(c2==0)
{
	lcd_data('3');
	delay();
}

r0=1,r1=0;
if(c0==0)
{
	lcd_data('4');
	delay();
}
if(c1==0)
{
	lcd_data('5');
	delay();
}

if(c2==0)
{
	lcd_data('6');
	delay();
}

r1=1,r2=0;
if(c0==0)
{
	lcd_data('7');
	delay();
}

if(c1==0)
{
	lcd_data('8');
	delay();
}

if(c2==0)
{
	lcd_data('9');
	delay();
}

r2=1,r3=0;
if(c0==0)
{
	lcd_data('*');
	delay();
}

if(c1==0)
{
	lcd_data('0');
	delay();
}

if(c2==0)
{
	lcd_data('#');
	delay();
}
r3=1;

}
}
void cmd(char x)
{
	P3=x;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;
}
void lcd_data(char y)
{
	P3=y;
	rs=1;
	rw=0;
	en=1;
	delay();
	en=0;
}
void delay()
{
	int i,j;
	for(i=0;i<10000;i++);
	for(j=0;j<10000;j++);
}

	
	
	
	
