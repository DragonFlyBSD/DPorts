--- src/number.c.orig	2019-06-09 21:34:21 UTC
+++ src/number.c
@@ -1572,7 +1572,7 @@ SgObject Sg_Exact(SgObject obj)
 	    Sg_Sprintf(UC("no exact representation for %S"), obj),
 	    SG_LIST1(obj));
     }
-#if defined(__WATCOMC__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__WATCOMC__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     /* Yes, on Watcom/FreeBSD if +inf.0 or +nan.0 is passed to modf,
        it returns +nan.0. Sucks!!! */
     if ((f = modf(d, &i)) == 0.0 ||
