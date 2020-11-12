#ifndef BST_H
#define BST_H

class bst {

  struct Node {
    int val;
    Node *left;
    Node *right;
  };

public:
  //methods to be used by user (main)
  bst();
  ~bst();

private:
  //methods to be used on public member functions
  Node *root;
  void clearNodes(Node *curr);
};

#endif