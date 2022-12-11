//Date: July-22-2022
//Name: Oleksandr Shyryayev
//Description: Rovarspraket language

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    string input;
    string arrConsonant[] = {"B", "C", "D", "F", "G", "H", "J", "K", "L", "M", "N", "P", "Q", "R", "S", "T", "V", "W", "X", "Y", "Z",
                            "b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"};
    vector <string> vec;

    cout << "Enter your text:\n";
    cout << " ---------------------------------------------------------------------" << endl;
    cout << "| " << setw(13) << "English ";
    cout << "| ";
    getline(cin, input);
    cout << " ---------------------------------------------------------------------" << endl;

    for(int i = 0; i < input.length(); i++){
        vec.push_back(input.substr(i, 1));

    }
    for(int y = 0; y < (sizeof(arrConsonant) / sizeof(string)); y++){
        for(int z = 0; z < vec.size(); z++){
            if(vec[z] == arrConsonant[y]){
                vec[z] = vec[z] + "o" + vec[z];
            }
        }
    }
    cout << "| " << setw(13) << "Rovarspraket ";
    cout << "| ";
    for(int w = 0; w < vec.size(); w++){
        cout << vec[w];
    }
    cout << endl;
    cout << " ---------------------------------------------------------------------" << endl;

    return 0;
}
