

class Solution {
public:
    long findComplement(long num) {
        for(long i = 1; i<=num; i*=2) num = num^i;
        return num;
        
    }
}; '



  // also can do by 
//  int no_ofbit = (int)(log2(n)) + 1;
//for(i to no_ofbit) n = n^i(1<<n) 
