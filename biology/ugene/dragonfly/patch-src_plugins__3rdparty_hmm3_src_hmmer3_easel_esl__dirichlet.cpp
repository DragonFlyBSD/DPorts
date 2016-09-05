--- src/plugins_3rdparty/hmm3/src/hmmer3/easel/esl_dirichlet.cpp.orig	2016-03-31 15:22:06.000000000 +0300
+++ src/plugins_3rdparty/hmm3/src/hmmer3/easel/esl_dirichlet.cpp
@@ -10,6 +10,7 @@
 #include <assert.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <cstdio>
 #include <math.h>
 
 #include <hmmer3/easel/easel.h>
@@ -629,7 +630,7 @@ mixdchlet_complete_func(double *p, int n
         logP += logPsample;
     }
 
-    if (isnan(logP)) esl_fatal("logP is NaN");
+    if (std::isnan(logP)) esl_fatal("logP is NaN");
     return -logP;
 }
 
@@ -706,12 +707,12 @@ mixdchlet_complete_gradient(double *p, i
    /* Return the negative, because we're minimizing the NLP, not maximizing.
     */
    for (q = 0; q < nq; q++) {
-        if (isnan(dp[q])) esl_fatal("dp for pq[%d] is NaN", q);
+        if (std::isnan(dp[q])) esl_fatal("dp for pq[%d] is NaN", q);
      dp[q] *= -1.;
    }
    for (q = 0; q < d->N; q++)
      for (x = 0; x < d->K; x++) {
-       if(isnan(dp[nq + q*d->K + x])) esl_fatal("dp for alpha[%d][%d] is NaN", q, x);
+       if(std::isnan(dp[nq + q*d->K + x])) esl_fatal("dp for alpha[%d][%d] is NaN", q, x);
        dp[nq + q*d->K + x] *= -1.0;
     }
 
