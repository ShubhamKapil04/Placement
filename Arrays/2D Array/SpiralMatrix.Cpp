#include<iostream>
#include<vector>

using namespace std;


int main()
{

        vector<int> spiralOrder;
        vector<vector<int>> matrix;
        vector<int> ans;
        
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        
        int count = 0;
        int total = rowSize*colSize;
        
        // Index Intializing
        int StartingRow = 0;
        int endingCol = colSize - 1;
        int endingRow = rowSize - 1;
        int StartingCol = 0;
        
        while(count < total)
        {
            // print Starting row
            
            for(int index = StartingRow; count < total && index <= endingCol; index++ )
            {
                ans.push_back(matrix[StartingRow][index]);
                count++;
            }
            StartingRow++;
            
            // print ending Colm
            
            for(int index = StartingRow;  count < total && index <= endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            // printing last Row
            for(int index = endingCol;  count < total && index >= StartingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            // printing StartingCol
            
            for(int index = endingRow; count < total && index >= StartingRow; index--)
            {
                ans.push_back(matrix[index][StartingCol]);
                count++;
            }
            StartingCol++;
        }  
        return ans;
}