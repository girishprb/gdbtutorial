#include<iostream>
using namespace std;

struct node
{
  int  val;
  struct node * next;
};

void InsertHead(struct node **root,int val)
{
  struct node * current = *root;
  struct node * newNode = new struct node;
  newNode->val = val;
  newNode->next = current;
  *root = newNode;
}

void PrintList(struct node * root)
{
  struct node * current = root;
  while(current != NULL)
  {
   cout<<current->val<<endl;
   current = current->next;
  }
}

void InsertTail(struct node **root,int val)
{
  struct node * newNode = new struct node;
  newNode->val = val;
  newNode->next= NULL;
  struct node * current = *root;
  if(current == NULL)
  {
    *root = newNode;
  }
  else
  {
    while(current->next != NULL)
    {
      current = current->next;
    }
    current->next = newNode; 
  }
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
  //InsertHead(&root,1);
  //InsertHead(&root,2);
  //InsertHead(&root,3);
  InsertTail(&root, 10);
  PrintList(root);
  delete newNode;
  return 0;
}
  
  