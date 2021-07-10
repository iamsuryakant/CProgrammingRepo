#include <iostream>
using namespace std;

int main() {
    
    char *str = "hello";
    
    while(printf("%s",str))
        str++;
        
}