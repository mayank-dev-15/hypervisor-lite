#include "core.h"
#include <stdio.h>
#include <string.h>
static int ready = 0;
void hypervisor_lite_init(void){ ready=1; printf("hypervisor-lite init\n"); }
void hypervisor_lite_shutdown(void){ ready=0; }
int hypervisor_lite_process(const void *d, size_t l){ if(!ready)return -1; printf("Processing %zu bytes\n",l); return 0; }
