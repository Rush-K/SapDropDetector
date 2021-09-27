#include <jni.h>
#include <opencv2/opencv.hpp>

using namespace cv;

extern "C" JNIEXPORT void JNICALL
Java_com_example_sapdropdetector_MainActivity_ConvertRGBtoGray(JNIEnv *env,
                            jobject thiz,
                            jlong mat_addr_input,
                            jlong mat_addr_result) {
    // TODO: implement ConvertRGBtoGray()
    Mat &matInput = *(Mat *)mat_addr_input;
    Mat &matResult = *(Mat *)mat_addr_result;

    cvtColor(matInput, matResult, COLOR_RGBA2GRAY);

}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_sapdropdetector_MainActivity_CannyEdgeDectection(JNIEnv *env, jobject thiz,
                                                                  jlong mat_addr_input,
                                                                  jlong mat_addr_result) {
    // TODO: implement CannyEdgeDectection()
    Mat &matInput = *(Mat *)mat_addr_input;
    Mat &matResult = *(Mat *)mat_addr_result;

    Canny(matInput, matResult, 100, 200);
}