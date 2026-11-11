//Given an array of integers nums, sort the array in ascending order and return it.
//you must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

//okay so solution was actually pretty straightforward and the helper functions were very usefull. I do not know how to get it 
//in O(nlog(n)) time complexity, but it is okay because ECE150 does not require significant optimization in code. 
//while i cant submit on leetcode, im still commiting this to leetcode solns repo

#include <iostream> 
#include <cassert> 



//helper function to check if array is sorted or not, will be at the very end of the main function
std::size_t is_sorted(int const array[], std::size_t const capacity) {
    for (std::size_t i{0}; i < (capacity - 1); i++) {
        if (array[i] > array[i+1]) {
            return i + 1;
        }
    }
    return capacity;
}


//helper function to find the maximum value in an array
std::size_t find_max(int array[], std::size_t capacity) {
    int max_val{array[0]};
    std::size_t max_index_track{0};
    for (std::size_t k{1}; k < capacity; k++) {
        if (array[k] > max_val) {
            max_val = array[k];
            max_index_track = k;
        }
    }
    return max_index_track;
}

//helper function to swap two indexes of an array
void swap (int &first, int &second) {
    int temp{first};
    first = second;
    second = temp;
}


void sort_array(int array[], std::size_t capacity) {
    for (std::size_t j{capacity - 1}; j > 0; j--) {
        std::size_t max_index{find_max(array, j + 1)};
        swap(array[j], array[max_index]);
    }
}


int main() {
    std::size_t capacity{10};
    int array[capacity]{10,3,4,7,6,12,4,3,2,1};
    sort_array(array, capacity);
    assert(is_sorted(array, capacity) == capacity);

    std::cout << array[0];
    for (std::size_t p{1}; p < capacity; p++) {
        std::cout << ", " << array[p];
    }
    return 0;
}