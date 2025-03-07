#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring
Java_com_example_mynative1_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    int ledPins[] = {
            2, 7, 4, 6, 5, 3
    };                 // an array of pin numbers to which LEDs are attached
    std::string hello = "Hello from C++  B" ;
    return env->NewStringUTF(hello.c_str());
}