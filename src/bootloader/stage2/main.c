#include "stdint.h"
#include "stdio.h"

void _cdecl cstart_(uint16_t bootDrive){
    printf("Hello from a C file!");
    for(;;);
}
