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
    int M[3][4] =     { { 1, 2,3,4  },
                        { 5, 6, 7,8 },
                        { 9, 10, 11,12 },
                        };
    int row=3;
    int col=4;
    int reps=row+col-1;
    vector<int> ans;
    int top=0;
    int bottom=2;
    int left=0;
    int right=3;
    while(top<=bottom && left<=right){
        for(int j=left;j<right+1;j++){
            ans.push_back(M[top][j]);
        }
        top++;
        for (int a=top;a<bottom+1;a++){
            ans.push_back(M[a][right]);

        }
        right--;
        if(top<=bottom){
            for(int b=right;b>=left;b--){
                ans.push_back(M[bottom][b]);
            }
            bottom--;
        }
        if (left<=right){
            for (int c=bottom;c>=top;c--){
                ans.push_back(M[c][left]);

            }
            left++;
        }


    }
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;


}