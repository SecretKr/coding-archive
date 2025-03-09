/*#include<bits/stdc++.h>
#include <cstring>
using namespace std;
bool a[11],tw,tp;
char c,t;
char s[5005];
int i,j,n;

int main()
{
    cin >> n;
    for(i = 0;i < n;i++){
        scanf("%s",s);
        int len = strlen(s);
        if(s[len-1]%2 == 1 || (s[0] == 2 && len == 1)) cout << "T" << endl;
        else cout << "F" << endl;
    }
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    char* str = new char[1005];
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        int len = (int)strlen(str);
        if (str[len-1] % 2 == 1 || (str[0] == '2' && len == 1)) // (str[0] == '2' && str[1] == '\0')
            printf("T\n");
        else
            printf("F\n");

    }

    return 0;
}
