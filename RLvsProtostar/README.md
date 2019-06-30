Testing if an RL-Agent can beat Protostar
Approach:

   -Train a sequence model in a supervised approach to create strings which result in a buffer overflow given the assembly code
   -See if it generalizes to differenet lengths and slight variations in the assemembly
   -Let a RL-Agent learning via trial and error and see if it is better than a brute force strategy

Note:

   -For now this will be a quick and dirty implementation

