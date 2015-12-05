
Taken-from: contrib/gold/gold-threads.cc

--- tools/quake2/qdata_heretic2/common/threads.c.bak	2015-12-05 14:53:30.000000000 +0200
+++ tools/quake2/qdata_heretic2/common/threads.c
@@ -539,12 +539,14 @@ void RunThreadsOn( int workcnt, qboolean
 		if ( pthread_mutexattr_init( &mattrib ) != 0 ) {
 			Error( "pthread_mutexattr_init failed" );
 		}
+#ifndef __DragonFly__
 #if __GLIBC_MINOR__ == 1
 		if ( pthread_mutexattr_settype( &mattrib, PTHREAD_MUTEX_FAST_NP ) != 0 )
 #else
 		if ( pthread_mutexattr_settype( &mattrib, PTHREAD_MUTEX_ADAPTIVE_NP ) != 0 )
 #endif
 		{ Error( "pthread_mutexattr_settype failed" ); }
+#endif
 		recursive_mutex_init( mattrib );
 
 		for ( i = 0 ; i < numthreads ; i++ )
