/* dcm_demo_3_main.c */

#include "dcm_demo_3.h"
#include <stdlib.h>

int main() {
	microclass_dsc cls;
	static const int expected= 42;
	int returned;
	if (!microclass_factory(&cls, sizeof cls)) abort();
	returned= (*cls.m->answer)();
	if (returned != expected) abort();
}
