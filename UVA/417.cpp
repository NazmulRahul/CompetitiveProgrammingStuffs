#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'
#define fastio    	ios::sync_with_stdio(false)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)
using namespace std;
//way better code is at the end :)
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif

	int cnt = 0;
	map<string, int>m;
	string str = "a";
	string str2 = "ab";
	string str3 = "abc";
	string str4 = "abcd";
	string str5 = "abcde";
	for (int i = 0; i < 26; i++) {
		m[str] = ++cnt;
		str[0] += 1;
	}

	for (int i = 0; i < 25; i++) {
		for (int j = i + 1; j < 26; j++) {
			m[str2] = ++cnt;
			str2[1] += 1;

		}
		str2[0] += 1;
		str2[1] = str2[0] + 1;
	}

	for (int i = 0; i < 24; i++) {
		for (int j = i + 1; j < 25; j++) {
			for (int k = j + 1; k < 26; k++) {
				m[str3] = ++cnt;
				str3[2] += 1;
			}
			str3[1] += 1;
			str3[2] = str3[1] + 1;
		}
		str3[0] += 1;
		str3[1] = str3[0] + 1;
		str3[2] = str3[1] + 1;

	}
	for (int i = 0; i < 23; i++) {
		for (int j = i + 1; j < 24; j++) {
			for (int k = j + 1; k < 25; k++) {
				for (int l = k + 1; l < 26; l++) {
					m[str4] = ++cnt;
					str4[3] += 1;
				}
				str4[2] += 1;
				str4[3] = str4[2] + 1;
			}
			str4[1] += 1;
			str4[2] = str4[1] + 1;
			str4[3] = str4[2] + 1;
		}
		str4[0] += 1;
		str4[1] = str4[0] + 1;
		str4[2] = str4[1] + 1;
		str4[3] = str4[2] + 1;
	}
	for (int i = 0; i < 22; i++) {
		for (int j = i + 1; j < 23; j++) {
			for (int k = j + 1; k < 24; k++) {
				for (int l = k + 1; l < 25; l++) {
					for (int n = l + 1; n < 26; n++) {
						m[str5] = ++cnt;
						str5[4] += 1;
					}
					str5[3] += 1;
					str5[4] = str5[3] + 1;
				}
				str5[2] += 1;
				str5[3] = str5[2] + 1;
				str5[4] = str5[3] + 1;
			}
			str5[1] += 1;
			str5[2] = str5[1] + 1;
			str5[3] = str5[2] + 1;
			str5[4] = str5[3] + 1;
		}
		str5[0] += 1;
		str5[1] = str5[0] + 1;
		str5[2] = str5[1] + 1;
		str5[3] = str5[2] + 1;
		str5[4] = str5[3] + 1;
	}
	// cout << m["cd"] << endl;
	string ans;
	while (cin >> ans) {
		cout << m[ans] << endl;
	}
	return 0;
}

/*
 #include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,int> mymap;
void initiate()
{
    int sum=1,i,j,k,l,m;
    string str="abcdefghijklmnopqrstuvwxyz";
    string a,b,c,d,e,s;
    for(i=0;i<26;i++)
    {
        s=str[i];
        mymap[s]=sum++;
    }
    for(i=0;i<26;i++)
    {
        a=str[i];
        for(j=i+1;j<26;j++)
        {
            b=str[j];
            s=a+b;
            mymap[s]=sum++;
        }
    }
    for(i=0;i<26;i++)
    {
        a=str[i];
        for(j=i+1;j<26;j++)
        {
            b=str[j];
            for(k=j+1;k<26;k++)
            {
                c=str[k];
                s=a+b+c;
                mymap[s]=sum++;
            }
        }
    }
    for(i=0;i<26;i++)
    {
        a=str[i];
        for(j=i+1;j<26;j++)
        {
            b=str[j];
            for(k=j+1;k<26;k++)
            {
                c=str[k];
                for(l=k+1;l<26;l++)
                {
                    d=str[l];
                    s=a+b+c+d;
                    mymap[s]=sum++;
                }
            }
        }
    }
    for(i=0;i<26;i++)
    {
        a=str[i];
        for(j=i+1;j<26;j++)
        {
            b=str[j];
            for(k=j+1;k<26;k++)
            {
                c=str[k];
                for(l=k+1;l<26;l++)
                {
                    d=str[l];
                    for(m=l+1;m<26;m++)
                    {
                        e=str[m];
                        s=a+b+c+d+e;
                        mymap[s]=sum++;
                    }
                }
            }
        }
    }

}
int main()
{
    string str1;
    initiate();
    while(cin>>str1)
    {
        cout<<mymap[str1]<<endl;
    }
    return 0;
}
*/