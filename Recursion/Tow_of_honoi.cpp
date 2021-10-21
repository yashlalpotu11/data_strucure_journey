/*
    Title of honoi

Rules : 
    Only one disk can be moved at a time.
    Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
    No disk may be placed on top of a smaller disk.

Approach : 
    Take an example for 2 disks :
    Let rod 1 = 'A', rod 2 = 'B', rod 3 = 'C'.

    Step 1 : Shift first disk from 'A' to 'B'.
    Step 2 : Shift second disk from 'A' to 'C'.
    Step 3 : Shift first disk from 'B' to 'C'.

    The pattern here is :
    Shift 'n-1' disks from 'A' to 'B'.
    Shift last disk from 'A' to 'C'.
    Shift 'n-1' disks from 'B' to 'C'.

*/

#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n==1){
        cout<<"Move disc 1 from rod " << from_rod << " to rod " << to_rod<<endl;
        return ;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);

    cout<<"Move disk " << n << " from rod " << from_rod << " to rod " << to_rod <<endl;

    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
int main()
{
    int n = 4; // Number of disks we have
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}

//Time Complexity : O(2^n)
//Space Complexity : O(n)