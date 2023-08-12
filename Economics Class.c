/*
Economics Class

Vaishnavi has recently learned in her Economics class that the market is said to be in equilibrium when the supply is equal to the demand.

Vaishnavi has market data for N time points in the form of two integer arrays S and D. Here, Si denotes the supply at the ith point of time and Di denotes the demand at the ith point of time, for each 1≤i≤N.

Help Vaishnavi in finding out the number of time points at which the market was in equilibrium.
 


Input Format

The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.

Each test case contains three lines of input.

The first line of each test case contains an integer N, the length of the arrays S and D.

The second line of each test case contains N space-separated integers S1,S2,…,SN.

The third line of each test case contains N space-separated integers D1,D2,…,DN.

Output Format

For each test case, output the number of time points at which the market was in equilibrium.

Constraints

1≤T≤10

1≤N≤100

1≤Si,Di≤100 for every 1≤i≤N
*/

#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) 
    {
        int lensd;
        scanf("%d", &lensd);
        
        int s[lensd], d[lensd];
        for (int j = 0; j < lensd; j++) 
        {
            scanf("%d", &s[j]);
        }

        for (int j = 0; j < lensd; j++) 
        {
            scanf("%d", &d[j]);
        }
        
        int count = 0;
        for (int j = 0; j < lensd; j++) 
        {
            if (s[j] == d[j]) 
            {
                count++;
            }
        }
        printf("%d ", count);
    }
    
    return 0;
}
