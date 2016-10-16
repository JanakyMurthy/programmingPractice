#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* Author : Janaky Murthy */
/* Implements Min Heap 
 * Returns the min element O(1) time
 * Insertion and deletion take logarthimic time
 */
class min_heap
{
    /* to store heap elements */
    vector<int> a;
    
  /* returns the index of the left child */
  int lchild_index(int parent)
  { return (2*parent+1);}
    
 /* returns the index of the right child*/
    int rchild_index(int parent)
    { return (2*parent+2);}
 
  /* returns the index of parent */
    int parent_index(int child)
    {
        return (child-1)/2;
    }
    
  /* checks if the node has left child */
   bool has_lchild(int parent)
   { return lchild_index(parent) < a.size();}
  
  /* checks if the node has right child*/
  bool has_rchild(int parent)
  { return rchild_index(parent) < a.size(); }
    
  /* checks if the node has a left childe */
  bool has_parent(int child)
  { return parent_index(child) >= 0 && parent_index(child) < a.size();}
    
  /* returns the lchild; can be called only when has_lchild returns true*/
  int lchild(int parent)
  { return a[lchild_index(parent)];}
    
  /* returns the rchild; can be called only when has_rchild return true*/
  int rchild(int parent)
  { return a[rchild_index(parent)];}
    
  /* returns the parent; can be called only when has_parent return true*/
   int parent(int child)
   {
       return a[parent_index(child)];
   }
    
    /* swaps the two nodes whose index is given */
    void swap(int index1, int index2)
    {
        int temp = a[index1];
        a[index1] = a[index2];
        a[index2] = temp;
    }
    
     /* moves the element up into the binary heap into its correct location */
    void bubble_up(int index)
    {
        int child_index = index;
        int par_index = parent_index(child_index);
        
        while(has_parent(child_index) && a[child_index] < a[par_index])
        {
            swap(child_index,par_index);
            child_index = par_index;
            par_index = parent_index(child_index);
        }
    }
    
    /* moves the element down into the binary heap into its correct location */
    void bubble_down(int index)
    {   
       if(has_lchild(index))
       {
           if(has_rchild(index))
           {
               int min_index = index;
               if(a[min_index] > a[lchild_index(index)]) min_index = lchild_index(index);
               if(a[min_index] > a[rchild_index(index)]) min_index = rchild_index(index);
               if(min_index != index)
               {
                   swap(min_index,index);
                   bubble_down(min_index);
               }
               
               
           }
           else
           {
               if(lchild(index) < a[index])
               {
                   swap(index,lchild_index(index));
                   bubble_down(lchild_index(index));
               }
           }
       }
    }
   public:
    
   /* adds the number to the heap */
   void add_to_heap(int number)
   {
     /* append the number to the tail of the heap*/
     a.push_back(number);
       
      /* the number may not be in order ; shift it to the appropiate position*/
      bubble_up(a.size()-1);
   }
   
    /* finds the min element of heap */
    int find_root()
    {
        if(a.size() == 0) return -1; // indcates that the heap was empty
        
        return a[0];
    }
    
   /* deletes the min element of the heap*/
   void remove_root()
   {
       /* transfer the last element to the first position*/
       a[0] = a[a.size()-1];
       a.pop_back();
       
       /* balance */
       bubble_down(0);
   }
    
    /* deletes the given element from heap*/
   void remove_element(int number)
   {
       /* search the number */
       int index = 0;
       while(a[index] != number && index < a.size()) index++;
       
       /* delete the element only if it is found */
       if(index < a.size())
       {
           if(index == a.size() -1)
           {
               a.pop_back();
           }
           else
           {
               a[index] = a[a.size()-1];
               a.pop_back();
               if(index == 0 || a[index] > parent(index)) bubble_down(index);
               else bubble_up(index);
           }
       }
   }
    
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    min_heap h;
    int q;
    cin >> q;
    while(q--)
    {
        int op;
        cin >> op;
        if(op == 1)
        {
            int n;
            cin >> n;
            h.add_to_heap(n);
        }
        else if(op == 2)
        {
            int n;
            cin >> n;
            h.remove_element(n);
        }
        else
        {
            cout << h.find_root() << "\n";
        }
    }
    return 0;
}

