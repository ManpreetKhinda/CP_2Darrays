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
    int M[3][4] =     { { 0, 1, 2,0  },
                        { 3, 4, 5,2 },
                        { 4, 3, 1,5 },
                        };
    

    for(int coli=0;coli<3;coli++){
        for(int rowi=0;rowi<3;rowi++){
            if(M[rowi][coli]==0){

                for(int a=0;a<3;a++){
                    M[rowi][a]=-1;
                }
                for(int b=0;b<3;b++){
                    M[b][coli]=-1;
                }
                
            }
            
            

        }
        

    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
 
          // Prints ' ' if j != n-1 else prints '\n' 
            if(M[i][j]!=-1){
                cout << M[i][j] << " \n"[j == 4-1];
            }
            else{
                M[i][j]=0;
                cout << M[i][j] << " \n"[j == 4-1];
            }
    return 0;
}