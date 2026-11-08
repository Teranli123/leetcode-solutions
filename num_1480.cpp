#include <iostream>
#include <cassert> 

int* runningSum(int nums[], int length){
    assert (length >= 1 && length <= 1000);
    int *p_arr{new int[length]};
    int sum_track{nums[0]};
    p_arr[0] = sum_track;
    for (int i{1}; i < length; i++) {
        assert (nums[i] >= -10e6 && nums[i] <= 10e6);
        p_arr[i] = nums[i] + sum_track;
        sum_track = p_arr[i];
    }
    return p_arr;
}

int main();

int main() {
    int length{10};
    int nums[length]{1,2,3,4,5,6,7,8,9,10};
    int *result{runningSum(nums, length)}; //*result initialized with same address as p_arr from earlier function
    runningSum(nums, length);
    std::cout << result[0];
    for (int k{1}; k < length; k++) {
        std::cout << ", " << result[k];
    }
    delete[] result;  // since p_arr and result hold the same address, deleting the address of 
    result = nullptr; //result is enough to deallocate  both pointers memory and set it to null
    return 0;
}
