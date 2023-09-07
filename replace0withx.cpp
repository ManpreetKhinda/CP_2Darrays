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
#define M 6
#define N 6
void floodFillutil(char mat[][N],int x, int y, char prevV, char newV){
    if(x<0||x>=M||y<0||y>=N){
        return;
    }
    if(mat[x][y]!=prevV){
        return;
    }
    mat[x][y]=newV;
    floodFillutil(mat,x+1,y,prevV,newV);
    floodFillutil(mat,x-1,y,prevV,newV);
    floodFillutil(mat,x,y+1,prevV,newV);
    floodFillutil(mat,x,y-1,prevV,newV);

}
int replacesurrounding(char mat[][N]){
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(mat[i][j]=='O'){
                mat[i][j]='+';
            }
        }
    }
    for(int i=0; i<M;i++){
        if(mat[i][0]=='+'){
            floodFillutil(mat,i,0,'+','O');
        }}
    for(int i=0;i<M;i++){
        if(mat[i][N-1]=='+'){
            floodFillutil(mat,i,N-1,'+','O');
        }
    }
    for(int i=0;i<N;i++){
        if(mat[0][i]=='+'){
            floodFillutil(mat,0,i,'+','O');
        }
    }
    for(int i=0;i<N;i++){
        if(mat[M-1][i]=='+'){
            floodFillutil(mat,M-1,i,'+','0');
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(mat[i][j]=='+'){
                mat[i][j]='X';
            }
        }
    }

}

int main(){
    char mat[6][6] =  {{'X', 'O', 'X', 'X', 'X', 'X'},
                    {'X', 'O', 'X', 'X', 'O', 'X'},
                    {'X', 'X', 'X', 'O', 'O', 'X'},
                    {'O', 'X', 'X', 'X', 'X', 'X'},
                    {'X', 'X', 'X', 'O', 'X', 'O'},
                    {'O', 'O', 'X', 'O', 'O', 'O'},
                    };
    replacesurrounding(mat);
    for(int i=0;i<M;i++){
        for(int j=0; j<N;j++){
            cout<<mat[i][j]<<" ";
        
        }
        cout<<endl;
    }
    return 0;
}