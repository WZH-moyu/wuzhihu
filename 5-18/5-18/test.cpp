////#define _CRT_SECURE_NO_WARNINGS
////#include<iostream>
////#include<string>
////using namespace std;
////int main()
////{
////	string<int> 
////}
////public static Safelevel GetPwdSecurityLevel(String pPasswordStr)
////{
////
////	return null;
////}
//
//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//string s[7]={"VERY_WEAK","WEAK","AVERAGE","STRONG","VERY_STRONG","SECURE","VERY_SECURE"};
//int main()
//{    
//	string psd;   
//	int a=0,lf=0,uf=0,df=0,f=0;  
//	cin>>psd;   
//	if(psd.length()<=4)  
//		a+=5;   
//	else if(psd.length()>=8)    
//		a+=25;   
//	else    
//		a+=10;   
//	for(auto c:psd)   
//	{       
//		if(islower(c))  
//			lf=1;      
//		else if(isupper(c))  
//			uf=1;       
//		else if(isdigit(c))  
//			df<2 ? df++:df=2;   
//		else f<2 ? f++:f=2; 
//	}    
//	if(df)  
//	{       
//		df==2 ? a+=20:a+=10;   
//		if(lf==1&&uf==1&&f==1)   
//			a+=10;        
//		else if((lf==1||uf==1)&&f==1)  
//			a+=5;      
//		else if(lf==1||uf==1)   
//			a+=2;   
//	}   
//	f==2 ? a+=25:(f==1 ? a+=10:a+=0);    
//	uf+lf==2 ? a+=20:(lf+uf==1 ? a+=10:a+=0);  
//	 a>=90 ? cout<<s[6]:(a>=80 ? cout<<s[5]:(a>=70 ? cout<<s[4]:(a>=60 ? cout<<s[3]:(a>=50 ? cout<<s[2]:(a>=25 ? cout<<s[1]:cout<<s[0])))));
//	 system("pause");
//	 return 0;
//}