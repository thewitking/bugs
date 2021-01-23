## This is a directory containing the issue that i encountered while coding a LL with Loops for detecting loop.

# Issue: 

While detecting a loop in a LL using addresses memory of traversed addressess, a function "int detectLoop(LL *Head)" was returning true status indicating that the address was already visited even though when we had no loop in LL. Issue was with a local array of pointers storing the addressess traversed in Linked list.

# Root cause: 

One of the junk address out of local array of pointers storing the addresses traversed in Linked list had the garbage value matching the current node this indicated that the current node has been explored earlier and thus the function mentioned above returned a true status.


# Fix:

The fix was very simple. We need to initaillize the array of pointers of addressess travered with NULL. Either initailize them with static or with calloc call or simply use default value for initialization.
