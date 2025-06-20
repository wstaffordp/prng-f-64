# PRNG F 64

It's an extremely-fast, statistically-strong PRNG with 64-bit integers and a minimum period of 2¹⁰²⁴.

`prng_f_64()` is the randomization function that generates 16 64-bit, pseudorandom, unsigned integers.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It's in the same class as SIMD-enhanced SHISHUA.

It has a minimum period of 2¹⁰²⁴ without broken cycles.

It has an approximated maximum period of 2¹¹⁵⁴, although no cycle is guaranteed to reach a full period of 2¹¹⁵⁴.

Incrementing either `a` or `c` by `1` behaves as an interdimensional jump function that starts a different cycle with a minimum period of 2¹⁰²⁴.

Zeroland escapes immediately after generating 1 subsequent number.

It's the fastest 64-bit PRNG that generates numbers in segments of 16 64-bit integers, has a period of at least 2¹⁰²⁴ and passes statistical tests in `stdin64` PractRand with TBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
