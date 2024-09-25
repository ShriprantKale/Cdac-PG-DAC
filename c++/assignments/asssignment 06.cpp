////create a class named 'student' with a string variable 'name' and integer variable 'roll_no'assign 
//// the value of roll_no as 2and that name as john by creating an object of the class student
//
//#include<iostream>
//using namespace std;
//class student {
//	private:
//		string name;
//		int roll_no;
//	
//	public:
//		student( string n,int r){
//			name = n;
//			roll_no=r;
//			
//		}
//		void get (){
//			cout<<"name:"<<name<<endl;
//			cout<<"rollno:"<<roll_no<<endl;
//			
//		}
//}; 
//main(){
//	student student("john",2);
//	student.get();
//	 return 0;

#include<iostream>
using namespace std;
class student {
	private:
	//member add kro
	int roll_number;
	string phon_numbers;
	string name;
	string address;
	
	public:
		//member function student information
		void get( int roll,string,phone,string addr,string student_name){
			roll_number = roll;
			phone_number= phone;
			address = addr;
			name=student_name;
		}
		//for showing student details
		void show(){
			cout<<"\nname:"<<name;
			//endl no need show
			cout<<"\nroll number:"<<roll_number;
			cin>>roll_number;
			cout<<"\nphone number:"<<<phone_number;
			cin>>phone_number;
			cout<<"\naddress:"<<address;
			cin>>address;
			cout<<"\n-------------------"<<;
	    	cin>>---;
		}
};
main()
{
	stuudent sam,john;
	sam.get(  )
}
