#include <stdio.h>

typedef enum
{
    mon=2,
    tues=-4,
    wed=0
}week;

week func1()
{
    week e1;
    e1=mon;
    return e1;
}

int main()
{
     int i;
     if(i=(func1())==2)
         printf("its monday\n");
     return 0;    
}
