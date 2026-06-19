#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> tripletSum(vector<int> arr, int target) {

    vector<vector<int>> ans;

    for(int i = 0; i < arr.size(); i++) {

        for(int j = i + 1; j < arr.size(); j++) {

            for(int k = j + 1; k < arr.size(); k++) {

                if(arr[i] + arr[j] + arr[k] == target) {

                    vector<int> temp;

                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    ans.push_back(temp);
                }
            }
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int target = 15;

    vector<vector<int>> result = tripletSum(arr, target);

    for(auto v : result) {
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }

    return 0;
}