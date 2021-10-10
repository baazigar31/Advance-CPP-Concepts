#include<bits/stdc++.h>
using namespace std;

void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
}

struct temp {
    int x, y;
    temp() {
        std::cout<<"Constructor called"<<"\n";
    }
    ~temp() {
        std::cout<<"Destructor Called"<<"\n";
    }
};

int main(int argc, char const *argv[])
{

	file_i_o();
	/* code */
	int* x = new int;
	// std::cout<<*x;

	// int * ptr= new int[5]();
	// for(int i=0;i<5;i++){
	// 	cout<<ptr[i]<<" ";
	// }
 
 	// 2 d array demo
	// int* * arr = new int*[2];
	// for(int i=0;i<2;i++){
	// 	arr[i]=new int[5]();
	// }
	// for(int i=0;i<2;i++){
	// 	for(int j=0;j<5;j++){
	// 		cout<<arr[i][j];
	// 	}
	// 	cout<<endl;
	// }

	void *p = malloc(5);
	int *p1 =(int*) malloc(5);
	// free(p1);
	// delete p1;
	temp *a=new temp[6];
	// delete [] a;
	free(a);




	return 0;
}