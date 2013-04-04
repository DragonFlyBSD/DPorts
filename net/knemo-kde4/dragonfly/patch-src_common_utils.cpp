--- src/common/utils.cpp.orig	2012-12-04 18:10:28.000000000 +0000
+++ src/common/utils.cpp
@@ -48,6 +48,11 @@
             l = sizeof(struct sockaddr); memmove(cp, &(u), l); cp += l;\
         }
   #define rtm m_rtmsg.m_rtm
+  #ifndef SA_SIZE
+     #define SA_SIZE(sa) \
+       ((!(sa) || ((struct sockaddr *)(sa))->sa_len == 0) ? sizeof(long) : \
+       1 + ((((struct sockaddr *)(sa))->sa_len - 1) | (sizeof(long) - 1)))
+  #endif
 #endif
 
 #ifdef __linux__
