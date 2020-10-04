#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#define MASK 0x40
#define AAA 3
#define BBB 6

void hexstr2val(uint8_t *in, int length) {
  for (int i = 2; i < length; i++) {
    const uint8_t letter = in[i] & MASK;
    const uint8_t shift = (letter >> AAA) | (letter >> BBB);
    printf("%d", (int)((in[i] + shift) & 0xf));
    if (i != length - 1)
      printf(" ");
  }
  printf("\n");
}

int main(void) {
  hexstr2val("0xFF", 4);
  hexstr2val("0xCAFEBABE", 10);
}
