#include "next_largest.h"


//! Returns the next largest number with the same number of 1s in their binary representation
int next_largest(int num) {
  if (num == 0) {
    return 0;
  }

  // Find the first 1
  int i = 0;
  while (!(num & (1 << i))) {
    i++;
  }

  // Find the end of the string of 1s
  while ((num & (1 << i))) {
    i++;
  }

  // Set the bit and clear the last bit
  return (num | (1 << i)) & ~(1 << (i - 1));
}
