## This is a directory containing the issue that i encountered while coding a LL with Loops for detecting loop.

# Issue: 

While detecting a loop in a LL using addresses memory of traversed addressess, a function "int detectLoop(LL *Head)" was returning true status indicating that the address was already visited even though when we had no loop in LL. Issue was with a local array of pointers storing the addressess traversed in Linked list.

![alt Mesh Topology Result of 6 nodes](https://raw.githubusercontent.com/thewitking/bugs/main/LL_Issue/issue.png)

# Root cause: 

One of the junk address out of local array of pointers storing the addresses traversed in Linked list had the garbage value matching the current node this indicated that the current node has been explored earlier and thus the function mentioned above returned a true status.


# Fix:

The fix was very simple. We need to initaillize the array of pointers of addressess traversed with NULL. Either initailize them with static or with calloc call or simply use default value {0} for initialization.

![alt Mesh Topology Result of 6 nodes](https://raw.githubusercontent.com/thewitking/bugs/main/LL_Issue/afterFix.png)

## Improvement note:
The size of array of visited address could be fixated to the number of nodes created using some static kind of global variable. coding sturcture could have been improved more with better formatted coding. But the attached code here is the same replica that i encounterd bug with. Other method could use hashing and even pointers or changing the structure. All in all, the common method uses the reference address of earlier visited node to check with current node. 
