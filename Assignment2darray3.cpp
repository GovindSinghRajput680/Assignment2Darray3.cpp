#include<iostream>
#include<vector>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {int m =matrix.size();
    vector<vector<int>> v;
    int n =matrix[0].size();
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(matrix[i][j] == 0){
                v.push_back({i,j});
            }
        }
    }
for(int k = 0;k<v.size();k++){int row=  v[k][0];
    for(int c = 0;c<n;c++){
        matrix[row][c] =0;
    }
     for(int r = 0;r<m;r++){int col =(v[k][1]);
        matrix[r][col] = 0;
    }
}}
int main(){cout<<"Enter order of matrix (rows and columns respctively ): ";
int m,n;
cin>>m>>n;
vector<vector<int>> arr(m,vector<int> (n));
cout<<"Enter the elements : "<<endl;
for(int i =0;i<m;i++){
    for(int j =0;j<n;j++){
        cin>>arr[i][j];
    }
}
setZeroes(arr);
cout<<" the required matrix is : "<<endl;
for(int i =0;i<m;i++){
    for(int j =0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
}
}