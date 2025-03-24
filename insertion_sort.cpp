#include <iostream>
#include <vector>
using namespace std;


class insertion{
public:
    vector<int> insertion_sort(vector<int>&nums){
        int n = nums.size();
        for(int i = 0;i<=n-1;i++){
            int j = i;
            while(j>0 && nums[j-1]>nums[j] ){
                int temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j]  = temp;
                j--;

            }
        }
        return nums;
    }

};






int main(){
    insertion ans;
    int n;
    cout<< "Enter no.of elements ";
    cin>>n;
    vector<int> nums(n);

    cout<< "Enter the elements ";
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> sorted = ans.insertion_sort(nums);
    cout << "Sorted vector: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;
}
