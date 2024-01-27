// Problem Statement

// You are given an

// sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number of apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.

// Input Format

//     The first input line has two integers 

// and
// : the height and width of the map.
// Then there are
// lines of

//     characters describing the map. Each character is either .(room) or #(wall).

// Constraints

// Output Format

//     Output the number of apartments

// Sample Input 0

// 5 8
// ########
// #..#...#
// ####.#.#
// #..#...#
// ########

// Sample Output 0

// 3

// Sample Input 1

// 6 8
// .#.#####
// .#.###..
// #..#...#
// #.##....
// ..##.###
// #.#.##.#

// Sample Output 1

// 5


#include <bits/stdc++.h>
using namespace std;
const int N=1005;
int mat[N][N];
bool vis[N][N];
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};

int n,m;
bool isvalid(int i,int j){
  return !vis[i][j] && mat[i][j] != -1 && i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int si,int sj){
    vis[si][sj]=true;
    for(int i=0;i<4;i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(isvalid(ci,cj)){
            dfs(ci,cj);
        }
    }    
}

int main() {
  
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
        }
    }
    
    memset(vis,false,sizeof(vis));
    
    int c=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(vis[i][j]==false && mat[i][j]==0 ){
                dfs(i,j);
                c++;
            }
        }
    }
    
    cout<<c;
    return 0;
}
