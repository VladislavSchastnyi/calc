
#include <iostream>
using namespace std;

int main(int argc, char*argv[]){
    char operand=0;
    
    cout <<"count " << (argc-1) << endl;
    
    for (int i=1; i<=(argc-1); i++){
      cout << "argv[" << i << "]" << argv[i] << endl;
    }
    
    operand=argv[2][0];
    
    switch (operand) {
      case '+':{
        cout << (atoi (argv[1]) + atoi (argv[3])) << endl;
        break;
      }
      
      case '-':{
        cout << (atoi (argv[1]) - atoi (argv[3])) << endl;
        break;
      }
      
      default:{
        cerr << "error" << endl;
        break;
      }
    }
 
}
