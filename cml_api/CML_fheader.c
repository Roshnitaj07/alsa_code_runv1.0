#include<stdio.h>
#include "cml_types.h"

int main(int argc,char *argv[])
{

	 printf("Unable to read header data\n");
    swavheaderinfo.isize=(*(CML_UINT32 *)(cheader+4));
	printf("Overall Size=%u\n",swavheaderinfo.isize);
			   /*no of channels*/
	swavheaderinfo.uwchannel=(*(CML_UINT32 *)(cheader+22));
	printf("channels=%u\n", swavheaderinfo.uwchannel);
			  /*Sample Rate*/
	swavheaderinfo.isamplerate=(*(CML_UINT32 *)(cheader+24));
	printf("SampleRate=%u\n",swavheaderinfo.isamplerate); 
			    /*BYTE RATE*/
	swavheaderinfo.ibyterate=(*(CML_UINT32 *)(cheader+28));
	printf("byterate=%u\n",swavheaderinfo.ibyterate);
			     /*Time*/
	swavheaderinfo.iduaration= (int)(swavheaderinfo.isize)/(swavheaderinfo.ibyterate);
	printf("time=%d\n",swavheaderinfo.iduaration);
    return 0;
    


}