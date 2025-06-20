#include "prng_f_64.h"

void prng_f_64(struct prng_f_64_s *s) {
  uint64_t blocks_capture[4] = {
    s->blocks[s->a & 15],
    s->blocks[s->b & 15],
    s->blocks[s->c & 15],
    s->blocks[s->d & 15]
  };
  uint8_t i = 0;
  uint8_t j;
  uint8_t k = 0;

  s->a += 1111111111111ULL;
  s->b += s->a;
  s->c -= 1111111111111ULL;
  s->d -= s->c;

  while (i < 4) {
    s->e += s->b;
    s->f ^= s->d;
    blocks_capture[i] += (s->e << 19) | (s->e >> 45);
    j = 0;

    while (j < 4) {
      s->blocks[k] += (blocks_capture[i] << 51) | (blocks_capture[i] >> 13);
      s->blocks[k] ^= s->f;
      blocks_capture[i] += s->blocks[k];
      j++;
      k++;
    }

    i++;
  }
}
