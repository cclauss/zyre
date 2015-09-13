#include <jni.h>
#include <stdio.h>
#include "org_zeromq_Zyre.h"
#include "zyre.h"

JNIEXPORT void JNICALL Java_org_zeromq_Zyre_create (JNIEnv *env, jobject thisObj) {
}

JNIEXPORT void JNICALL Java_org_zeromq_Zyre_destroy (JNIEnv *env, jobject thisObj) {
}

//  Print properties of the zyre object.
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_print (JNIEnv *env, jobject thisObj) {
}

//  Return our node UUID string, after successful initialization
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_uuid (JNIEnv *env, jobject thisObj) {
}

//  Return our node name, after successful initialization
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_name (JNIEnv *env, jobject thisObj) {
}

//  Set node header; these are provided to other nodes during discovery
//  and come in each ENTER message.                                    
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_setHeader (JNIEnv *env, jobject thisObj) {
}

//  Set verbose mode; this tells the node to log all traffic as well as 
//  all major events.                                                   
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_setVerbose (JNIEnv *env, jobject thisObj) {
}

//  Set UDP beacon discovery port; defaults to 5670, this call overrides 
//  that so you can create independent clusters on the same network, for 
//  e.g. development vs. production. Has no effect after zyre_start().   
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_setPort (JNIEnv *env, jobject thisObj) {
}

//  Set UDP beacon discovery interval, in milliseconds. Default is instant
//  beacon exploration followed by pinging every 1,000 msecs.             
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_setInterval (JNIEnv *env, jobject thisObj) {
}

//  Set network interface for UDP beacons. If you do not set this, CZMQ will
//  choose an interface for you. On boxes with several interfaces you should
//  specify which one you want to use, or strange things can happen.        
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_setInterface (JNIEnv *env, jobject thisObj) {
}

//  By default, Zyre binds to an ephemeral TCP port and broadcasts the local 
//  host name using UDP beaconing. When you call this method, Zyre will use  
//  gossip discovery instead of UDP beaconing. You MUST set-up the gossip    
//  service separately using zyre_gossip_bind() and _connect(). Note that the
//  endpoint MUST be valid for both bind and connect operations. You can use 
//  inproc://, ipc://, or tcp:// transports (for tcp://, use an IP address   
//  that is meaningful to remote as well as local nodes). Returns 0 if       
//  the bind was successful, else -1.                                        
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_setEndpoint (JNIEnv *env, jobject thisObj) {
}

//  Set-up gossip discovery of other nodes. At least one node in the cluster
//  must bind to a well-known gossip endpoint, so other nodes can connect to
//  it. Note that gossip endpoints are completely distinct from Zyre node   
//  endpoints, and should not overlap (they can use the same transport).    
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_gossipBind (JNIEnv *env, jobject thisObj) {
}

//  Set-up gossip discovery of other nodes. A node may connect to multiple
//  other nodes, for redundancy paths. For details of the gossip network  
//  design, see the CZMQ zgossip class.                                   
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_gossipConnect (JNIEnv *env, jobject thisObj) {
}

//  Start node, after setting header values. When you start a node it
//  begins discovery and connection. Returns 0 if OK, -1 if it wasn't
//  possible to start the node.                                      
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_start (JNIEnv *env, jobject thisObj) {
}

//  Stop node; this signals to other peers that this node will go away.
//  This is polite; however you can also just destroy the node without 
//  stopping it.                                                       
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_stop (JNIEnv *env, jobject thisObj) {
}

//  Join a named group; after joining a group you can send messages to
//  the group and all Zyre nodes in that group will receive them.     
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_join (JNIEnv *env, jobject thisObj) {
}

//  Leave a group
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_leave (JNIEnv *env, jobject thisObj) {
}

//  Receive next message from network; the message may be a control
//  message (ENTER, EXIT, JOIN, LEAVE) or data (WHISPER, SHOUT).   
//  Returns zmsg_t object, or NULL if interrupted                  
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_recv (JNIEnv *env, jobject thisObj) {
}

//  Send message to single peer, specified as a UUID string
//  Destroys message after sending                         
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_whisper (JNIEnv *env, jobject thisObj) {
}

//  Send message to a named group 
//  Destroys message after sending
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_shout (JNIEnv *env, jobject thisObj) {
}

//  Send formatted string to a single peer specified as UUID string
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_whispers (JNIEnv *env, jobject thisObj) {
}

//  Send formatted string to a named group
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_shouts (JNIEnv *env, jobject thisObj) {
}

//  Return zlist of current peer ids.
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_peers (JNIEnv *env, jobject thisObj) {
}

//  Return zlist of currently joined groups.
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_ownGroups (JNIEnv *env, jobject thisObj) {
}

//  Return zlist of groups known through connected peers.
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_peerGroups (JNIEnv *env, jobject thisObj) {
}

//  Return the endpoint of a connected peer.
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_peerAddress (JNIEnv *env, jobject thisObj) {
}

//  Return the value of a header of a conected peer. 
//  Returns null if peer or key doesn't exits.       
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_peerHeaderValue (JNIEnv *env, jobject thisObj) {
}

//  Return socket for talking to the Zyre node, for polling
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_socket (JNIEnv *env, jobject thisObj) {
}

//  Return the Zyre version for run-time API detection
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_version (JNIEnv *env, jobject thisObj) {
}

//  Self test of this class
JNIEXPORT void JNICALL Java_org_zeromq_Zyre_test (JNIEnv *env, jobject thisObj) {
}
