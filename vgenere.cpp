#include<bits/stdc++.h>

using namespace std;

string enc(string text,string key){
}

string dec(string text,string key){}


int main(){
  string key;
  string text;
  int ch;
  cout<<"Enter if you want to 1)encrypt or 2)decrypt 3)exit:\n";
  cin>>ch;
  while(true){
    if(ch==1){
      cout<<"enter the text to be encrypted:\n";
      cin>>text;
      cout<<"enter the key\n";
      cin>>key;
      cout<<enc(text,key)<<"\n";
    }
    else if(ch==2){
      cout<<"enter the text to be decrypted:\n";
      cin>>text;
      cout<<"enter the key:\n";
      cin>>key;
      cout<<dec(text,key)<<"\n";
    }
    else{
      break;
    }
  }
  return 0;
}
