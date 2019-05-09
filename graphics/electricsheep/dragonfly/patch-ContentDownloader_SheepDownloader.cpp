error: reference to 'thread' is ambiguous
    thread::sleep( get_system_time() + posix_time::seconds(ContentDownloader::INIT_DELAY) );

--- ContentDownloader/SheepDownloader.cpp.intermediate	2019-05-08 00:04:24.000000000 +0000
+++ ContentDownloader/SheepDownloader.cpp
@@ -41,7 +41,7 @@
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #elif defined(LINUX_GNU)
@@ -783,7 +783,7 @@ void	SheepDownloader::findSheepToDownloa
 			//	Make sure we are really deeply settled asleep, avoids lots of timed out frames.
 			g_Log->Info( "Chilling for %d seconds before trying to download sheeps...", ContentDownloader::INIT_DELAY );
 			
-			thread::sleep( get_system_time() + posix_time::seconds(ContentDownloader::INIT_DELAY) );
+			boost::thread::sleep( get_system_time() + posix_time::seconds(ContentDownloader::INIT_DELAY) );
 		}
 #endif
 
@@ -823,14 +823,14 @@ void	SheepDownloader::findSheepToDownloa
 					const char *err = "Content folder is not working.  Downloading disabled.\n";
 					Shepherd::addMessageText( err, strlen(err), 180 ); //3 minutes
 
-					thread::sleep( get_system_time() + posix_time::seconds(TIMEOUT) );
+					boost::thread::sleep( get_system_time() + posix_time::seconds(TIMEOUT) );
 				}
 				else
 				{
 					const char *err = "Low disk space.  Downloading disabled.\n";
 					Shepherd::addMessageText( err, strlen(err), 180 ); //3 minutes
 
-					thread::sleep( get_system_time() + posix_time::seconds(TIMEOUT) );
+					boost::thread::sleep( get_system_time() + posix_time::seconds(TIMEOUT) );
 				
 					boost::mutex::scoped_lock lockthis( s_DownloaderMutex );
 
@@ -979,7 +979,7 @@ void	SheepDownloader::findSheepToDownloa
 					badSheepSleepDuration = 10;
 				}
 
-				thread::sleep( get_system_time() + posix_time::seconds(failureSleepDuration) );
+				boost::thread::sleep( get_system_time() + posix_time::seconds(failureSleepDuration) );
 				
 				//failureSleepDuration = TIMEOUT;
 
