//#include<iostream>
//using namespace std;
//main()
//{
//int ar[10],pos=0,neg=0,sum=0;
//for (int i=0;i<=10;i++){
//	cin>>ar[i];	
//	if(ar[i]>0){
//		pos++;		
//	}
//	else{
//		neg++;
//	}
//	sum=sum+ar[i];
//}
//
//cout<<"\n total count of even no is:"<< pos;	
//cout<<"\n total count of odd no is:"<< neg;
//cout<<"\n total sum is:"<< sum;
//}


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
//		}5
//	}
//	for(int i =0; i<j; i++)
//	{
//		cout<<s1[i];
//	}
//	return 0;
//}


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



