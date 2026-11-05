#include <iostream> 
#include <cassert> 

//given two arrays num1 & num2 which are already sorted in non-decreasing order, the final 
//array has length of m+n, and num1 and num2 are sorted into the final array based on non-
//decreasing order. After the sorting, since the function is void, the results are copied into 
//nums1.

//note to self, this function is highkey broken, since the capacity of nums1 is just m, and in
//the final for loop in merge_sorted_array i start putting all the new array values back into nums1,
//since they have different sizes it should NOT work. I think im just getting lucky with the memory..?
//since its just the first thing that the computer finds in memory? 

//still good practice with pointers and some logic operators....

void merge_sorted_array(int nums1[], int nums2[], int m, int n) {
    assert (m >= 0);
    assert (n <= 200);
    int nums1_length{m+n};
    assert (nums1_length >= 1 && nums1_length <= 200);
    int *p_merged_array{new int[m+n]{}};
   int count_1{0};
   int count_2{0};
   for (int i{0}; i < nums1_length; i++) {
        if ((count_2 == n) || (count_1 < m && (nums1[count_1] <= nums2[count_2]))) {
            p_merged_array[i] = nums1[count_1];
            count_1++;
        }else {
            p_merged_array[i] = nums2[count_2];
            count_2++;
        }
    }
    for (int k{0}; k < nums1_length; k++) {
        nums1[k] = p_merged_array[k];
    }
    delete[] p_merged_array;
    p_merged_array = nullptr;
}

int main();
int main() {
    int m{3};
    int n{3};
    int nums1[m]{1,2,3};
    int nums2[n]{4,5,6};
    merge_sorted_array(nums1, nums2, m, n);
    for ( int i{}; i < (m+n); i++) {
        std::cout << nums1[i] << ", ";
    }
    return 0;
}