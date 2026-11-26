#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
}
}

bool palindrome(int arr[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != arr2[i]) {
        return false;
        } 
    }
    return true;
}
int main ();

int main () {

int x {};
bool valid_x = false;

while (!valid_x) {
    std::cout << "enter integer to test" << std::endl;
    std::cin >> x;
    if (x < 0) {
        valid_x = false;
    }
    else if(x%1 == 0) {
        valid_x = true;
    }else {
    valid_x = false;
    }
}


int digits {};
int first_temp_x {};
first_temp_x = x;
if (x < 10) {
    digits = digits + 1;
}
while (x >=10) {
    first_temp_x = first_temp_x/10; 
    digits = digits + 1;
    if (first_temp_x < 10) {
        digits = digits + 1;
        break;
    }
}
//std::cout << x << std::endl;

//std::cout << "the number of digits in int is " << digits << std::endl; // I have determined how many digits there are within a number now

int digit_sequence [digits] {}; //array that will hold the entire number 

int temp_x {};
temp_x = x;

for (int i = digits - 1; i >= 0; i--) {
    int place {};
    place = temp_x%10;
    digit_sequence[i] = place;
    temp_x = (temp_x - place)/10;
    place = 0;
    }




// Loop using an index tracker (i)
//printArray(digit_sequence, digits);
//std::cout << std::endl;

bool palidrome_check = false; 

int opposite_array[digits]{};

for (int i = 0; i < digits; i++) {
    opposite_array[i] = digit_sequence[(digits - 1) - i];
}


// output my array 

//printArray(opposite_array, digits);

bool y = palindrome(digit_sequence, opposite_array, digits);

while (y) {
    std::cout << "your number " << x << " is a palindrome!!!!!" << std::endl;
    return 0;
}
std::cout << "your number " << x << " is not a palindrome !!" << std::endl;
return 0;

}

 //   while (i < digits - 1) {
   //     digit_sequence[i] = (temp_x - place)/10;
     //   break;
    //    if (x < 10) {
    //    break;
    //    }
