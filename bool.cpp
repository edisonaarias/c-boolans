// #include <iostream>

// int main() {
//   int myNum = 15, Num = 13;
//   std::cout << myNum + Num;
//   return 0;
// }

// #include <iostream>

// int main() {
//   bool isCodingFun = true;
//   bool isFishTasty = false;
//   std::cout << isCodingFun << "\n";
//   std::cout << isFishTasty;
//   return 0;
// }

// #include <iostream>
// #include <string>

// int main() {
//   std::string greeting = "Hello";
//   std::cout << greeting;
//   return 0;
// }

// #include <iostream>

// int main() {
//   int sum1 = 100 + 50;        // 150 (100 + 50)
//   int sum2 = sum1 + 250;      // 400 (150 + 250)
//   int sum3 = sum2 + sum2;     // 800 (400 + 400)
//   std::cout << sum1 << "\n";
//   std::cout << sum2 << "\n";
//   std::cout << sum3;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int x = 10;
//   x += 5;
//   cout << x;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int i = 0;
//   while (i < 5) {
//     cout << i << "\n";
//     i++;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   for (int i = 0; i < 5; i++) {
//     cout << i << "\n";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   for (int i = 0; i < 10; i++) {
//     if (i == 4) {
//       break;
//     }
//     cout << i << "\n";
//   } 
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   for (int i = 0; i < 10; i++) {
//     if (i == 4) {
//       continue;
//     }
//     cout << i << "\n";
//   }   
//   return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
//   cout << cars[0];
//   return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;

  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";
  return 0;
}