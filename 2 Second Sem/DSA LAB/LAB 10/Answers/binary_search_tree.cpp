#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int root;
  Node *left, *right;
};

Node *create(int root)
{
  Node *temp = new Node();
  temp->root = root;
  temp->left = temp->right = NULL;
  return temp;
}

Node *insert(Node *ptr, int root)
{
  if (ptr == NULL)
  {
    ptr = create(root);
    return ptr;
  }
  else if (ptr->root >= root)
    ptr->left = insert(ptr->left, root);
  else
    ptr->right = insert(ptr->right, root);
  return ptr;
}

void dpdisplay(Node *ptr)
{
  if (ptr == NULL)
    return;
  dpdisplay(ptr->left);
  cout << ptr->root << " ";
  dpdisplay(ptr->right);
}

void search(Node *ptr, int root)
{
  if (ptr == NULL)
  {
    cout << "Element not found\n";
    return;
  }
  if (ptr->root == root)
  {
    cout << "Element found\n";
    return;
  }
  if (ptr->root > root)
  {
    search(ptr->left, root);
  }
  else
  {
    search(ptr->right, root);
  }
}

void bfdisplay(Node *ptr)
{
  if (ptr == NULL)
  {
    cout << "Tree is Empty\n";
    return;
  }
  queue<Node *> q1;
  q1.push(ptr);
  while (!q1.empty())
  {
    Node *temp = q1.front();
    cout << temp->root << " ";
    if (temp->left != NULL)
    {
      q1.push(temp->left);
    }
    if (temp->right != NULL)
    {
      q1.push(temp->right);
    }
    q1.pop();
  }
}

int low(Node *ptr)
{
  if (ptr == NULL)
    return -1;
  while (ptr->left != NULL)
  {
    ptr = ptr->left;
  }
  return ptr->root;
}

Node *deleten(Node *ptr, int root)
{
  if (ptr == NULL)
    return ptr;
  if (ptr->root > root)
  {
    ptr->left = deleten(ptr->left, root);
  }
  else if (ptr->root < root)
  {
    ptr->right = deleten(ptr->right, root);
  }
  else
  {
    if (ptr->left == NULL and ptr->right == NULL)
    {
      delete ptr;
      ptr = NULL;
      return ptr;
    }
    else if (ptr->right == NULL)
    {
      Node *temp = ptr;
      ptr = ptr->left;
      delete temp;
      return ptr;
    }
    else if (ptr->left == NULL)
    {
      Node *temp = ptr;
      ptr = ptr->right;
      delete temp;
      return ptr;
    }
    else
    {
      int right_minimum = low(ptr->right);
      ptr->root = right_minimum;
      ptr->right = deleten(ptr->right, right_minimum);
    }
  }
  return ptr;
}

int Depth(Node *ptr)
{
  if (ptr == NULL)
    return -1;
  return max(Depth(ptr->right), Depth(ptr->left)) + 1;
}

void Level_Wise_Mirror(Node *ptr)
{
  if (ptr == NULL)
    return;
  else
  {
    struct Node *temp;
    Level_Wise_Mirror(ptr->left);
    Level_Wise_Mirror(ptr->right);
    temp = ptr->left;
    ptr->left = ptr->right;
    ptr->right = temp;
  }
}

int main()
{
  Node *lead = NULL;
  int push, x;

  cout << "Enter Total No. of Elements in Binary Search Tree : " << endl;
  cin >> x;
  cout << "\nEnter elements of binary search tree : " << endl;
  for (int j = 0; j < x; j++)
  {
    cin >> push;
    lead = insert(lead, push);
  }
  cout << "\n";

  cout << "Enter Element to be Deleted : " << endl;
  cin >> x;
  lead = deleten(lead, x);

  cout << " ....... Deleted the Element ......." << endl;
  cout << "\n";
  cout << "Depth : " << Depth(lead) << endl;
  cout << "\n";
  cout << "Enter element to search : " << endl;
  cout << "\n";
  cin >> x;
  cout << "\n";
  search(lead, x);
  cout << "\n";
  cout << "Display Tree : ";
  bfdisplay(lead);
  cout << "\t\n";
  cout << "Mirror Image of Tree : ";
  Level_Wise_Mirror(lead);
  dpdisplay(lead);
  cout << "\t\n";
  // cout << "Mirror Image Level Wise : ";
  // Level_Wise_Mirror(lead);
  // bfdisplay(lead);
  // cout << "\t\n";

  return 0;
}