#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Declare variables to store count of each number
    int a = 0, b = 0, c = 0, d = 0,e = 0,f = 0, g = 0, h=0,i = 0,j = 0;
    string s;
    // Read given string from STDIN
    cin >> s;

    int s_len = s.length();

    // add constraints
    if(s_len>=1 || s_len<=100){
    // Iterate over each character in the string
    for(int z=0; z<s_len; z++) {

        // This can be done in a better way using hashing, which simplifies the implementation,
       

        // Check for each number in if else
        if(s[z] == '0') {
            a++;
        } else if(s[z] == '1') {
            b++;
        } else if(s[z] == '2') {
            c++;
        } else if(s[z] == '3') {
            d++;
        } else if(s[z] == '4') {
            e++;
        } else if(s[z] == '5') {
            f++;
        } else if(s[z] == '6') {
            g++;
        } else if(s[z] == '7') {
            h++;
        } else if(s[z] == '8') {
            i++;
        } else if(s[z] == '9') {
            j++;
        }
    } 
    

    // Print out the result to STDOUT
    cout << "0 " << a << endl;
    cout << "1 " << b << endl;
    cout << "2 " << c << endl;
    cout << "3 " << d << endl;
    cout << "4 " << e << endl;
    cout << "5 " << f << endl;
    cout << "6 " << g << endl;
    cout << "7 " << h << endl;
    cout << "8 " << i << endl;
    cout << "9 " << j << endl;
    
    }
    else {
        cout << "Invalid Input";
    }  
}
