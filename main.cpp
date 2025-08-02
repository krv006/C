#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "a-> ";
    cin >> n;

    cout << endl;

/*
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == n / 2){
                cout << " * ";
            }else{
                cout << "   ";
            }
        }
        cout << endl;

    }
 */


/*
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n- 1 || i== n / 2){
                cout << " * ";
            }else{
                cout << "   ";
            }
        }
        cout << endl;

    }
*/

/*
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i <= j){
                cout << " * ";
            }else{
                cout << "   ";
            }
        }
        cout << endl;

    }
 */

/*
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n-1 || i == n / 2 || j == n / 2){
                cout << " * ";
            }else{
                cout << "   ";
            }
        }
        cout << endl;

    }
 */

/*
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << " * ";
            } else cout << "   ";
        }
        cout << endl;
    }
 */


/*
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << " 0 ";
            } else cout << " 1 ";
        }
        cout << endl;
    }
 */


/*
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << " 0 ";
            } else cout << " 1 ";
        }
        cout << endl;
    }

 */


/*
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << char('A'+i);
            cout << " " ;
        }
        cout << endl;
    }

 */

/*
     for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }

 */

/*
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j >= n - 1) {
                cout << (i + j)-(n-2) ;
            } else cout << " ";
        }

        cout << endl;
    }
 */







    return 0;
}