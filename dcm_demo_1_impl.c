/* dcm_demo_1_impl.c */

#include "dcm_demo_1.h"

int miniclass_factory(miniclass_dsc *dsc, size_t dsc_size) {
	(void)dsc;
	return sizeof *dsc == dsc_size;
}
