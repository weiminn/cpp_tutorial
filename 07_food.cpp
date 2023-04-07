#include "07_food.h"

// initialization/body of the function
const char* recommendMeAFood(char firstLetter){
    if (firstLetter == 'a' || firstLetter == 'A') {
        return "Apple";
    } else if (firstLetter == 'b' || firstLetter == 'B') {
        return "Banana";
    } else if (firstLetter == 'c' || firstLetter == 'C') {
        return "Cheese";
    } else {
        return "Pizza";
    }
}