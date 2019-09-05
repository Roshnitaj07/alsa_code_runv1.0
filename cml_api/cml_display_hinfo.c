#include "CML_types.h"
#include "CML_fheader.c"
#include<stdio.h>
int main(int argc,char*argv[])
{
    printf("Overall Size=%u\n",swavheaderinfo.isize);
	printf("c hannels=%u\n", swavheaderinfo.uwchannel);
	printf("SampleRate=%u\n",swavheaderinfo.isamplerate); 
	printf("byterate=%u\n",swavheaderinfo.ibyterate);
	printf("time=%d\n",swavheaderinfo.iduration);
    cml_playbacktime(argc);
}