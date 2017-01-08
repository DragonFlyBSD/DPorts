--- base/osutils.jl.orig	2016-09-20 05:54:21.000000000 +0300
+++ base/osutils.jl
@@ -30,7 +30,7 @@ is_linux(os::Symbol) = (os == :Linux)
 Predicate for testing if the OS is a derivative of BSD.
 See documentation in [Handling Operating System Variation](:ref:`Handling Operating System Variation <man-handling-operating-system-variation>`).
 """
-is_bsd(os::Symbol) = (os == :FreeBSD || os == :OpenBSD || os == :NetBSD || os == :Darwin || os == :Apple)
+is_bsd(os::Symbol) = (os == :DragonFly || os == :FreeBSD || os == :OpenBSD || os == :NetBSD || os == :Darwin || os == :Apple)
 
 """
     is_windows([os])
