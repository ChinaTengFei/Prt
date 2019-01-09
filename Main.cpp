
#include "Main.h"


jint JNI_GetDefaultJavaVMInitArgs(void*){
    return JNI_OK;
}
jint JNI_CreateJavaVM(JavaVM**, JNIEnv**, void*){
  return JNI_OK;
}
jint JNI_GetCreatedJavaVMs(JavaVM**, jsize, jsize*){
  return JNI_OK;
}

