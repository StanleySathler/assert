#include <stdio.h>
#include <string.h>
#include "assert.h"

/**
 * @brief Assert two ints.
 */
void
assert_int(const int expected, const int actual, const char* message)
{
  if (expected != actual)
  {
    printf(RED_TEXT);
    printf("[FAIL] %s \n", message);
    printf("* Expected: int %d \n", expected);
    printf("* Actual: char %d \n", actual);
    printf(DEFAULT_TEXT);
  }
  else
  {
    printf(GREEN_TEXT);
    printf("[SUCCESS] %s \n", message);
    printf(DEFAULT_TEXT);
  }
}

/**
 * @brief Assert two chars.
 */
void
assert_char(const char expected, const char actual, const char* message)
{
  if (expected != actual)
  {
    printf(RED_TEXT);
    printf("[FAIL] %s \n", message);
    printf("* Expected: char '%c' \n", expected);
    printf("* Actual: char '%c' \n", actual);
    printf(DEFAULT_TEXT);
  }
  else
  {
    printf(GREEN_TEXT);
    printf("[SUCCESS] %s \n", message);
    printf(DEFAULT_TEXT);
  }
}

/**
 * @brief Assert two strings.
 */
void
assert_string(const char* expected, const char* actual, const char* message)
{
  if (strcmp(expected, actual) != 0)
  {
    printf(RED_TEXT);
    printf("[FAIL] %s \n", message);
    printf("* Expected: char* \"%s\" \n", expected);
    printf("* Actual: char* \"%s\" \n", actual);
    printf(DEFAULT_TEXT);
  }
  else
  {
    printf(GREEN_TEXT);
    printf("[SUCCESS] %s \n", message);
    printf(DEFAULT_TEXT);
  }
}
