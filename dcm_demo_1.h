/* dcm_demo_1.h */
#include <stddef.h>

typedef char miniclass_dsc; /* Unused, and 'char' wastes least space. */

int miniclass_factory(miniclass_dsc *dsc, size_t dsc_size);
