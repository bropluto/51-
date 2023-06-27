#include <REGX52.H>
#include <INTRINS.H>

void Delay1000ms()		//@12.000MHz
{
	unsigned char data i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
		while(1)
		{
			P2=0xfe;//ÁÁ
			Delay1000ms();
			P2=0xff;//Ãð 
			Delay1000ms();
		}
}