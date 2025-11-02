--- Source/NSProcessInfo.m.orig	Sun Jan  8 08:41:32 2023
+++ Source/NSProcessInfo.m	Sat Nov
@@ -1192,6 +1192,7 @@ static void determineOperatingSystem()
 	    }
 	  else if ([os hasPrefix: @"bsd"] == YES
 	    || [os hasPrefix: @"freebsd"] == YES
+	    || [os hasPrefix: @"dragonfly"] == YES
 	    || [os hasPrefix: @"netbsd"] == YES
 	    || [os hasPrefix: @"openbsd"] == YES)
 	    {
