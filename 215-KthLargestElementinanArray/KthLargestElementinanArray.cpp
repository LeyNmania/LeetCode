/* Fast Sort with partition function created on my own
Runtime: 84 ms, faster than 8.48% of C++ online submissions for Kth Largest Element in an Array.
Memory Usage: 9.2 MB, less than 60.09% of C++ online submissions for Kth Largest Element in an Array.
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0, right = nums.size()-1, kth;
        while (true) 
        {
            int idx = partition(nums, left, right);
            if (idx == k - 1) {
                kth = nums[idx];
                break;
            }
            if (idx < k - 1) {
                left = idx + 1;
            } else {
                right = idx - 1;
            }
        }
        return kth;
    }
private:
    int partition(vector<int>& nums, int left, int right)
    {
        int pivot = nums[left] , l = left + 1, r = right;
        while(l <= r)
        {
            if(nums[l]<pivot && nums[r]>pivot)
                swap(nums[l++],nums[r--]);
            if(nums[l]>=pivot)
                l++;
            if(nums[r]<=pivot)
                r--;
        }
        swap(nums[left], nums[r]);
        return r;
    }
};

/* Heap sort
Runtime: 12 ms, faster than 87.41% of C++ online submissions for Kth Largest Element in an Array.
Memory Usage: 9.1 MB, less than 84.44% of C++ online submissions for Kth Largest Element in an Array.
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        buildMaxHeap(nums);
        for (int i = 0; i < k - 1; i++) {
            swap(nums[0], nums[--heapSize]);
            maxHeapify(nums, 0);
        }
        return nums[0];
    }
private:
    int heapSize;
    
    int left(int i) {
        return (i << 1) + 1;
    }
    
    int right(int i) {
        return (i << 1) + 2;
    }
    
    void maxHeapify(vector<int>& nums, int i) {
        int largest = i, l = left(i), r = right(i);
        if (l < heapSize && nums[l] > nums[largest]) {
            largest = l;
        }
        if (r < heapSize && nums[r] > nums[largest]) {
            largest = r;
        }
        if (largest != i) {
            swap(nums[i], nums[largest]);
            maxHeapify(nums, largest);
        }
    }
    
    void buildMaxHeap(vector<int>& nums) {
        heapSize = nums.size();
        for (int i = (heapSize >> 1) - 1; i >= 0; i--) {
            maxHeapify(nums, i);
        }
    }
};
