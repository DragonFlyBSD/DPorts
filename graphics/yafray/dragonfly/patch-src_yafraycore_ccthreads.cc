--- src/yafraycore/ccthreads.cc.orig	2005-06-23 01:11:42.000000000 +0300
+++ src/yafraycore/ccthreads.cc
@@ -1,5 +1,6 @@
 #include"ccthreads.h"
 #include<iostream>
+#include<cstdlib>
 
 using namespace std;
 
@@ -11,9 +12,9 @@ mutex_t::mutex_t()
 	int error=pthread_mutex_init(&m, NULL);
 	switch(error)
 	{
-		case EINVAL: cout<<"pthread_mutex_init error EINVAL"<<endl;exit(1);break;
-		case ENOMEM: cout<<"pthread_mutex_init error ENOMEM"<<endl;exit(1);break;
-		case EAGAIN: cout<<"pthread_mutex_init error EAGAIN"<<endl;exit(1);break;
+		case EINVAL: cout<<"pthread_mutex_init error EINVAL"<<endl;std::exit(1);break;
+		case ENOMEM: cout<<"pthread_mutex_init error ENOMEM"<<endl;std::exit(1);break;
+		case EAGAIN: cout<<"pthread_mutex_init error EAGAIN"<<endl;std::exit(1);break;
 		default: break;
 	}
 #endif
@@ -25,7 +26,7 @@ void mutex_t::wait()
 	if(pthread_mutex_lock(&m))
 	{
 		cout<<"Error mutex lock"<<endl;
-		exit(1);
+		std::exit(1);
 	}
 #endif
 }
@@ -36,7 +37,7 @@ void mutex_t::signal()
 	if(pthread_mutex_unlock(&m))
 	{
 		cout<<"Error mutex lock"<<endl;
-		exit(1);
+		std::exit(1);
 	}
 #endif
 }
@@ -116,7 +117,7 @@ void mysemaphore_t::wait()
 			case EINTR: cout<<"EINTR"<<endl;break;
 			default: cout<<"NOSE"<<endl;break;
 		}
-		exit(1);
+		std::exit(1);
 	}
 #else
 	sem_wait(&s); 
@@ -129,7 +130,7 @@ void mysemaphore_t::signal()
 	if(sem_post(s))
 	{
 		cout<<"Error sem_post"<<endl;
-		exit(1);
+		std::exit(1);
 	}
 #else
 	sem_post(&s);
