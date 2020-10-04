#include <assert.h>
#include <stdint.h>
#define MASK 0x40
#define AAA 3
#define BBB 6

uint8_t hexchar2val(uint8_t in)
{
    const uint8_t letter = in & MASK;
    const uint8_t shift = (letter >> AAA) | (letter >> BBB);
    return (in + shift) & 0xf;
}

int main(void) {
  assert(hexchar2val(1) == 1);
  assert(hexchar2val('B') == 11);
  assert(hexchar2val('d') == 13);
}
