#include  "ArrayStack.h"

using namespace std;
   
  int main() { 
        ArrayStack<int> stack(10); // 용량 10으로 ArrayStack 객체 생성
        stack.push(7);
        stack.push(13);
        cout << stack.top() << endl; 
        stack.pop();

        stack.push(9);
        cout << stack.top() << endl;
        cout << stack.top() << endl;
        stack.pop();

        ArrayStack<string> B(10);
        B.push("Bob");
        B.push("Alice");
        cout << B.top() << endl;
        B.pop();

        B.push("Eve");
        cout << B.top() << endl;
        return 0;
    }
 