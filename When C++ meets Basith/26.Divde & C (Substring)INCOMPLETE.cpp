#include <iostream>
using namespace std;

int newbie(string a,string b){
	if(a.empty()){
		cout<<b<<" ";
		return 0;
	}
	string c = ;
	b = b.append();
	a.pop_back();
	
	newbie(a,b);
	b.pop_back();
	newbie(a,b);

	return 0;
}

int main(){
	string a = "abc";
	newbie(a,"");
	// a.pop_back();
	// cout<<;

	return 0;
}