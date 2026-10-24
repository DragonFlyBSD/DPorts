--- src/SerialImp.c.orig
+++ src/SerialImp.c
@@ -443,7 +443,7 @@
 	ttyset.c_cc[ VMIN ] = 0;
 	ttyset.c_cc[ VTIME ] = 0;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	if( cfsetspeed( &ttyset, B9600 ) < 0 ) goto fail;
 #else
 	if( cfsetispeed( &ttyset, B9600 ) < 0 ) goto fail;
@@ -866,7 +866,7 @@
 		return(1);
 	}
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	if( cfsetspeed( &ttyset, cspeed ) < 0 )
 	{
 		report( "set_port_params: Cannot Set Speed\n" );
@@ -4951,7 +4951,7 @@
 		#endif /* __sun__ */
 
 		/* XXX the following hoses freebsd when it tries to open the port later on */
-		#ifndef __FreeBSD__
+		#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 			if(S_ISCHR(mystat.st_mode))
 			{
 				fd=OPEN(teststring,O_RDONLY|O_NONBLOCK);
