--- gtk/org/eclipse/swt/internal/gtk/OS.java.orig	2013-11-17 17:50:46.000000000 +0000
+++ gtk/org/eclipse/swt/internal/gtk/OS.java
@@ -35,6 +35,7 @@ public class OS extends C {
 		if (osName.equals ("SunOS")) isSunOS = true;
 		if (osName.equals ("HP-UX")) isHPUX = true;
 		if (osName.equals ("FreeBSD")) isFreeBSD = true;
+		if (osName.equals ("DragonFly")) isFreeBSD = true;
 		IsAIX = isAIX;  IsSunOS = isSunOS;  IsLinux = isLinux;  IsHPUX = isHPUX;  IsFreeBSD = isFreeBSD;
 	}
 
