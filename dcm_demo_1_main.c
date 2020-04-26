/* dcm_demo_1_main.c */

#include "dcm_demo_1.h"
#include <stdlib.h>

int main() {
	miniclass_dsc cls;
	if (!miniclass_factory(&cls, sizeof(cls))) abort();
}
