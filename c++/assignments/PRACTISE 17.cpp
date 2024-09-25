//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//	ifstream inputfile("source.txt");
//	int lines=0,words=0,alphabets=0,digits=0,symbols=0;
//	char c;
//	while(inputfile.get(c)){
//		if(c=='\n'){
//			lines++;
//			words++;
//		}
//		if(c==' '){
//			words++;
//		}
//		if((c >='a'&&c<='z')||(c >='A'&&c<='Z')){
//			alphabets++;
//		}
//		if(c>='0'&& c<='9'){
//			digits++;
//		}
//		if(!((c>='a'&&c<='z'||c>='A'&&c<='Z')||(c>='0'||c<='9')||isspace(c) )){
//			symbols++;
//		}
//		if(!isspace(c)){
//			words++;
//		}
//		//below information alwys outside the loop
//		
//	}
//	cout<<"number of lines"<<lines<<endl;
//		cout<<"number of words"<<words<<endl;
//		cout<<"number of alphabets"<<alphabets<<endl;
//		cout<<"number of digits"<<digits<<endl;
//		cout<<"number of symbols"<<symbols<<endl;
//	inputfile.close();
//	return 0;
//}
