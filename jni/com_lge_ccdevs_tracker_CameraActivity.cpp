/* DO NOT EDIT THIS FILE - it is machine generated */
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>

#include <nativehelper/JNIHelp.h>

#include "com_lge_ccdevs_tracker_CameraActivity.h"

#define TAG_DEBUG "CameraActivity-JNI"

#ifdef __cplusplus
extern "C" {
#endif

struct fields_t {
	jclass bitmapClazz;
	jmethodID bitmapConstructor;
	jclass fileClazz;
	jmethodID fileConstructor;
};

static fields_t fields;
static const char* const kClassPathName = "com/lge/ccdevs/tracker/CameraActivity";

/*
 * Class:     com_lge_ccdevs_tracker_CameraActivity
 * Method:    native_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_lge_ccdevs_tracker_CameraActivity_native_1init (JNIEnv *env, jclass thiz) {
	jclass clazz;

	clazz = env->FindClass(kClassPathName);
	if (clazz == NULL) {
		jniThrowException(env, "java/lang/RuntimeException", "Can't find com/lge/ccdevs/tracker/CameraActivity");
		return;
	}

	fields.bitmapClazz = env->FindClass("android/graphics/Bitmap");
	if (fields.bitmapClazz == NULL) {
		jniThrowException(env, "java/lang/RuntimeException", "Can't find android/graphics/Bitmap");
		return;
	}
	fields.bitmapConstructor = env->GetMethodID(fields.bitmapClazz, "<init>", "(I[BIIIZZ[B[I)V");
	if (fields.bitmapConstructor == NULL) {
		jniThrowException(env, "java/lang/RuntimeException", "Can't find Bitmap constructor");
		return;
	}

	fields.fileClazz = env->FindClass("java/io/File");
	if (fields.fileClazz == NULL) {
		jniThrowException(env, "java/lang/RuntimeException", "Can't find java/io/File");
		return;
	}
}

#ifdef __cplusplus
}
#endif