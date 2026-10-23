#include<iostream>
using namespace std;
int main()
{
    int digit=0;
    int alpha=0;
    int alnum=0;
    int lower=0;
    int upper=0;
   string s="SandhyaUpadhyay1234@gmail.com";
   for(char c:s)
   {
         if(isdigit(c))
          {
                digit++;
          }
          else if(isalpha(c))
          {
                alpha++;
          }
          else if(isalnum(c))
          {
                alnum++;
          }
          else if(islower(c))
          {
                lower++;
          }
          else if(isupper(c))
          {
                upper++;
          }
   }
   cout<<"Digits: "<<digit<<endl;
   cout<<"Alphabets: "<<alpha<<endl;
   cout<<"Alphanumeric: "<<alnum<<endl;
   cout<<"Lowercase: "<<lower<<endl;
   cout<<"Uppercase: "<<upper<<endl;
    return 0;
}