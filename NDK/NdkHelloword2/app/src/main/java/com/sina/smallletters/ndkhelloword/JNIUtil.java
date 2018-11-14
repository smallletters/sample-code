package com.sina.smallletters.ndkhelloword;

public class JNIUtil {
    public static native String sayHello();

    static {
        System.loadLibrary("hello-lib");
    }

}
