#include <iostream> 

// removing duplicates in an already sorted array

int remove_duplicates(int nums[], int cap) {
    int k {1};
    for (int i{1}; i < cap; i++) {
        if (nums[i] != nums[k-1]) {
            nums[k] = nums[i];
            k++;
        }
    }  
    return k;
}


int main();
int main() {
    int cap;
    std::cout << "Enter the capacity of the array: ";
    std::cin >> cap;
    int nums[cap]{};
    for (int i{0}; i < cap; i++) {
        std::cout << " Enter value of array element " << i << ": ";
        std::cin >> nums[i];
    }
    int new_size = remove_duplicates(nums, cap);
    

    std::cout << nums[0] << ", ";
    for (int i{1}; i < new_size; i++) {
        std::cout << nums[i] << ", " ;
    }

    return 0;
}