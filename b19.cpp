#include<iostream>
#include<algorithm>


using namespace std;

int main()
{  
  string s="poeeurhcfxb";
	 transform(s.begin(),s.end(),s.begin(),::toupper);
     cout<<s<<endl;
     transform(s.begin(),s.end(),s.begin(),::tolower);
     cout<<s;
	}
	