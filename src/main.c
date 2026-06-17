#include "core.h"
#include <stdio.h>
int main(){
printf("hypervisor-lite v1.0.0\n");
printf("Type-2 hypervisor with Intel VT-x for lightweight VM introspection and sandboxing\n");
hypervisor_lite_init();
hypervisor_lite_process(NULL,0);
hypervisor_lite_shutdown();
return 0;
}
