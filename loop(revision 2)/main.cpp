//
//  main.cpp
//  loop(revision 2)
// Question(calculate the class average of the grade of students)
//  Created by MARTIN on 23/08/2021.
//

#include <iostream>

using namespace std;
int main()
{
    int total = 0;
    int grade;
    int average;
    int count=1;
    
     
    
    while( count<=10)
    {
        cout<<"enter a grade"<<endl;
        cin>>grade;
        
        total=total+grade;
        count++;
    }
    
    average=total/10;
    
    cout<<"class average ="<<average;
    
    return 0;
}
