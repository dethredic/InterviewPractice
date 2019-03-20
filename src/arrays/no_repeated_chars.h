#pragma once

#include <stdbool.h>

//! No additional data structures used so O(n^2). Fine for most practical use cases
//! Assuming a valid string of ASCII characters
// @return True if all characters in the string are unique
bool no_repeated_chars1(const char *string);

//! Additional data structures used so O(n), but higher memory consumption
//! Assuming a valid string of ASCII characters
// @return True if all characters in the string are unique
bool no_repeated_chars2(const char *string);
