#include <iostream> 
#include <cassert> 
#include <climits> 

//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


signed int reverse(signed int x) {
    signed int temp_x {x};
    signed long long reversed{};
    

    while (temp_x >= 1 || temp_x <= -1){
        if (reversed >= INT_MAX || reversed <= INT_MIN) { //if the reversal causes an overflow, the compiler will still return some garbage, so this is to ensure 
            return 0;                                     // that overflow will not be reached, used <climits> library for this, int_max and int_min
        }else{
            if (temp_x >= 10 || temp_x <= -10) {
                reversed = (reversed + temp_x%10)*10;
                temp_x = temp_x/10;
            }else {
                reversed = reversed + temp_x%10;
                temp_x = temp_x/10;
            }
        }
    }
    return reversed;
}

//test function, it works!
/*
    int main();


    int main() {
        signed int x{};
        std::cout << "Enter integer" << std::endl;
        std::cin >> x;
        std::cout << reverse(x) << std::endl;
        return 0;
    }
*/