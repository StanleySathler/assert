#ifndef __ASSERT_H__
#define __ASSERT_H__

  #define RED_TEXT      "\033[0;31m"
  #define GREEN_TEXT    "\033[0;32m"
  #define DEFAULT_TEXT  "\033[0m"

  /**
   * @brief Assert two ints.
   */
  void
  assert_int(const int expected, const int actual, const char* message);

  /**
   * @brief Assert two doubles.
   */
  void
  assert_double(const double expected, const double actual, const char* message);

  /**
   * @brief Assert two chars.
   */
  void
  assert_char(const char expected, const char actual, const char* message);

  /**
   * @brief Assert two strings.
   */
  void
  assert_string(const char* expected, const char* actual, const char* message);

#endif /* __ASSERT_H__ */
