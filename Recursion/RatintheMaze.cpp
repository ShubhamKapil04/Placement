// Rat in a Maze Problem - I 

/*
Consider a rat placed at (0, 0) in 
a square matrix of order N * N. It has 
to reach the destination at (N - 1, N - 1).
Find all possible paths that the rat can 
take to reach from source to destination. 
The directions in which the rat can move 
are 'U'(up), 'D'(down), 'L' (left), 'R' 
(right). Value 0 at a cell in the matrix 
represents that it is blocked and rat cannot 
move to it while value 1 at a cell in the 
matrix represents that rat can be travel 
through it.
Note: In a path, no cell can be visited 
more than one time. If the source cell is 
0, the rat cannot move to any other cell.
*/

/*

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 bool isSafe(vector<vector<int>> &m, int n, vector<vector<int>> visited, int x, int y)
    {
        if((x >= 0 && x < n) &&(y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        else{
            return false;
        }
    }
 void solve(vector<vector<int>> &m, int n, vector<string>& ans, int x, int y,
               vector<vector<int>> visited, string path)
               {
                   //Base base
                   if(x == n-1 && y == n-1)
                   {
                       ans.push_back(path);
                       return;
                   }
                   
                   visited[x][y] = 1;
                   
                   
                   //Down
                   int newx = x+1;
                   int newy = y;
                   
                   if(isSafe(m, n, visited, newx, newy))
                   {
                       path.push_back('D');
                       solve(m, n, ans, x, y, visited, path);
                       path.pop_back();
                   }
                   
                   //left
                   newx = x;
                   newy = y-1;
                   
                   if(isSafe(m, n, visited, newx, newy))
                   {
                       path.push_back('L');
                       solve(m, n, ans, x, y, visited, path);
                       path.pop_back();
                   }
                   //Right
                   newx = x;
                   newy = y+1;
                   
                   if(isSafe(m, n, visited, newx, newy))
                   {
                       path.push_back('R');
                       solve(m, n, ans, x, y, visited, path);
                       path.pop_back();
                   }
                   
                   newx = x-1;
                   newy = y;
                   //Up
                   if(isSafe(m, n, visited, newx, newy))
                   {
                       path.push_back('U');
                       solve(m, n, ans, x, y, visited, path);
                       path.pop_back();
                   }
                   
                   visited[x][y] = 0;
               }

int main()
{
    vector<vector<int>> maze ={{1, 0, 0, 0},
                               {1, 1, 0, 0},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
    int size = maze.size();
    vector<string> ans;
    //Condtion Check if the arraay is empty
    if(maze[0][0] == 0)
    {
        return ans;
    }

    //starting of maze pointed
    int srcx = 0;
    int srcy = 0;


    //Createing new array which we gonna initialize with zerp ans size of maze 
    vector<vector<int>> visited = maze;

    for(int i = 0;i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            visited[x][y] = 0;
        }
    }

    //Creating String to store path
    string path = " ";

    //function call
    solve(maze, size, srcx, srcy, visited, ans, path);

    //Sorting by order
    sort(ans.begin(), ans.end());


    return 0;
}