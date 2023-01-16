#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
* File: 3-function_like_macro.h
* @x: input integer number
* Description: macro  returns the absolute value of number x
* Author: mgemoraw
*
* #define ABS(x) ((x) < 0 ? (-1 * x) : (x))
*/
#define ABS(x) (x < 0 ? 0 - x : x)
#endif
