#include "bst.h"

bst::bst() {
  root = nullptr;
}

bst::~bst() {
  clearNodes(root);
}

void bst::clearNodes(Node *curr) {
  if (curr != nullptr) {
    if (curr->left == nullptr && curr->right == nullptr) {
      delete curr;
      curr = nullptr;
    }
    else {
      clearNodes(curr->left);
      clearNodes(curr->right);
    }
  }
  return;
}