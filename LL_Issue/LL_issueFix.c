#include <stdio.h>
#include<stdlib.h>

struct LL{
int data;
struct LL* next;
};

typedef struct LL LL;


// funtiuon to create a ll node //NULL
LL * initLL(int data, LL * someaddr)
{
    LL *a=(LL *)malloc(sizeof(LL));
    a->data=data;
    a->next=someaddr;
    return a;
}

// it will add new node with value at the end of ll
LL* addLLatEnd(LL * link, int value, LL* someaddr)
{
    LL * newelement= initLL(value, someaddr);
    LL * node=link;
    while(node->next!=NULL)
    {
        node=node->next;
    }
    node->next=newelement;
    return newelement;
}

/// send ll to function fot detect llooop

int detectLoop(LL * Head)
{
    LL *address[50]={0}; ///Fix here
    int i=0;
    LL * node=Head;
    while(node->next!=NULL)
    {
        // check if it is loop
         for(int j=0;j<50;j++)
        {
            printf("Index: %d, Address stored:%p\n",j,address[j]);
            printf("Current node address: %p\n",node);
            if(address[j]==node)
            {
                printf("addr, %p\n",address[j]);
                printf("node addr, %p\n",node);
                return 1; // looop detected
            }
        }
        
        // not a loop continue
        
        address[i]=node;
        node=node->next;
        i++;
       
       
    }
    return 0; /// not coming
}

int main() {
    
    LL * Head=initLL(5, NULL);
    
    //bool flag;
    // lets make functiosn to add new links
    LL *node3;
    LL *element=addLLatEnd(Head,6, 0);
    node3= addLLatEnd(Head,8, NULL);
    addLLatEnd(Head,18, NULL);
    addLLatEnd(Head,10,NULL);
    //element= addLLatEnd(Head,2, node3);
    
    if(detectLoop(Head))
    {
        printf("Loop detected");
    }
    else
    {
        printf("Loop Not detected");
    }
    
    return 0;
}
  