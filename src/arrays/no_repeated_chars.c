#include "no_repeated_chars.h"
#include <stdbool.h>
#include <string.h>

//! No additional data structures used so O(n^2). Fine for most practical use cases
//! Assuming a valid string of ASCII characters
// @return True if all characters in the string are unique
bool no_repeated_chars1(const char *string) {
  for (unsigned i = 0; i < strlen(string); i++) {
    for (unsigned j = i + 1; j < strlen(string); j++) {
      if (string[i] == string[j]) {
        return false;
      }
    }
  }
  return true;
}

//! Additional data structures used so O(n), but higher memory consumption
//! Assuming a valid string of ASCII characters
// @return True if all characters in the string are unique
bool no_repeated_chars2(const char *string) {
  bool used_chars[128] = {0}; // Could use a bitfield here if memory is really tight

  for (unsigned i = 0; i < strlen(string); i++) {
    if (used_chars[(unsigned)string[i]]) {
      return false;
    }
    used_chars[(unsigned)string[i]] = true;
  }
  return true;
}


