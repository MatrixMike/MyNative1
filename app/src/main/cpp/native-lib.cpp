#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring
Java_com_example_mynative1_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    class Shape {
    protected:
        int width, height;

    public:
        explicit Shape( int a = 0, int b = 0) {
            width = a;
            height = b;
        }

        virtual int area() {
  //          cout << "Parent class area :" <<endl;
            return 0;
        }
    };

    class Rectangle: public Shape {
    public:
        explicit Rectangle( int a = 0, int b = 0):Shape(a, b) { }
        int area () override {
   //         cout << "Rectangle class area :" <<endl;
            return (width * height);
        }
    };

    class Triangle: public Shape{
    public:
        explicit Triangle( int a = 0, int b = 0):Shape(a, b) { }
        int area () override {
     //       cout << "Triangle class area :" <<endl;
            return (width * height / 2);
        }
    };
    char buffer [sizeof(unsigned int)*8+1];

    int ledPins[] = {
            2, 7, 4, 6, 5, 3
    };                 // an array of pin numbers to which LEDs are attached
    std::string hello = "Hello from C++  E" ;
    // hello = itoa(99, buffer, DECIMAL_DIG)  ;
    return env->NewStringUTF(hello.c_str());
}