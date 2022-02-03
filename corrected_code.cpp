Corrected_code.cpp 

 #include<iostream> using namespace std; long factorial(int n); 

int main() { 

int n(0); 
cin>>n; 
long val=factorial(n); cout<<val; 
cin.get(); 
return 0; 

} 

long factorial(int n) { 

long result(1); while(n>0) 
{ 

result*=n; 

n--; } 

return result; } 

Output: 

[sbandi3@hopper3 ~]$ ./corrected_code 5 
120[sbandi3@hopper3 ~]$ 