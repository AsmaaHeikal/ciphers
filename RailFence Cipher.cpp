//Author:Asmaa Heikal
//ID;20210067

#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
#include<cstring>
 using namespace std;

 int main()
 {
     cout << "what do you want to do now ?\n  1-cipher \n  2-decipher \n Enter a number : ";
     int n;
     cin >> n;
     cout << "Our Fixed Key is 3333333333333333333333333333333333333333"<< endl;
     cout << "Enter the message : ";
     string str;
     cin.ignore();
     //get the input as a line
     getline(cin,str);
     //remove all spaces from the input
     str.erase(remove(str.begin(), str.end(), ' '), str.end());
     int len =str.length();
     //convert each uppercase to lowercase
     for(int i=0;i<len;i++)
     {
         str[i]=tolower(str[i]);
     }
     int len1=0,len2=0,len3=0;
     //calculating the length of the character in first ,second and third line.
     if(len%4==1)
     {
         len1=(len/4)+1;
     }
     else
     {
         len1=len/4;
     }
     len2=len/2;
     len3=len-(len1+len2);

     if(n==1)
     {
         char arr1[len1];
         char arr2[len2];
         char arr3[len3];
         cout << "ciphered message is : ";
         int j=0;
         for(int i=0;i<len;i=i+4)
         {
             //this array will have the characters in first line
             arr1[j]=str[i];
             j++;
         }
         int k=0;
         for(int i=1;i<len;i=i+2)
         {
             //this array will have the characters in second line
             arr2[k]=str[i];
             k++;
         }
         int h=0;
         for(int i=2;i<len;i=i+4)
         {
             //this array will have the characters in third line
             arr3[h]=str[i];
             h++;
         }
         for(int i=0;i<len1;i++)
         {
             cout << arr1[i];
         }
         for(int i=0; i<len2;i++)
         {
             cout << arr2[i];
         }
         for(int i=0;i<len3;i++)
         {
             cout << arr3[i];
         }
     }
     else if(n==2)
     {
         char arr4[len1];
         char arr5[len2];
         char arr6[len3];
         cout << "the origin message was : ";
         //we will divide the string into 3 arrays each array have line of three lines
         for(int i=0;i<len1;i++)
         {
             arr4[i]=str[i];
         }
         int c=0;
         for(int k=len1;k<(len1+len2);k++)
         {
             arr5[c]=str[k];
             c++;
         }
         int c1=0;
         for(int j=(len1+len2);j<len;j++)
         {
             arr6[c1]=str[j];
             c1++;
         }
         int t=0,r=0,e=0;

         while(true)
         {
             //printing the arrays in this way will enable us to get the origin message
             if(t<len1)
             {
                 cout << arr4[t];
                 t++;
             }
             if((t+r+e)==len)
             {
                 break;
             }
             if(r<len2)
             {
                 cout << arr5[r];
                 r++;
             }
             if((t+r+e)==len)
             {
                 break;
             }
             if(e<len3)
             {
                 cout << arr6[e];
                 e++;
             }
             if((t+r+e)==len)
             {
                 break;
             }
             if(r<len2)
             {
                 cout << arr5[r];
                 r++;
             }
             if((t+r+e)==len)
             {
                 break;
             }
         }
     }
 }

