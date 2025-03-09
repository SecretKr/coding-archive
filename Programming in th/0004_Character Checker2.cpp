#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    bool c = false, s = false,i = 0;
    char a[10000];
    cin >> a;
    int j = strlen(a);
    while(i < j && (c&&s) == false){
        if('A' <= a[i] && a[i] <= 'Z'){
            c = true;
        }
        if('a' <= a[i] && a[i] <= 'z'){
            s = true;
        }
        i++;
    }
    if((c&&s) == true){
        cout << "Mix";
    }
    else{
        if(c == true){
            cout << "All Capital Letter";
        }
        if(s == true){
            cout << "All Small Letter";
        }
    }
}
