/* dcm_demo_3.h */

#include <stddef.h>

struct microclass_methods {
	int (*answer)(void);
};

typedef struct {
	struct microclass_methods const *m;
} microclass_dsc;

int microclass_factory(microclass_dsc *dsc, size_t dsc_size);
