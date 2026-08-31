#include<bits/stdc++.h>

using namespace std;

int main(){
    int num_of_level;
    cin >> num_of_level;

    set<int> passed_levels;

    int LittleX;
    cin >> LittleX;
    while(LittleX--){
        int num;
        cin >> num;
        if(num <= num_of_level && num > 0){
            passed_levels.insert(num);
        }
    }

    int LittleY;
    cin >> LittleY;
    while(LittleY--){
        int num;
        cin >> num;
        if(num <= num_of_level && num > 0){
            passed_levels.insert(num);
        }
    }

    if (num_of_level == passed_levels.size()){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    // cout << passed_levels.size() << endl;
    return 0;
}