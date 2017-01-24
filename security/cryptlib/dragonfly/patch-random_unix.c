--- random/unix.c.orig	2016-02-25 11:52:52 UTC
+++ random/unix.c
@@ -1541,7 +1541,7 @@ static FILE *my_popen( INOUT DATA_SOURCE
 			( void ) setgid( gathererGID );
 			( void ) setegid( gathererGID );
 #else
-  #if( defined( __linux__ ) || ( defined( __FreeBSD__ ) && OSVERSION >= 5 ) || \
+  #if( defined( __linux__ ) || defined __FreeBSD__ || defined __DragonFly__ || \
 	   ( defined( __hpux ) && OSVERSION >= 11 ) )
 			( void ) setresuid( gathererUID, gathererUID, gathererUID );
 			( void ) setresgid( gathererGID, gathererGID, gathererGID );
