#include <iostream>
using namespace std;

int main()
{
    int age; 
    count << "請輸入年齡\n";
    cin >> age;
    
    if (age >= 18) {
	    count << "可以喝啤酒\n"; 
    }else if (age <18 && age > 9) { 
	    count << "你是青少年\n";
    }else {
	    count << "寫出99乘法\n";
        for (int i=1; i<=9; i++) {
        	for (int j=1; j<=9; j++) {
        	     count << i << "*" << j << "=" << i*j << " ";
		
            } 
            count << "\n";
        }
    }
    
    return 0;
}
