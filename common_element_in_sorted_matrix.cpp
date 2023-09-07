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
#define M 4
#define N 5

int findcommon(int mat[M][N]){
    int column[M];
    int min_row;
    
    int i;
    for(i=0;i<M;i++){
        column[i]=N-1;
        
    }
    min_row=0;
    while(column[min_row]>=0){
        for(i=0;i<M;i++){
            if(mat[i][column[i]]<mat[min_row][column[min_row]]){
                min_row=i;

            }
        }
        int eq_count=0;
        for(i=0;i<M;i++){
            if(mat[i][column[i]]>mat[min_row][column[min_row]]){
                if(column[i]==0){
                    return -1;
                }
                column[i]-=1;

            }

            else{
                eq_count++;

            }
        }
        if(eq_count==M){
            return mat[min_row][column[min_row]];
        }
    }
    return -1;
}

int main()
{
    int num;
    int mat[4][5] = {
        {1, 2, 3, 4, 5},
        {2, 4, 5, 8, 10},
        {3, 5, 7, 9, 11},
        {1, 3, 5, 7, 9},
    };
    int result=findcommon(mat);
    if(result==-1){
        cout<<"No";
    }
    else{
        cout<<result;
    }
    return 0;
}
/*
    
    
    
    bool bottom=SearchNext(board,word,row+1,col,index+1,m,n);
    bool rightbottom=SearchNext(board,word,row+1,col+1,index+1,m,n);
    bool right=SearchNext(board,word,row,col+1,index+1,m,n);
    bool righttop=SearchNext(board,word,row-1,col+1,index+1,m,n);
    bool top=SearchNext(board,word,row-1,col,index+1,m,n);
    bool lefttop=SearchNext(board,word,row-1,col-1,index+1,m,n);
    bool left=SearchNext(board,word,row,col-1,index+1,m,n);
    bool leftbottom=SearchNext(board,word,row+1,col-1,index+1,m,n);
    
    */