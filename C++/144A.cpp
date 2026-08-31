#include<bits/stdc++.h>

using namespace std;

int main(){
    int num_of_soilders;
    cin >> num_of_soilders;

    vector<int> soilders_height(num_of_soilders);
    for (int i=0; i<num_of_soilders; i++)
    {
        cin >> soilders_height[i];
    }

    int max_ind = max_element(soilders_height.begin(), soilders_height.end()) - soilders_height.begin();
    int min_ind = soilders_height.rend() - min_element(soilders_height.rbegin(), soilders_height.rend()) - 1;

    // cout << "Max is at index: " << max_ind << endl; 
    // cout << "Min is at index: " << min_ind << endl;


    int total_swaps = max_ind + (num_of_soilders - 1 - min_ind);
    if (max_ind > min_ind)
    {
        total_swaps--;
    }

    cout << total_swaps << endl;
    return 0;
}