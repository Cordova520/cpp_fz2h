#include <iostream>
#include <vector>
class firstNlast
{
private:
    /* data */
public:

    int getFirst(std::vector<int>& nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start) / 2; //(start+end)/2
            if (nums[mid] == target){
                ans = mid;
                end = mid-1; ///LHS for the first position
                //return mid;
            }else if (nums[mid] < target){
                start = mid  + 1;
            }else{
                end = mid - 1;
            }
            return ans;
        }
    }

    int getLast(std::vector<int>& nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start) / 2; //(start+end)/2
            if (nums[mid] == target){
                ans = mid;
                end = mid+1; ///RHS for the last position
                //return mid;
            }else if (nums[mid] < target){
                start = mid  + 1;
            }else{
                end = mid - 1;
            }
            return ans;
        }
    }

    std::vector<int> searchRange(std::vector<int> & nums, int target){
        std::vector<int> array(2, -1);
        int first = getFirst(nums, target);
        if (first == -1){
            return array;
        }
        int last = getLast(nums, target);

        array[0] = first;
        array[1] = last;

        
    };
    ~firstNlast();
};

firstNlast::firstNlast(/* args */)
{
}

firstNlast::~firstNlast()
{
}
