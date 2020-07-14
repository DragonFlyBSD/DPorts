--- jdk/src/solaris/classes/sun/security/provider/NativePRNG.java.orig	2014-03-04 02:59:53.000000000 +0000
+++ jdk/src/solaris/classes/sun/security/provider/NativePRNG.java	2014-07-10 02:47:42.435465000 +0000
@@ -455,7 +455,9 @@ public final class NativePRNG extends Se
                     try {
                         seedOut.write(seed);
                     } catch (IOException e) {
-                        throw new ProviderException("setSeed() failed", e);
+			// Only root can reseed and only if kern.seedenable == 1
+			// Therefore just move on if we get an error
+			return;
                     }
                 }
                 getMixRandom().engineSetSeed(seed);
