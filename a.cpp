#include<iostream>
#include<string>

int c,d;
int f(int a,int b){
	&c=a;
	&d=b;
}

int main(){
	int a=20,b=20;
	f(a,b);
	std::cout<<c<<d;

}
