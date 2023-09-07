#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <unordered_set>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    int row=5;
    int col=4;
    int M[5][4] =     { { 1, 2, 3, 4 },
                        { 5, 6, 7, 8 },
                        { 9, 10, 11, 12 },
                        { 13, 14, 15, 16 },
                        { 17, 18, 19, 20 },};
    int width=4;
    int sum=7;
    int rowl=4;
    int coll=3;
    for(int num=0;num<8;num++){
        for(int rowi=num;rowi>=0;rowi--){
            if(rowi>=4){
                rowi=4;

            }
            for(int coli=0;coli<4;coli++){
                if( rowi+coli==num){
                    cout<<M[rowi][coli]<<" ";
                }
            }
            
            

        }
        cout<<"\n";

    }
    return 0;

}