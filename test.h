/** @file */

#ifndef TEST_H
#define TEST_H

/**
 * @brief Computes the minimum of two values.
 * 
 * This function template compares two values of the same type and returns the smaller of the two.
 * 
 * @tparam T The type of the values being compared. Must support the `<` operator.
 * @param a The first value to compare.
 * @param b The second value to compare.
 * @return The smaller of the two values, `a` or `b`.
 */
template <typename T>
T min(const T& a, const T& b);

/**
 * @brief Computes the maximum of two values.
 * 
 * This function template compares two values of the same type and returns the larger of the two.
 * 
 * @tparam T The type of the values being compared. Must support the `>` operator.
 * @param a The first value to compare.
 * @param b The second value to compare.
 * @return The larger of the two values, `a` or `b`.
 */
template <typename T>
T max(const T& a, const T& b);

#endif // TEST_H