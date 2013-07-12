#include <iostream>
using namespace std

int main()
{
    // Native types are initially garbage
    int x;
    bool y;
    
    // Must initialize before use
    y = false;
    
    // string datatype is not native
    string s;  // initializes to an empty string
    string q = ""; // BAD, DO NOT NEED TO DO THIS
    
    
    // Midterm #10, all valid conditional options
    if (true)
    {
        cout << "yay" << endl;
    }
    if (y)
    {      
    }
    if (x == 5)
    {        
    }
    if (x == 5 && y)
    {        
    }
    
    
    // Midterm #13
    int x = 10; 
    while (x > 0) 
    { 
       cout << x << “ “; 
       if (x > 5) 
            x = x – 2; 
       else 
            x = x – 1;  
    }
    // X
    // 10, 8, 6, 4, 3, 2, 1, 0
    // Output
    // 10 8 6 4 3 2 1 
    
    return 0;
}