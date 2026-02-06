#include <iostream>
#include <string>
using namespace std;

/*
Output:
this
this is
this is the
this is the best
this is the best way
this is the best way to
this is the best way to waste
this is the best way to waste the
this is the best way to waste the time
*/

int main() {
    string str = "this is the best way to waste the time";
    string temp = "";

    for (char c : str) {
        temp += c;
        if (c == ' ')
            cout << temp << endl;
    }
    cout << temp << endl;
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "this is the best way to waste the time";
//     string temp;

//     for (char c : str) {
//         temp += c;
//         if (c == ' ')
//             cout << temp << endl;
//     }
//     cout << temp << endl;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "this is the best way to waste the time";

//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] == ' ')
//             cout << str.substr(0, i) << endl;
//     }
//     cout << str << endl;
//     return 0;
// }
