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
    int M[4][4] =     { { 5, 1, 9,1  },
                        { 2, 4, 8,10 },
                        { 13, 3, 6,7 },
                        {15,14,12,16}
                        };
    int N[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            N[j][4-i-1]=M[i][j];

        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << N[i][j] << " ";
        }
    
   // Newline for new row
    cout << endl;
}
}