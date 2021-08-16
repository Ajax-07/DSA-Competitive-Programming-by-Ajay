#include<bits/stdc++.h>
using namespace std;

class Solution{
	
	public:
	vector<vector<char>> createMatrix(int n, int m)
	{
		vector<vector<char>> mat(n, vector<char> (m));
		
        int flip = 1;
        char fill = 'x';

        int top=0;
        int bottom = n-1;
        int left = 0;
        int right = m-1; 

        while(top <= bottom && left <= right){
            // top
            for(int j=left; j<=right; j++)
               mat[top][j] = fill;
            top++;   

            // right
            for(int i=top; i<=bottom; i++)
               mat[i][right] = fill;
            right--;

            // bottom
            if(left <= right){
                for(int j=right; j>=left; j--)
                    mat[bottom][j]=fill;
                bottom--;    
            }

            // left
            if(top <= bottom){
                for(int i=bottom; i>=top; i--)
                    mat[i][left] = fill;
                left++;    
            }

            flip = flip^1;
            fill = (flip) ? 'x' : '0';
        }

        return mat;

	}
};

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    Solution s;

    vector<vector<char>> ans = s.createMatrix(n, m);

    for(auto &x : ans){
        for(auto &y : x)
           cout << y << " ";
        cout << endl;   
    }

    return 0;
}

/*
input 
9 10

output
x x x x x x x x x x 
x 0 0 0 0 0 0 0 0 x 
x 0 x x x x x x 0 x 
x 0 x 0 0 0 0 x 0 x 
x 0 x 0 x x 0 x 0 x 
x 0 x 0 0 0 0 x 0 x 
x 0 x x x x x x 0 x 
x 0 0 0 0 0 0 0 0 x 
x x x x x x x x x x 


*/
