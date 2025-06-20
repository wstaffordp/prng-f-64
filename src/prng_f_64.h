#ifndef PRNG_F_64_H
#define PRNG_F_64_H

#include <stdint.h>

struct prng_f_64_s {
  uint64_t blocks[16];
  uint64_t a;
  uint64_t b;
  uint64_t c;
  uint64_t d;
  uint64_t e;
  uint64_t f;
};

void prng_f_64(struct prng_f_64_s *s);

#endif
