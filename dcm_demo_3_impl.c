/* dcm_demo_3_impl.c */

#include "dcm_demo_3.h"

static int microclass_method_answer(void) {
	return 42;
}

int microclass_factory(microclass_dsc *dsc, size_t dsc_size) {
	static struct microclass_methods const vtable= {
		&microclass_method_answer
	};
	if (sizeof *dsc != dsc_size) return 0;
	dsc->m= &vtable;
	return 1;
}
