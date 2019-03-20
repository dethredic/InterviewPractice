#pragma once

#include <string.h>

//! Replace all spaces with %20 in place
//! Assuming a valid string of ASCII characters
//! Assuming the buffer has enough space
void urlize1(char *string);

//! Replace all spaces with %20 in another buffer
//! Assuming a valid string of ASCII characters
//! Assuming the buffer has enough space
void urlize2(const char *input, char *output);
