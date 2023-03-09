#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int value[] = {-7,3,5,10};
    int lenght = sizeof(value)/sizeof(*value);
    int temp;
    for (int a=1;a<lenght;a++){
    	for (int b=0;b<lenght-a;b++){
    		if(value[b] > value[b+1]){
    			temp = value[b];
    			value[b] = value[b+1];
    			value[b+1] = temp;
			}
		}
	}
	cout<<value[0];
	cout<<"Output Sorting :"<<endl;
	for(int x=0; x < lenght; x++){
		cout<<" "<<value[x]<<endl;
	}
    return 0;
}
