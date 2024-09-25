// que 1 addition
//
//#include<iostream>
//using namespace std;
//int add(int a,int b)
//{
//	return a+b;
//}
//int main()
//{
//	int num1,num2;
//	cout<<"\nEnter two numbers:";
//	cin>>num1>>num2;
//	int result=add(num1,num2);
//	cout<<"\nthe total is:"<<result;
//	
//		return 0;
//}

//que 2 square
//#include<iostream>
//using namespace std;
//double square(double num)
//{ 
//return num*num;
//}
//int main(){
//	double num;
//	cout<<"\nEnter a number:";
//	cin>>num;
//	double result=square(num);
//	cout<<"\nThe square of"<<num<<"is"<<result;
//
//}

//03

//#include<iostream>
//using namespace std;
//void swap(int a, int b){
//	cout<<"\nBefore swapping: a = "<<a<<","<<" b = "<<b;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"\nAfter swapping: a = "<<a<<","<<" b = "<<b;
//}
//
//main(){
//	swap(4,5);
//}
//
//
////04
//#include<iostream>
//using namespace std;
//void even_odd(int n){
//	if(n%2==0){
//		cout<<"\nThe entered number is Even.";
//	}
//	else{
//		cout<<"\nThe entered number is odd.";
//	}
//}
//
//main(){
//	int n;
//	cout<<"Enter the value of n ";
//	cin>>n;
//	even_odd(n);
//}

//
////05
//#include<iostream>
//using namespace std;
//int sum(int n){
//	int fact=1;
//	int add=0;
//	for(int i=1;i<=n;i++){
//		fact*=i;
//		add+=fact/i;
//	}
//	return add;
//}
//
//main(){
//	int n;
//	cout<<"Enter the no : ";
//	cin>>n;
//	cout<<"\nThe sum of the series is: "<<sum(n);
//	
//}

//
////07
#include<iostream>
using namespace std;
void prime(int n){
	int flag=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag = 0;
		}
		
	
	}
	
	
	if(flag==1){
		cout<<"\nThe number "<<n<<" is a prime number.";
		}
	else{
		cout<<"\nThe number "<<n<<" is Not a prime number.";
}
}
int main()
{
	int n;
	cout<<"\nEnter the no. ";
	cin>>n;
	prime(n);

return 0;
}
//
//
////08
//#include<iostream>
//using namespace std;
//
//void Largest(int a[], int size){
//	int lar_no=a[0];
//	for(int i=0;i<size;i++){
//		if(a[i]>lar_no){
//			lar_no=a[i];
//		}
//	}
//	cout<<"\nThe largest element in the array is: "<<lar_no;
//}
//main(){
//	int arr[10], size;
//	cout<<"\nEnter the size of arr : ";
//	cin>>size;
//	
//	for(int i=0;i<size;i++){
//		cout<<"\nEnter the element of "<<i<<" : ";
//		cin>>arr[i];
//	}
//	cout<<"\nThe arr is ";
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<",";
//	}
//	Largest(arr,size);
//}
////12
//#include<iostream>
//using namespace std;
//
//void Max_Min(int a[], int size){
//	int min=a[0];
//	int max=a[0];
//	for(int i=0;i<size;i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//		if(a[i]<min){
//			min=a[i];
//		}
//	}
//	cout<<"\nMinimum value is: "<<min<<" Maximum value is: "<<max;
//}
//main(){
//	int arr[10], size;
//	cout<<"\nEnter the size of arr : ";
//	cin>>size;
//	
//	for(int i=0;i<size;i++){
//		cout<<"\nEnter the element of "<<i<<" : ";
//		cin>>arr[i];
//	}
//	cout<<"\nThe arr is ";
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<",";
//	}
//	Max_Min(arr,size);
//}
