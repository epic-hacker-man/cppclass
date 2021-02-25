#include "hw03.h"

// Pre-conditions: in is not NaN, nor infinity/-infinity
// Post-conditions: none
// Returns: returns the absolute value of value in
//          1 -> 1
//          -1 -> 1
//          -5.51 -> 5.51
//          100 -> 100
double cppclass_abs(double in)
{
    double product = 0;
    if (in < 0)
    {
        product = in * -1;
    }
    else 
    {
        product = in;
    }
    return product;
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whichever of the inputs is larger
int max_of_two_items(int a, int b)
{

    if ( a > b)
    {
        return a;
    }
    else 
    {
       return b;
    } 
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whichever of the inputs is smaller
int min_of_two_items(int a, int b)
{
    if ( a < b)
    {
        return a;
    }
    else 
    {
       return b;
    } 
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whichever of the inputs is largest
int max_of_three_items(int a, int b, int c)
{
    double comp = 0;
    if ( a > b)
    {
       comp = a;
    }
    else 
    {
        comp = b;
    }
    if (comp > c)
    {
        return comp;
    }
    else
    {
       return c;
    }
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whether the year entered is a leap year
//          A year is a leap year if it satisfies:
//              a) the year is divisible by 4
//              b) but not divisible by 100
//              c) unless it is divisible by 400
bool is_leap_year(unsigned int year)
{
    if (0 == year % 4)
    {
        if (0 != year % 100)
        {
                return true;     
        }
        else
        {
         if (0 == year % 400)
         {
             return true;

         }
         else 
         {
             return false;
         }
        }
    }
    else
    {
        return false;
    }
}

// Pre-conditions: op is one of ['+', '-', '*', '/', '%']
//                 if op is '/' or '%', b is non-zero
// Post-conditions: none
// Returns: returns the value of: a op b
int simple_calc(int a, int b, char op)
{
    if (op == '+')
    {
        return a + b;
    }
    if (op == '-')
    {
        return a - b;
    }
    if (op == '*')
    {
        return a * b;
    }
    if (op == '/')
    {
        return a / b;
    }
    if (op == '%')
    {
        return a % b;
    }
}
