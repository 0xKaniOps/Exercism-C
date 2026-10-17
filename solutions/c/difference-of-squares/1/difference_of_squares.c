#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    number = number * (number + 1) * (2 * number + 1) / 6;
        return number;
}

unsigned int square_of_sum(unsigned int number){
    number = number * (number + 1) / 2;
        return number * number;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) -  sum_of_squares(number);
}