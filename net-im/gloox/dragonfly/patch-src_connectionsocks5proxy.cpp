--- src/connectionsocks5proxy.cpp.orig	2019-12-08 19:14:10 UTC
+++ src/connectionsocks5proxy.cpp
@@ -320,7 +320,7 @@ namespace gloox
       strncpy( d + pos, m_server.c_str(), m_server.length() );
       pos += m_server.length();
     }
-    int nport = htons( port );
+    int nport = htons( static_cast<uint16_t>(port) );
     d[pos++] = static_cast<char>( nport );
     d[pos++] = static_cast<char>( nport >> 8 );
 
