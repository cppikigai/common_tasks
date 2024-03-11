#include <iostream>
#include <cstdint>

// Bitwise operators

// & “AND” is 1 only if both bits are 1
// 100 ('4') vs 001 ('1') - compare starts from first 1
constexpr bool is_even_number(int32_t number)
{
    return (number & 1) == 0;
}

// 100 ('4') vs 011 ('3') - in numbers which is 2^N only one number is 1
// in numbers-1 all nums is inverted it help us check power of two
constexpr bool is_power_of_two(int32_t number)
{
    return number > 0 && (number & (number - 1)) == 0;
}

// assertions for is_even_number
static_assert(is_even_number(2),   "2 should be even");
static_assert(is_even_number(0),   "0 should be even");
static_assert(!is_even_number(3),  "3 should be odd");
static_assert(!is_even_number(-1), "-1 should be odd");

// assertions for is_power_of_two
static_assert(is_power_of_two(2),   "2 is power of two");
static_assert(is_power_of_two(64),  "64 is power of two");
static_assert(!is_power_of_two(0),  "0 is not power of two");
static_assert(!is_power_of_two(99), "99 is not power of two");

int main() {}