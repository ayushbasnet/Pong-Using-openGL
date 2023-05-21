#include<iostream>
#include<string.h>
using namespace std;
int chk(string str, string set)
{
	int len = str.length();
	int size = set.length();
	for(int n=0;n<len;n++)
	{ 
		for (int m=0; m<size; m++)
		{	
			if( str[n] == set[m])	
				break;
			else if(m==(size-1))	
			{
				return 0;
			}
			
		}
	}
	return 1;
}
int main()
{
	string set, str1,str2,temp;
	int a,b,len1,len2,s=0;
	cout<<"enter the set"<<endl;
	cin>>set;
	cout<<endl<<"Enter the first string"<<endl;
	cin>>str1;
	cout<<endl<<"Enter the second string"<<endl;
	cin>>str2;
	len1=str1.length();
	len2=str2.length();
	a = chk(str1,set);
	b = chk(str2,set);
	if( a ==1 && b ==1)
	{	
		if(len2 > len1)
		{
			temp =str1;
			str1 = str2;
			str2 = temp;
		}
		
		while(str2[s]!='\0')
		{	
			if(str2[s]!=str1[s])
			{
				cout<<"It is not a prefix."<<endl;
				return 1;
			}
			s++;
		}
		
		if (len1==len2)
		{
			cout<<"It is a improper prefix";
			return 0;
		}
		else
		{
			cout<<"It is a proper prefix";
			return 0;
		}
	}
}
