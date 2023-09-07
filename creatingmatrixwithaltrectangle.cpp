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
    int col=5;
    char mat[row][col];
    // for(int i=0;i<3;i++){
    //     mat[0][i]='X';
    // }
    // for(int i=0;i<3;i++){
    //     mat[i][0]='X';

    // }
    // for(int i=0;i<3;i++){
    //     mat[i][2]='X';
    // }
    // for(int i=0;i<3;i++){
    //     mat[2][i]='X';

    // }
    int top=0;
    int bottom=row-1;
    int left=0;
    int right=col-1;
    int num=0;
    while(top<=bottom && left<=right){
        for(int j=left;j<=right;j++){
            if(num%2==0){
                mat[top][j]='X';
            }
            else{
                mat[top][j]='O';
            }
        }
        top++;
        for(int j=top;j<=bottom;j++){
            if(num%2==0){
                mat[j][right]='X';
            }
            else{
                mat[j][right]='O';
            }
        }
        right--;
        if(top<=bottom){
            for(int j=right;j>=left;j--){
                if(num%2==0){
                mat[bottom][j]='X';
            }
            else{
                mat[bottom][j]='O';
            }
            }
            bottom--;
        }
        
        if(left<=right){
            for(int j=bottom;j>=top;j--){
                if(num%2==0){
                mat[j][left]='X';
            }
            else{
                mat[j][left]='O';
            }
            }
            left++;
        }
        num++;
        

    }
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            cout<<mat[i][j]<<" ";
        
        }
        cout<<endl;
    }
    return 0;




}