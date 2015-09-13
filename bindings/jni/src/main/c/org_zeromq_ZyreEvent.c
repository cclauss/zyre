#include <jni.h>
#include <stdio.h>
#include "org_zeromq_ZyreEvent.h"
#include "zyre.h"

JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_create (JNIEnv *env, jobject thisObj) {
}

JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_destroy (JNIEnv *env, jobject thisObj) {
}

//  Print properties of the zyre event object.
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_print (JNIEnv *env, jobject thisObj) {
}

//  Returns event type, which is a zyre_event_type_t
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_type (JNIEnv *env, jobject thisObj) {
}

//  Return the sending peer's id as a string
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_sender (JNIEnv *env, jobject thisObj) {
}

//  Return the sending peer's public name as a string
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_name (JNIEnv *env, jobject thisObj) {
}

//  Return the sending peer's ipaddress as a string
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_address (JNIEnv *env, jobject thisObj) {
}

//  Returns the event headers, or NULL if there are none
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_headers (JNIEnv *env, jobject thisObj) {
}

//  Returns value of a header from the message headers   
//  obtained by ENTER. Return NULL if no value was found.
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_header (JNIEnv *env, jobject thisObj) {
}

//  Returns the group name that a SHOUT event was sent to
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_group (JNIEnv *env, jobject thisObj) {
}

//  Returns the incoming message payload (currently one frame)
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_msg (JNIEnv *env, jobject thisObj) {
}

//  Self test of this class
JNIEXPORT void JNICALL Java_org_zeromq_ZyreEvent_test (JNIEnv *env, jobject thisObj) {
}
