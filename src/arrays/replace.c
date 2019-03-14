#include "replace.h"
#include <string.h>

//! Replace all spaces with %20 in place
//! Assuming a valid string of ASCII characters
//! Assuming the buffer has enough space
void urlize1(char *string) {
  for (unsigned i = 0; i < strlen(string) && i < 10; i++) {
    if (string[i] == ' ') {
      memmove(string + i + 3, string + i + 1, strlen(string) - i);
      memcpy(string + i, "%20", 3);
    }
  }
}

//! Replace all spaces with %20 in another buffer
//! Assuming a valid string of ASCII characters
//! Assuming the buffer has enough space
void urlize2(const char *input, char *output) {
  for (unsigned i = 0, j = 0; i < strlen(input); i++) {
    if (input[i] == ' ') {
      memcpy(output+j, "%20", 3);
      j += 3;
    } else {
      output[j] = input[i];
      j++;
    }
  }
}
