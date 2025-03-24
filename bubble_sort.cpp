#include <iostream>
#include <vector>
using namespace std;

class bs {
public:
    vector<int> bubble_sort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {  
                    swap(nums[j], nums[j + 1]);  
                }
            }
        }
        return nums;
    }
};

int main() {
    bs ans;
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> sorted = ans.bubble_sort(nums);

    cout << "Sorted vector: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

