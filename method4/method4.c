
#include <stdio.h>

extern void init_lib_init(void);
extern void libmine_init(void);

void
init_lib_init(void)
{
    libmine_init();
}
