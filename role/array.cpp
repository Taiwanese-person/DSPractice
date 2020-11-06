#include <iostream> 
using namespace std;
void dump(int a[], int c){
	for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
	cout<<"a["<<i<<"]["<<j<<"]="<<a[c++]<<endl;
	}
}
	
}
get(int e,int d,int a[],int c){
	return a[c++];
}
set(int e,int d,int v,int a[],int c){
	a[c++]=v;
}
int main() { 
     
int a[]={1,2,3,4,5,6};
int c=0;

dump(a,c);

}




