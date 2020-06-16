#pragma once

/**
 * Allows all inputs to be capped at certain values
 * @param value The value that needs to be capped
 * @param min The minimum value it can be
 * @param max The maximum value it can be
 * @return Returns the capped value
 */
template<typename T>
T normalize(T value, T min, T max)
{
    if(value > max)
        return max;
    else if(value < min)
        return min;
    else
        return value;
}

/**
 * Overload of normalize(value, min, max)
 * Deadband is designed with controllers in mind
 * @param value The value that needs to be capped
 * @param min The minimum value it can be
 * @param max The maximum value it can be
 * @param zone if |value| < zone its zero
 * @return The capped/deadbanded value
 */
template<typename T>
T normalize(T value, T min, T max, T zone)
{
    if(value < zone && value > -zone)
        value = 0;

    return normalize(value, min, max);
}