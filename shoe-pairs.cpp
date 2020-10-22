/*
* Problem link:
* https://csacademy.com/contest/archive/task/shoe-pairs/
*/

#include <iostream>

using namespace std;

int main() {
    int T;
    int shoes_size[1000];
    char shoes_pair[1000];
    int res = 0;
    
    cin >> T;
    for(int test = 0; test < T; test++){
        cin >> shoes_size[test] >> shoes_pair[test];
    }
    for(int i = 0; i < (T - 1); i++){
        if(shoes_size[i] != -1){
            for(int j = i; j < T; j++){
                if(shoes_size[i] == shoes_size[j] && shoes_pair[i] != shoes_pair[j]){
                    res++;
                    shoes_size[j] = -1;
                    break;
                }
            }
        }
    }
    cout << res;
    
    return 0;
}

