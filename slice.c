#include <stdlib.h>
#include <string.h>
#include "slice.h"

void slice2view_c0(slice_view *dst, slice const *src) {
   dst->start= src->start;
   dst->length= src->length;
}

/* Allows a slice to be downgraded inplace into a slice_view. */
union slice {
   slice rw; /* Writable buffer. */
   slice_view ro; /* Read-only portion. */
};

static void use_mut(slice *s) {
   ++*s->start;
}

static void use_const(slice_view const *s) {
   if (*s->start == 99) abort();
}

int main() {
   static char str[]= "Hallali!";
   slice s;
   s.start= str;
   s.length= strlen(str);
   s.capacity= 0;
   use_mut(&s);
   {
      slice_view v;
      slice2view_c0(&v, &s);
      use_const(&v);
   }
}
