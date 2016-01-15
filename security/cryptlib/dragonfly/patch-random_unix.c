--- random/unix.c.orig	2010-06-18 01:51:32.000000000 +0300
+++ random/unix.c
@@ -591,7 +591,7 @@ static FILE *my_popen( INOUT DATA_SOURCE
 				( void ) setegid( gathererGID );
 #else
   #if( defined( __linux__ ) || ( defined( __FreeBSD__ ) && OSVERSION >= 5 ) || \
-	   ( defined( __hpux ) && OSVERSION >= 11 ) )
+	   ( defined( __hpux ) && OSVERSION >= 11 ) || defined( __DragonFly__ ) )
 				( void ) setresuid( gathererUID, gathererUID, gathererUID );
 				( void ) setresgid( gathererGID, gathererGID, gathererGID );
   #else
