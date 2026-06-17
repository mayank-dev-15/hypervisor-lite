#ifndef HYPERVISOR_LITE_H
#define HYPERVISOR_LITE_H
#include <stdint.h>
void hypervisor_lite_init(void);
void hypervisor_lite_shutdown(void);
int hypervisor_lite_process(const void *data, size_t len);
#endif
