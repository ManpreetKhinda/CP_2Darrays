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
bool SearchNext(vector<vector<char>> &board,string word,int row,
int col, int index, int m, int n){
    if(index==word.length()){
        return true;

    }
    if(row<0 || col<0 || row==m ||col==n ||board[row][col]!=word[index]
    || board[row][col]=='!'){
        return false;
    }
    char c=board[row][col];
    board[row][col]='!';
    
    bool top=SearchNext(board,word,row-1,col,index+1,m,n);
    bool right=SearchNext(board,word,row,col+1,index+1,m,n);
    bool bottom=SearchNext(board,word,row+1,col,index+1,m,n);
    bool left=SearchNext(board,word,row,col-1,index+1,m,m);
    board[row][col]=c;
    return top ||right||bottom ||left;

}
bool exist(vector<vector<char>> board,string word){
    int m=board.size();
    int n= board[0].size();
    int index=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==word[index]){
                if(SearchNext(board,word,i,j,index,m,n)){
                    return true;
                }
            }
        }
        

    }
    return false;



}
int main(){
    vector<vector<char>> board {{'A','B','C','E'},
                                {'S','F','E','S'},
                                {'A','D','E','E'}};
    std:: string word="ABCEFSADEESE";
    bool res=exist(board,word);
    if(res==1){
        cout<<"True"<<endl;

    }
    else{
        cout<<"False"<<endl;
    }


}