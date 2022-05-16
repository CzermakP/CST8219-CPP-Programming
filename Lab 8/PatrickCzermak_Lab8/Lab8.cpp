#include<cmath>
#include "Lab8.h"

/*
 * Class:     Lab8
 * Method:    calculateMean
 * Signature: ([I)D
 */
 //JNIEXPORT jdouble JNICALL Java_Lab8_calculateMean(JNIEnv*, jobject, jintArray); 

JNIEXPORT jdouble JNICALL Java_Lab8_calculateMean(JNIEnv* env, jobject obj, jintArray array) {
	int arrayLength = env->GetArrayLength(array);
	jint* elements = (env)->GetIntArrayElements(array, NULL);
	double sum = 0, mean = 0, standardDeviation = 0;

	for (int i = 0; i < arrayLength; i++) {
		sum += elements[i];
	}
	mean = sum / arrayLength;

	env->ReleaseIntArrayElements(array, elements, 0);
	return mean;
}


/*
 * Class:     Lab8
 * Method:    calculateSTDDev
 * Signature: ([I)D
 */
JNIEXPORT jdouble JNICALL Java_Lab8_calculateSTDDev(JNIEnv* env, jobject obj, jintArray array) {
	int arrayLength = env->GetArrayLength(array);
	jint* elements = (env)->GetIntArrayElements(array, NULL);
	double sum = 0, mean = 0, standardDeviation = 0;

	for (int i = 0; i < arrayLength; i++) {
		sum += elements[i];
	}
	mean = sum / arrayLength;

	for (int i = 0; i < arrayLength; i++) {
		standardDeviation += pow(elements[i] - mean, 2);
	}

	env->ReleaseIntArrayElements(array, elements, 0);
	return standardDeviation;
}