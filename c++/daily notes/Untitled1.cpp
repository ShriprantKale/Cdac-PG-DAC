1)scan 10 no count positive and negative element and sum of array
int ar[10],pos=0,neg=0,sum=0;
for (int i=0;i<=10;i++){
	cin>>ar[i];	
	if(ar[i]>0){
		pos++;		
	}
	else{
		neg++;
	}
	sum=sum+ar[i];
}

cout<<"\n total count of even no is:"<< pos;	
cout<<"\n total count of odd no is:"<< neg;
cout<<"\n total sum is:"<< sum;
-------------------------------------------------------------------------------
2)scan array a and b and calculate the sum of both

int ar[5],arr[5],x=0,y=0,sum=0;
cout <<"ar is=";
for (int i=0;i<=5;i++){
	cin>>ar[i];	
	x=x+ar[i];
}

cout <<"arr is=";
for (int j=0;j<=5;j++){
	cin>>ar[j];	
	y=x+arr[j];
}
sum=x+y;
cout<<"\n total sum is:"<< sum;

-----------------------------------------------------------------------------
/*
 Q3 Write a program scan array and copy only positive numbers into
new array and print how many number copied.
*/
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int s[5],i,j=0,s1[5];
//	cout<<"Enter array elements\n";
//	
//	for(i=0;i<5;i++)
//	{
//		cout<<"\na["<<i<<"]=";
//		cin>>s[i];
//		if(s[i]>0)
//		{
//			s1[j]=s[i];
//			j++;
//		}
//	}
//	for(int i =0; i<j; i++)
//	{
//		cout<<s1[i];
//	}
//	return 0;
//}
---------------------------------------------------------------------
/*
 Q 5  Write a program scan array which is a combination of positive and negative
numbers replace all negative number by Zero(0) and print total replacement.
*/

//#include<iostream>
//using namespace std;
//
//main()
//{
//	int a[5],i,replacement=0;
//	cout<<"Enter array elements";
//	
//	for(int i=0;i<5;i++)
//	{
//		cout<<"\na["<<i<<"]=";
//		cin>>a[i];
//		
//		if(a[i]<0)
//		{
//			a[i]=0;
//			replacement++;
//		}
//	}
//	for(int i=0;i<5;i++)
//	{
//		cout<<"\na["<<i<<"]="<<a[i];
//	}
//	cout<<"\ncount : "<<replacement;
//}

----------------------------------------------------------------------------

q6 Write a program scan string and count total vowels.
*/

#include<iostream>
using namespace std;

main()
{
	char a[21];
	int countvowels=0;
	cout<<"\nEnter the vowels";
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		cout<<"\na["<<i<<"]=";
		
		switch(toupper(a[i])){
			case 'A':
				countvowels++;
				break;
			
			case 'E':
				countvowels++;
				break;
				
			case 'I':
				countvowels++;
				break;
				
			case 'O':
				countvowels++;
				break;
				
			case 'U':
				countvowels++;
				break;
		}
			
					
	}
	cout<<countvowels;
}

---------------------------------------------------------------------------------------


//8. write a program scan a string and replace all 'a' with 'Z' and 
//   print replace string and total replacement
//#include <iostream>
//using namespace std;
//int main(){
//	char s[45];
//	char s1[20];
//	int totalReplacement = 0;
//	cout<<"\nEnter a string : ";
//	gets(s);
//	for(int i =0; i<strlen(s); i++){
//		if(s[i] == 'a'){
//			s[i] ='Z';
//		}
//		cout<<s[i];
//	}
//	cout<<"\n";
//	cout<<"Total Replacement = "<< totalReplacement;
//}

------------------------------------------------------------------------------------------

//9. write a program scan string and replace empty space with $ sign
//#include <iostream>
//using namespace std;
//int main(){
//	char s[34];
//	gets(s);
//	for(int i =0; i<strlen(s); i++){
//		if(s[i]==' '){
//			s[i] = '$';
//		}
//		cout<<s[i];
//	}
//	return 0;
//}

--------------------------------------------------------------------------------------------
10)prg to define 2D array and print max no with row and index
int a[2][3],max=0;
cout<<"\n Enter the Matrix:";
for(int i=0;i<2;i++)   //Row
{
	for (int j=0;j<3;j++)//column 
	{
	 cin>>a[i][j];
	 while(a[i][j]>max){
	 	max=a[i][j];
	 }
}
}
cout<<"\n MAximum Value is"<<max;
--------------------------------------------------------------------------------------------

Q11
//write aprogram which perform addition of two matrix into third matrix.
//#include <iostream>
//using namespace std;
//int main(){
//	int n, m;
//	cin>>n>>m;
//	int a[n][m];
//	int b[n][m];
//	int c[n][m];
//	for(int i =0; i<n; i++){
//		for(int j= 0; j<m; j++){
//			cout<<"\nenter value for a";
//			cin>>a[i][j];
//			cout<<"\nenter value for b";
//			cin>>b[i][j];
//		}
//	}
//	cout<<"\n";
//	for(int i =0; i<n; i++){
//		for(int j= 0; j<m; j++){
//			c[i][j] = a[i][j] + b[i][j];
//			cout<<"\t"<<c[i][j];
//		}
//		cout<<"\n";
//	}
//return 0;
//}
//

------------------------------------------------------------------------------------------
//12. write a program which replace all negative value from 
//matrix 0 and print total replacement
//#include<iostream>
//using namespace std;
//int main(){
//	int n, m, totalReplacement =0;
//	cin >> n>>m;
//	int a[n][m];
//	for(int i = 0; i<n; i++){
//		for(int j =0; j<m; j++){
//			cin>>a[i][j];
//		}
//	}
//	for(int i = 0; i<n; i++){
//		for(int j =0; j<m; j++){
//			if(a[i][j]<0){
//				a[i][j] =0;
//				totalReplacement++;
//			}
//			cout<<"\t"<<a[i][j];
//		}
//		cout<<"\n";
//	}
//	cout<<"total Number of replacement = "<<totalReplacement;
//	return 0;
//}
--------------------------------------------------------------------------------------------------

//13 write a program of menu drive create menu as
//	a.addition
//  b.substraction
//  c.multiplication
//#include<iostream>
//using namespace std;
//	int add(int x, int y){
//		int c = x + y;
//		return c;
//	}
//	int substract(int x, int y){
//		int c;
//		if(x>=y){
//			c = x-y;
//		}
//		else{
//			c = y-x;
//		}
//		return c;
//	}
//	int Multiply(int x, int y){
//		return x*y;
//	}
//int main(){
//	int a, b;
//	cout<<"\nEnter two digits for calculation :";
//	cin>>a>>b;
//	cout<<"\nEnter the number to doing calculation";
//	cout<<"\nFor Addition type 1 ";
//	cout<<"\nFor Substraction type 2 ";
//	cout<<"\nFor Multiplication type 3 ";
//	int choice;
//	cout <<"\n";
//	cin>>choice;
//	cout<<"\nYou enter = "<<choice;
//	switch(choice){
//		case 1:
//			cout<<"\nAddition = "<<add(a, b);
//			break;
//		case 2:
//			cout<<"\nSubstraction = "<<substract(a,b);
//			break;
//		case 3:
//			cout<<"\nMultiplication = "<<Multiply(a, b);
//			break;
//		default:
//			cout<<"\nEntered wrong choice";
//	}
//}
-------------------------------------------------------------------------------------------------------
14)write a prg scan 2 no and swap nos using function
#include <iostream>
using namespace std;
void cube(int x){
	int y;
	y=x*x*x;
	cout<<"\n Cube of"<<x<<"is"<<y;
}

int main (){
int a;
cout<<"\n Enter a no:";
cin>>a;
cube(a);
----------------------------------------------------------------------------------------------------------
15. Write a program which scan number and calculate the factorial of number
using function

#include<iostream>
using namespace std;

fact(int n)
{
	int fact=1;
	
	fact=1;
	
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factoial Number"<<fact;
}
main()
{
	int n1;
	
	cout<<"Enter the number";
	cin>>n1;
	
	fact(n1);
------------------------------------------------------------------------------------------
//17. write a program print scan number and print number is prime or not
// using function
//  #include<iostream>
//  using namespace std;
//
//
//	void primeOrNot(int x){
//		for(int i = 2; i<=(x/2); i++){
//			if(x%i ==0){
//				cout<<x <<" No a prime Number";
//				break;
//			}	
//		}
//		cout<<x<<" Prime Number";
//	}
//	int main(){
//		int a;
//		cout<<"\Enter a Number : ";
//		cin>>a;
//		primeOrNot(a);
//	return 0;
//	}


