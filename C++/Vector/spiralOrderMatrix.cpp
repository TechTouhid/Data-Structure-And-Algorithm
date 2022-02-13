#include<iostream>
#include<vector>
using namespace std;

// custom vector function which return vector
    vector<int> spiralOrder(vector<vector<int>> matrix){
        vector<int> ans;
        // to know the row and column
        int row = matrix.size();
        int col = matrix[0].size();
        if(row == 0) return ans;
        // initialize variable 
        int sr = 0, er = row - 1, sc = 0, ec = col - 1, count = 0;
        while(sr<=er && sc<=ec){
        // print sr
            for (int i = sr; i <=ec; i++)
            {
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if(count == row * col) return ans;

            // print ec
            for (int i = sr; i <=er; i++)
            {
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if(count == row * col) return ans;

            // print er
            for (int i = ec; i >=sc; i--)
            {
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            if(count == row * col) return ans;
            
            // print sc
            for (int i = er; i >=sr; i--)
            {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            if(count == row * col) return ans;
        }
        return ans;
    }

int main(){
    vector<vector<int>> v = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    vector<int> o;
    o = spiralOrder(v);
    for (int i =0; i<o.size();i++) cout<<o[i]<<endl;
    return 0;
}