#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,s,b,ss,bb;
    cin >> n;
    int a[n][2];
    for(i = 0;i < n;i++){
        cin >> a[i][0] >> a[i][1];
    }

    int dif,d[n],t;
	for(int j = 0;j < n;j++){
		t = a[j][0];
		a[j][0] = a[0][0];
		a[0][0] = t;
		t = a[j][1];
		a[j][1] = a[0][1];
		a[0][1] = t;
		s = a[0][0];
		b = a[0][1];
		d[j] = abs(s-b);
	    for(i = 1;i < n;i++){
	        ss = s*a[i][0];
	        bb = b+a[i][1];
	        dif = abs(ss-bb);
	        cout << dif << " ";
	        if(dif < d[j]){
	        	cout << "ok";
	        	s = ss;
	        	b = bb;
				d[j] = dif;
			}
	    }
	    t = a[j][0];
		a[j][0] = a[0][0];
		a[0][0] = t;
		t = a[j][1];
		a[j][1] = a[0][1];
		a[0][1] = t;
		cout << endl;
	}
	int m = d[0];
	for(i = 0;i < n;i++){
		cout << d[i] << endl;
	}
	cout << m;
}
