#include "compress.h"
#include <string.h>
#include <stdio.h>


//! Performs very basic string compression (aaaabbb -> a4b3)
//! Assuming a valid string of ASCII characters
// @return True if all characters in the string are unique
void compress(const char *input, char *output) {
  output[0] = '\0';
  for (unsigned i = 0; i < strlen(input); ) {
    int c = 0;
    while (i + c < strlen(input) && input[i] == input[i+c]) {
      c++;
    }
    sprintf(output, "%s%c%d", output, input[i], c); // strcat + atoi might be faster
    i += c;
  }

  if (strlen(input) < strlen(output)) {
    strcpy(output, input);
  }
}
