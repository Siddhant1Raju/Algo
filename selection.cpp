#include <iostream>
#include <vector>
using namespace std;


class selection{
public:
    vector<int>selection_sort(vector<int>nums){
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int mini = i;
            for( int j = i+i;j<n;j++){
                if(nums[j]<nums[mini]){
                    mini = j;
                }
            }
            int temp = nums[mini];
            nums[mini]=nums[i];
            nums[i] = temp;
        }
        return nums;

    }
};

int main(){
    selection ans;
    int n;
    cout<< "Enter the no.of elements: ";
    cin>>n;
    vector<int> nums(n);

    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>sorted = ans.selection_sort(nums);
    cout<<"Sorted vector: ";
    for(int num: sorted){
        cout << num <<" ";
    }
    cout<< endl;


}
