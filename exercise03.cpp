#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
struct Box{
  int height;
  int width;
  int length;
};
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    Box box1;

    // 3. Create a variable called box2 of the Box structure type
    Box box2;

    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >>  box2.height;
    cout << "Enter Box 2 Width : ";
    cin >>  box2.width;
    cout << "Enter Box 2 Length : ";
    cin >>  box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.height, box1.length, box1.width)
             + volume(box2.height, box2.length, box2.width);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length){

  return height * width * length;


}