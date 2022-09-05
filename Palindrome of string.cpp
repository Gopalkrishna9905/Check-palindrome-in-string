 #include<iostream>
 using namespace std;
 
 

 int Palindrome(char ch[], int n)
 {
 	int start =0;
 	int end = n-1;
 	while(start<=end)
 	{
 		if(ch[start]!=ch[end])
 		{
 			return 0;
		 }
		 else{
		 	start++;
		 	end--;
		 }
		 return 1;
	 }
 }

 int main()
 {
   char ch[10];
   cout<<"Enter string : ";
   cin>>ch; 	
   
   int count =0;
   for(int i =0;ch[i]!='\0';i++)
   {
   	count++;
   }
   
   cout<<" Length of string : " <<count << endl;
   
  cout<<"The String is palindrome or not : " << Palindrome(ch,count);
   
 }

