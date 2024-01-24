#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// We can create the class of an employee through which we can store the commission of the employee  in  in key value format using hashmap
class Employee
{
    public:
    int Commission;
   
   
   // using Constructor we are randomly generated values between 1000 and 5000 to the key of emp_name and calulate the avg of these values and assign them along with key
   
   
   // this step avoid the storing of commission of each employees 
    
    
    Employee()
    {
        int lb = 1000, ub = 5000; 
        int sum=0;


	    for (int i = 0; i < 12; i++) 
	        {
	            sum=sum+(rand() % (ub - lb + 1)) + lb;
	        }
	
        	int avg=sum/12;
        	
        	this->Commission=avg;
        
    }
    
    
    
    
};

int get_second( pair<string, int> i ){ return i.second; }

int main() {
    
    unordered_map<string,Employee>mp;
    
    
    // sorting the map 
    vector<int> v( mp.size() );
    transform( mp.begin(), mp.end(), v.begin(),get_second );
    sort( v.begin(), v.end() );
    
    // printing first 5 values 
    int count=0;
    for(auto i: v)
    {
        cout<<i<<" ";
        count++;
        if(count==5)
        {
            break;
        }
        
    }
    
   
    
    return 0;
}