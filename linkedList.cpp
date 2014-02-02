#include<iostream>
using namespace std;

struct node
{
  int  val;
  struct node * next;
};

void InsertHead(struct node *root,int val)
{
  
  
}

void InsertTail(struct node *root,int val)
{
  
  
}

int Pop(struct node * root)
{
  return 0;
}

int Dequeue(struct node * root)
{
  return 0;  
}

int main()
{
  struct node * root = NULL;
  struct node *newNode = new struct node;
  newNode->val = 0;
  root = newNode;
  cout<<root->val<<endl;
  
  delete newNode;
  return 0;
}
  
  