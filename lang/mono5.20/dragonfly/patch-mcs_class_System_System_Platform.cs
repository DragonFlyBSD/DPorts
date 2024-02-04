--- mcs/class/System/System/Platform.cs.orig	2018-08-24 15:17:11 UTC
+++ mcs/class/System/System/Platform.cs
@@ -68,6 +68,9 @@ namespace System {
 				case "FreeBSD":
 					isFreeBSD = true;
 					break;
+				case "DragonFly":
+					isFreeBSD = true;
+					break;
 				}
 			}
 			Marshal.FreeHGlobal (buf);
