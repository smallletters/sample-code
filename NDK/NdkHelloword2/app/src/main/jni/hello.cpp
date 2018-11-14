//
// Created by SmallLetters on 2018/11/13.
//

#include "com_sina_smallletters_ndkhelloword_JNIUtil.h"


JNIEXPORT jstring JNICALL Java_com_sina_smallletters_ndkhelloword_JNIUtil_sayHello
        (JNIEnv *env, jclass obj){
    return (*env).NewStringUTF("hello word");
}