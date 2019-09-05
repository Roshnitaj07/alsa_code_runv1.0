
#include "CML_types.h"
CML_VOID *timer_display(CML_VOID *argc)
{
	CML_INT32 duration =(CML_INT32) swavheaderinfo.overall_size / swavheaderinfo.byterate;
	while(ssetcurstate.icurstate == PLAY_STATE  && seconds <= duration)
	{
		seconds++;
		fprintf(stderr,"\rCurrent Playback Time :%d ",seconds);
		sleep(1);
	}
}