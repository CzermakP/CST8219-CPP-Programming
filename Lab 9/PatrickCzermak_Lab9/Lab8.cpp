#include <cmath>
#include <omp.h>
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
	
	int numProcs = omp_get_num_threads();
	if (numProcs >= 7) {
		omp_set_num_threads(numProcs / 2);
	}

#pragma omp parallel for reduction(+: sum)
	for (int i = 0; i < arrayLength; i++) {
		sum += elements[i];
	}
#pragma omp barrier
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
	int numProcs;

#pragma omp parallel 
	{
		numProcs = omp_get_num_threads();
	}
		if (numProcs > 8) {
			omp_set_num_threads(numProcs / 2);
		}

#pragma omp parallel
		{
			numProcs = omp_get_num_threads();
		}

#pragma omp parallel for reduction(+:sum)
	for (int i = 0; i < arrayLength; i++) {
		sum += elements[i];
	}
#pragma omp barrier
	mean = sum / arrayLength;

#pragma omp parallel for reduction(+:standardDeviation)
	for (int i = 0; i < arrayLength; i++) {
		standardDeviation += pow(elements[i] - mean, 2);
	}
#pragma omp barrier

	env->ReleaseIntArrayElements(array, elements, 0);
	return standardDeviation;
}