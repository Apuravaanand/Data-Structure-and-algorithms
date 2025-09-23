#include <iostream>
#include <cstring>
using namespace std;

int palindrome(char word[], int n){
    int s = 0, e = n - 1;
    while (s <= e){
        if (word[s++] == word[e--]){
            continue;
        }
        else{
            return -1;
        }
    }
    return 1;
}
int main(){
    char word[] = "cashsac";
    cout << palindrome(word, strlen(word));
    return 0;
}