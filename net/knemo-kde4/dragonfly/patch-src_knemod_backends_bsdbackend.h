--- src/knemod/backends/bsdbackend.h.orig	2012-12-04 18:10:29.000000000 +0000
+++ src/knemod/backends/bsdbackend.h
@@ -26,7 +26,9 @@
 #include "backendbase.h"
 #include <sys/types.h>
 #include <net/if.h>
+#ifdef __FreeBSD__
 #include <net80211/ieee80211_ioctl.h>
+#endif
 
 /**
  * This backend uses getifaddrs() and friends.
@@ -52,17 +54,19 @@ public:
 
 private:
     void updateIfaceData( struct ifaddrs * ifap, const QString& ifName, BackendData* data );
-    void updateWirelessData( const QString& ifName, BackendData* data );
     QString formattedAddr( struct sockaddr * addr );
     QString getAddr( struct ifaddrs *ifa, AddrData& addrData );
     int getSubnet( struct ifaddrs *ifa );
     int m_fd;
 
+#ifdef __FreeBSD__
+    void updateWirelessData( const QString& ifName, BackendData* data );
     int get80211( const QString &ifName, int type, void *data, int len );
     int get80211len( const QString &ifName, int type, void *data, int len, int *plen);
     int get80211id( const QString &ifName, int ix, void *data, size_t len, int *plen, int mesh );
     int get80211val( const QString &ifName, int type, int *val );
     enum ieee80211_opmode get80211opmode( const QString &ifName );
+#endif
 };
 
 #endif // BSDBACKEND_H
