/* $begin show-bytes */
#include <stdint.h>
#include <stdio.h>
/* $end show-bytes */
#include <stdlib.h>
#include <string.h>
/* $begin show-bytes */

typedef unsigned char *byte_pointer;

int32_t div16(int32_t input) {
  // 判断正负
  int32_t bias = 0xF & (input >> 31);
  return (input + bias) >> 4;
}
int main() {
  printf("%d\n", div16(32));
  return 0;
}