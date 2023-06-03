#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    int sum = 0, maximum = INT_MIN;
    for(int x = 0; x < arr.size()-2; x++){
        for(int y = 0; y < arr[x].size()-2; y++){
            sum  = arr[x][y] + arr[x][y+1] + arr[x][y+2]; // Row 1
            sum += arr[x+1][y+1];                           // Row 2
            sum += arr[x+2][y] + arr[x+2][y+1] + arr[x+2][y+2]; // Row 3
            maximum = max(sum, maximum);
        }
    }
    return maximum;
}

int main(){
    vector<vector<int>> vec = {
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}
    };
    cout << hourglassSum(vec) << endl;
}