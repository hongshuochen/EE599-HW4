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

<<<<<<< HEAD
  vector<int> transform(const vector<int>& input) {

  }

  int sum(const vector<int>& input) {
    
  }

  //q2
  struct TreeNode {
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  int NumberOfNodes(TreeNode* root);
  int SumOfNodes(TreeNode* root);
  int DepthOfTree(TreeNode* root);
  int DiameterOfTree(TreeNode* root);

=======
>>>>>>> 72da09d866a6d65202409c3e5d89dd696332dac8
  //q3
  void SwapByRefernce(int &input1, int &input2);
  void SwapByPointer(int *input1, int *input2);

  //q4
  void UniqeVectorNotBySet(std::vector<int> &input);
  void UniqeVectorBySet(std::vector<int> &input);
  void ReverseVector(std::vector<int> &input);
  void OddVector(std::vector<int> &input);
  std::vector<int> UnionVectors(std::vector<int> &input1, std::vector<int> &input2);

  //q5
  void ReverseString(std::string &input);
  std::vector<int> ReverseVector_1(std::vector<int> input);
  void ToLower(std::string& input);

  //q6 
  bool canBePalindrome(const std::string &str);

  //q7
  std::map<char, char> Mappable(const std::string& from, const std::string& to);

  //q8
  void kthPeek(std::vector<int> &input, int k);

  private : 
};

#endif
