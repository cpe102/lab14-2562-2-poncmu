#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b, int *c, int *d)
{
         int arr[4]={*a,*b,*c,*d};
		 int num[4];
		 num[0]=arr[rand()%4];
		 while(true)
		 {
			 num[1]=arr[rand()%4];
			 if(num[1]!=num[0])
			 break;
		 }
		 while(true)
		 {
			 num[2]=arr[rand()%4];
			 if(num[2]!=num[1] && num[2]!=num[0])
			 break;
		 }
		 while(true)
		 {
			 num[3]=arr[rand()%4];
			 if(num[3]!=num[0] && num[3]!=num[1] && num[3]!=num[2])
			 break;
		 }
	    *a=num[0],*b=num[1],*c=num[2],*d=num[3];
}
//Write definition of shuffle() using pointer here 
