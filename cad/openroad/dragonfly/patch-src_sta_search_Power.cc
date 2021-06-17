--- src/sta/search/Power.cc.orig	2021-06-15 17:10:14.879156000 +0200
+++ src/sta/search/Power.cc	2021-06-15 17:22:11.072725000 +0200
@@ -871,7 +871,7 @@
 	  // Activities can get very small from multiplying probabilities
 	  // through deep chains of logic. Dividing by very close to zero values
 	  // can result in NaN/Inf depending on numerator.
-	  if (!isnormal(duty))
+	  if (!std::isnormal(duty))
 	    duty = 0.0;
 	}
 	return duty;
