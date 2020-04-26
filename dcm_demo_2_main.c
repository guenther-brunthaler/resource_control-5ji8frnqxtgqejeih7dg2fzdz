/* dcm_demo_2_main.c */

#include "dcm_demo_2.h"
#include <stdlib.h>

int main() {
	miniclass2_dsc cls;
	if (!miniclass2_factory(&cls, sizeof(cls))) abort();
}
