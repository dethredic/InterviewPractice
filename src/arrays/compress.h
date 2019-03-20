#pragma once

//! Performs very basic string compression (aaaabbb -> a4b3)
//! Assuming a valid string of ASCII characters
// @return True if all characters in the string are unique
void compress(const char *input, char *output);
