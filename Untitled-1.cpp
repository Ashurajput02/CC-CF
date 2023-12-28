// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
// //  */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int v=nums.size();
        sort(nums[0],nums[v-1]);
        int max=0;
        int j=0;
        for(int i=0;i<v;i++){
            if(nums[i]<=max){
                max=nums[i];
                j=i;
                
            }
        }
        
            vector<int>v1;
            for(int i=0;i<j;i++){
                v1.push_back(nums[i]);
                
            }
            vector <int>v2;

          for(int i=j+1;i<v;i++){
                v2.push_back(nums[i]);
                
                 } 
            int k2=v2.size();
            sort(v1[0],v1[j-1],greater<int>());
            sort(v2[0],v2[k2-1],greater<int>());
            int k1=v1.size();
            int c1=0;
            int c2=0;
            int counter=0;
            while(c1<k1 ||c2<k2){
            nums[counter++]=v1[c1++];
            nums[counter++]=v2[c2++];
            }
            if(c1<k1)
                nums[counter++]=v1[c1++];
            
            if(c2<k2)
                nums[counter++]=v2[c2++];
            
            putter(&nums);
        
        
    }
    void putter(vector <int>&nums){
        int counter=nums.size();
        
        Treenode *head=new TreeNode(nums[0]);
        for(int i=1;i<counter;i++){
             TreeNode* root = new TreeNode(nums[i]);
            
            
        }
    }
};

// #include <iostream>
// #include <vector>

// class Solution {
// public:
//     TreeNode* sortedArrayToBST(std::vector<int>& nums) {
//         return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
//     }

// private:
//     TreeNode* sortedArrayToBSTHelper(std::vector<int>& nums, int left, int right) {
//         if (left > right)
//             return nullptr;

//         int mid = left + (right - left) / 2;
//         TreeNode* root = new TreeNode(nums[mid]);

//         root->left = sortedArrayToBSTHelper(nums, left, mid - 1);
//         root->right = sortedArrayToBSTHelper(nums, mid + 1, right);

//         return root;
//     }
// };



