--- rtl/dragonfly//x86_64/cprt0.as.orig	2015-07-14 21:56:55 UTC
+++ rtl/dragonfly//x86_64/cprt0.as
@@ -18,10 +18,10 @@
 # "DragonFly" field in the abitag to the relevant ABI number 
 
 	.file	"crt1.c"
-	.section	.note.ABI-tag,"a",@progbits
+	.section	.note.tag,"a",@note
 	.align 4
 	.type	abitag, @object
-	.size	abitag, 28
+	.size	abitag, 52
 abitag:
 	.long	10
 	.long	4
@@ -29,6 +29,11 @@ abitag:
 	.string	"DragonFly"
 	.align	4
 	.long	400000
+	.long	8
+	.long	4
+	.long	1
+	.string	"DragonFly"
+	.long	0
 .globl __progname
 	.section	.rodata
 .LC0:
