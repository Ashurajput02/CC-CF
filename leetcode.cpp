public:
TreeNode *sortedArrayToBST(std::vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());

    // Find the minimum positive integer and its position
    int minPosInt = INT_MAX;
    int minPosIntPos = -1;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0 && nums[i] < minPosInt)
        {
            minPosInt = nums[i];
            minPosIntPos = i;
        }
    }

    // Split the sorted vector into two parts
    std::vector<int> smaller(nums.begin(), nums.begin() + minPosIntPos);
    std::vector<int> greater(nums.begin() + minPosIntPos, nums.end());

    // Sort the two parts in descending order
    std::sort(smaller.begin(), smaller.end(), std::greater<int>());
    std::sort(greater.begin(), greater.end(), std::greater<int>());

    // Create a BST and insert elements from the sorted parts
    TreeNode *root = new TreeNode(minPosInt);
    insertIntoBST(root, smaller);
    insertIntoBST(root, greater);

    return root;
}

private:
void insertIntoBST(TreeNode *root, const std::vector<int> &values)
{
    for (int i = 0; i < values.size(); ++i)
    {
        int val = values[i];
        TreeNode *newNode = new TreeNode(val);
        TreeNode *current = root;
        while (true)
        {
            if (val < current->val)
            {
                if (current->left == nullptr)
                {
                    current->left = newNode;
                    break;
                }
                current = current->left;
            }
            else
            {
                if (current->right == nullptr)
                {
                    current->right = newNode;
                    break;
                }
                current = current->right;
            }
        }
    }
}