#include<iostream>
using namespace std;

struct node
{
  int  val;
  struct node * next;
};

struct node * root = NULL;

int main()
{
  struct node *newNode = new struct node;
  newNode->val = 0;
  root = newNode;
  cout<<root->val<<endl;
  
  delete newNode;
  return 0;
}
  
  