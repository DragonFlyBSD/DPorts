--- src/knemod/backends/bsdbackend.cpp.orig	2012-12-04 18:10:29.000000000 +0000
+++ src/knemod/backends/bsdbackend.cpp
@@ -118,6 +118,7 @@ void BSDBackend::update()
 
         updateIfaceData( ifap, key, interface );
 
+#ifdef __FreeBSD__
         if ( m_fd >= 0 )
         {
             char essidData[ 32 ];
@@ -128,6 +129,7 @@ void BSDBackend::update()
                 updateWirelessData( key, interface );
             }
         }
+#endif
     }
 
     freeifaddrs( ifap );
@@ -370,6 +372,7 @@ void BSDBackend::updateIfaceData( struct
         data->status = KNemoIface::Unavailable;
 }
 
+#ifdef __FreeBSD__
 void BSDBackend::updateWirelessData( const QString& ifName, BackendData* data )
 {
     /* TODO?
@@ -582,7 +585,7 @@ enum ieee80211_opmode BSDBackend::get802
     }
     return IEEE80211_M_STA;
 }
-
+#endif /* ifdef __FreeBSD__ */
 
 
 #include "bsdbackend.moc"
