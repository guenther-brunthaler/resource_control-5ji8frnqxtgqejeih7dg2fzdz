/* dcm_demo_2.h */

#include <stddef.h>

typedef struct {
	struct miniclass2_methods const *m;  /* Unused. */
} miniclass2_dsc;

int miniclass2_factory(miniclass2_dsc *dsc, size_t dsc_size);
