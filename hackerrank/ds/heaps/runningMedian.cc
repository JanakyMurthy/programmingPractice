#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <iomanip>
using namespace std;
/* AUthor: Janaky Murthy */
/* Finds the runnig median of an array by maintaing two heaps */


/* min heap implementation */
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
    
    /* size */
    int size() {return a.size();}
    
};

/* max heap implementation */
class max_heap
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
        
        while(has_parent(child_index) && a[child_index] > a[par_index])
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
               int max_index = index;
               if(a[max_index] < a[lchild_index(index)]) max_index = lchild_index(index);
               if(a[max_index] < a[rchild_index(index)]) max_index = rchild_index(index);
               if(max_index != index)
               {
                   swap(max_index,index);
                   bubble_down(max_index);
               }
               
               
           }
           else
           {
               if(lchild(index) > a[index])
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
               if(index == 0 || a[index] < parent(index)) bubble_down(index);
               else bubble_up(index);
           }
       }
   }
    
    /* size */
    int size() { return a.size();}
    
};

void add_number(int number, max_heap &lower, min_heap &higher)
{
    if(lower.size()==0 || lower.find_root() > number) lower.add_to_heap(number);
    else higher.add_to_heap(number);
}

void rebalance(max_heap &lower, min_heap &higher)
{
    if(lower.size() - higher.size() >= 2)
    {
        while(lower.size() - higher.size() >= 2)
        {
            int root = lower.find_root();
            lower.remove_root();
            higher.add_to_heap(root);
        }
    }
    
    else if (higher.size() - lower.size() >= 2)
   {
        while(higher.size() - lower.size() >= 2)
       {
            int root = higher.find_root();
            higher.remove_root();
            lower.add_to_heap(root);
        }
    }
}


double get_median(max_heap &lower, min_heap &higher)
{
   if(lower.size() == higher.size())
   {
       return (lower.find_root() + higher.find_root()) / 2.0;
   }
    
   else if(lower.size() > higher.size())
   {
       return (float)(lower.find_root());
   }
    
   else return (float)(higher.find_root());
}

vector<double> find_running_median(vector<int> a)
{
    int n = a.size();
    vector<double> median(n);
    
    max_heap lower;
    min_heap higher;
    
    for(int i = 0; i < n; i++)
    {
        int number = a[i];
        add_number(number,lower,higher);
        rebalance(lower,higher);
        median[i] = get_median(lower,higher);
    }
    
    return median;
}


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    
    vector<double> median = find_running_median(a);
    cout << std::setprecision(1) << std::fixed;
    for(int i=0; i<median.size(); i++) cout << (float) (median[i]) << "\n";
    return 0;
}
