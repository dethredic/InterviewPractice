#include "reverse.h"
#include <string.h>

//! Reverse a string in place
//! Assuming a valid string of ASCII characters
void reverse1(char *string) {
  for (int i = 0, j = strlen(string) - 1; i < j; i++, j--) {
    char tmp = string[i];
    string[i] = string[j];
    string[j] = tmp;
  }
}

//! Reverse a string into another buffer
//! Assuming a valid string of ASCII characters, and the buffer is large enough
void reverse2(const char *input, char *output) {
  int len = strlen(input) - 1;
  for (int i = 0; i < len; i++) {
    output[i] = input[len - i];
  }
  output[len + 1] = '\0';
}
