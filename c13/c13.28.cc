/**
 * Exercise 13.28: Given the following classes, implement a default constructor and the
necessary copy-control members.
(a) class TreeNode { 
	private:
		std::string value;
		int count;
		TreeNode *left;
		TreeNode *right;
	};
(b) class BinStrTree {
	private:
		TreeNode *root;
	}
*/
#include <string>
using namespace std;

class TreeNode
{
  public:
	TreeNode() : value(""), count(0), Left(nullptr), right(nullptr) {}

  private:
	string value;
	int count;
	TreeNode *Left;
	TreeNode *right;
};

int main(void)
{
	TreeNode td;
	return 0;
}