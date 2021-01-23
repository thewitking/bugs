## This is a directory containing the issue that i encountered while coding a LL with Loops for detecting loop.

# Issue: 

While detecting a loop in a LL using addresses memory of travered addressess, a function <span style="color:red;">int detectLoop(LL *Head)</span> was returing true status indicating that the address was already visited even though when we had no loop in LL. Issue was with a local array of pointers storing the addressess traversed in Linked list.

# Root cause: 

One of the junk address out of local array of pointers storing the addressess traveeresd in Linked list had the garbage value matching the previously exited routine having the same address of node

I suspect the garbage value retained in the stack area was the root cause of it.

# Fix:

The fix was very simple. We need to initaillize the array of pointers of addressess travered with NULL. Either initailize them with static or with calloc call or simply use default value for initialization.
