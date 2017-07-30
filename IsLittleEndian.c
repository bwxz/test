#include "stdio.h"
unsigned int is_LitteleEndian()
{
	unsigned long datamagic[]={0x11223300};
	if(strlen(datamagic)==0)
	{
		printf("LittleEndian\n");
		return 1;
	}else
	{
		printf("BigEndian\n");
		return 0;
	}
}

int main()
{
	is_LitteleEndian();_
}
