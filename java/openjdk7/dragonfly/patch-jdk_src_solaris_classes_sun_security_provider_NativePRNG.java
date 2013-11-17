--- jdk/src/solaris/classes/sun/security/provider/NativePRNG.java.orig	2013-10-04 14:55:32.000000000 +0000
+++ jdk/src/solaris/classes/sun/security/provider/NativePRNG.java
@@ -246,7 +246,9 @@ public final class NativePRNG extends Se
                     try {
                         randomOut.write(seed);
                     } catch (IOException e) {
-                        throw new ProviderException("setSeed() failed", e);
+			// Only root can reseed and only if kern.seedenable == 1
+			// Therefore just move on if we get an error
+			return;
                     }
                 }
                 getMixRandom().engineSetSeed(seed);
