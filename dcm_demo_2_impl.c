/* dcm_demo_2_impl.c */

#include "dcm_demo_2.h"

int miniclass2_factory(miniclass2_dsc *dsc, size_t dsc_size) {
	(void)dsc;
	return sizeof *dsc == dsc_size;
}
