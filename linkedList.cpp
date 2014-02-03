#include<iostream>
using namespace std;

struct node
{
  int  val;
  struct node * next;
};

void Push(struct node **root,int val)
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

void Enqueue(struct node **root,int val)
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

int Dequeue(struct node ** root)
{
  int returnVal=-1;
  struct node * current = *root;
  struct node * previous;
  while(current->next != NULL)
  {
      previous = current;
      current = current->next;
  }
  returnVal = current->val;
  delete current;
  previous->next = NULL;
  return returnVal;  
}

int main()
{
  struct node * root = NULL;
  struct node *newNode = new struct node;
  newNode->val = 0;
  root = newNode;
  Push(&root,1);
  Push(&root,2);
  Push(&root,3);
  Enqueue(&root, 10);
  PrintList(root);
  Dequeue(&root);
  PrintList(root);
  delete newNode;
  return 0;
}
  
  