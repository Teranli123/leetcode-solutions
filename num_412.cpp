// fizz buzz leet code problem 412

#include <iostream> 
#include <cassert>
int main();

int main() {
    int n; 
    std::cout << "enter integer n for size of array: " ;
    std::cin >> n;
    assert(n > 0 && "n must be > 0!!!");
    std::string arr[n]{};
    for (int i{0}; i < n; i++) {
        arr[i] = std::to_string(i+1);
        if (i >= 4){
            if ((i+1)%3 == 0 && (i+1)%5 == 0) {
                arr[i] = "FizzBuzz";
            } else if ((i+1)%3 == 0) {
                arr[i] = "Fizz";
            } else if ((i+1)%5 == 0) {
                arr[i] = "Buzz";
            }else {
                continue;
            }
        }
    }
    std::cout << "[";
    std::cout << arr[0];
    for (int i{1}; i < n; i++) {
        std::cout << ", " << arr[i];
    }
    std::cout << "]";
    return 0;
}