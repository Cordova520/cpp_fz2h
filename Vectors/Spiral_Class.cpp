#include<iostream>
#include<vector>

class Spiral
{

public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix){
        std::vector<int> ans;
        int rows = matrix.size();
        if (rows == 0) return ans;
        int columns = matrix[0].size();

        int star_row = 0;
        int end_row = rows-1;
        int start_column = 0;
        int end_column = columns-1;
        int count = 0;

        while (star_row<=end_row && start_column<=end_column)
        {
            //Print start row
            for (int idx = start_column; idx <= end_column; idx++)
            {
                ans.push_back(matrix[star_row][idx]);
                count++;
            }
            star_row++;
            if (count == rows*columns) return ans;
            //Print End Column
            for (int  jdx = star_row; jdx <= end_row; jdx++)
            {
                ans.push_back(matrix[jdx][end_column]);
                count++;
            }
            end_column--;
            if (count == rows*columns) return ans;
            //Print End Row
            for (int ydx = end_column; ydx >= start_column; ydx--)
            {
                ans.push_back(matrix[end_row][ydx]);
                count++;
            }
            end_row--;
            if (count == rows*columns) return ans;
            //Print the start column
            for (int zdx = end_row; zdx >= star_row; zdx--)
            {
                ans.push_back(matrix[zdx][start_column]);
                count++;
            }
            start_column++;
            if (count == rows*columns) return ans;
        }
        return ans;
    }
    Spiral(/* args */);
};

Spiral::Spiral(/* args */)
{
}

