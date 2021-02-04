#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
int key_sum(const string& key);
string simple_encrypt(const string& input,string key);
string simple_decrypt(const string& input,string key);
string complex_encrypt(const string& input,string key);
string complex_decrypt(const string& input,string key);
string input_file_reader(const string& address);
vector<int> decrypt_out(const string& input);
void output_file_writer(const string& address,const string &txt);
int main() {
    string type,level,input_address,output_address,key,output,input;
    cin>>type>>level>>key>>input_address>>output_address;
    input = input_file_reader(input_address);
    if (!type.compare("encrypt")){
        if (!level.compare("simple")){
            output = simple_encrypt(input,key);
        }else{
            output = complex_encrypt(input,key);
        }
    }else {
        if (!level.compare("simple")){
            output = simple_decrypt(input,key);
        }else{
            output = complex_decrypt(input,key);
        }
    }
    output_file_writer(output_address,output);
}
string simple_encrypt(const string& input,string key){
    int size = key.length();
    int temp;
    string output = "";
    for (int i = 0 ; i < input.length();i++){
        temp = input[i] + key[i%size];
        output+=to_string(temp)+"\n";
    }
    output+="";
    return output;
}
string simple_decrypt(const string& input,string key){
    string output = "";
    int size = key.length();
    char temp ;
    vector<int> vect = decrypt_out(input);
    for ( int i = 0 ; i < vect.size(); i++){
        temp = vect[i] - key[i%size];
        output += temp;
    }
    return output;
}
string complex_encrypt(const string& input,string key){
    srand(key_sum(key));
    int temp;
    string output = "";
    for (int i = 0 ; i < input.length();i++){
        temp = input[i] + rand()%11;
        output+=to_string(temp)+"\n";
    }
    output+="";
    return output;
}
string complex_decrypt(const string& input,string key){
    string output = "";
    srand(key_sum(key));
    char temp ;
    vector<int> vect = decrypt_out(input);
    for ( int i = 0 ; i < vect.size(); i++){
        temp = vect[i] - rand()%11;
        output += temp;
    }
    return output;
}
string input_file_reader(const string& address){

}
void output_file_writer(const string& address,const string &txt){
    cout<<txt;
}
vector<int> decrypt_out(const string& input){
    vector<int> my_char;
    string temp = "";
    char c;
   for (int i = 0 ; i < input.length() ; i++){
       c = input[i];
       if (c!= '\n'){
           temp+=input[i];
           continue;
       }
       if(temp.compare(""))
            my_char.push_back(stoi(temp,nullptr,10));
       temp = "";
   }
    return my_char;
}
int key_sum(const string& key){
    int sum = 0;
    for_each(key.begin(),key.end(), [&sum] (char const &c) mutable  {
        sum+= c;
    });
    return sum;
}