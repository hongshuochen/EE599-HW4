#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

using namespace std;
/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  //q1
  vector<int> keepOdd(const vector<int>& input, int i);
  vector<int> transform(const vector<int>& input);
  int sum(const vector<int>& input);


  //q2
  int NumberOfNodes(TreeNode* root);
  int SumOfNodes(TreeNode* root);
  int DepthOfTree(TreeNode* root);
  int DiameterOfTree(TreeNode* root);

  //q3
  void SwapByRefernce(int &input1, int &input2);
  void SwapByPointer(int *input1, int *input2);

  //q4
  bool isBST(TreeNode* root);
  //optional
  int findLCA(TreeNode* root, int val_a, int val_b);

  private : 
};

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
#endif
