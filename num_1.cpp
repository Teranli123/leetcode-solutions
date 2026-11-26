#include <iostream> 

int main();

int main() {

int i; //size of array
std::cout << "enter how many integers you want to enter" << std::endl;
std::cin >> i;
int array_num[i] {};
// make sure that k is less than i, k cant equal i, since array starts at indicie 0
for (int k = 0; k < i; k++){
    std::cout << "enter your integer(s)" << std::endl;
    std::cin >> array_num[k];
}
int target {};
std::cout << "enter the target integer" << std::endl;
std::cin >> target;

int number_1{};
int number_2{};

bool found = false;
for (int j = 0; j < i; j++) { //want this to be column counter in the array 
    for (int p = j + 1; p < i; p++) {
    if (array_num[j] + array_num[p] == target) {
        number_1 = array_num[j];
        number_2 = array_num[p];
        found = true;
        std::cout << "your two numbers are " << number_1 << " and " << number_2 << std::endl;
        break;
    }
    }
    if (found){
        break;
    }
}


if (found == false){
    std::cout << "no soln" << std::endl;
}

return 0;
}

