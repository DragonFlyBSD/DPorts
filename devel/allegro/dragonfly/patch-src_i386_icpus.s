--- src/i386/icpus.s.orig	2005-03-10 18:32:55.000000000 +0000
+++ src/i386/icpus.s
@@ -67,7 +67,7 @@ FUNC(_i_is_fpu)
 
    fninit
    movl $0x5A5A, %eax
-   fnstsw %eax
+   fnstsw %ax
    cmpl $0, %eax
    jne is_fpu_not_found
 
