Ease up -std=c++11

--- lib/curl.cc.orig	2008-06-25 23:50:26.000000000 +0300
+++ lib/curl.cc
@@ -45,7 +45,7 @@ namespace opkele {
 	    || (r=easy_setopt(CURLOPT_MAXREDIRS,5))
 	    || (r=easy_setopt(CURLOPT_DNS_CACHE_TIMEOUT,120))
 	    || (r=easy_setopt(CURLOPT_DNS_USE_GLOBAL_CACHE,1))
-	    || (r=easy_setopt(CURLOPT_USERAGENT,PACKAGE_NAME"/"PACKAGE_SRC_VERSION))
+	    || (r=easy_setopt(CURLOPT_USERAGENT,PACKAGE_NAME "/" PACKAGE_SRC_VERSION))
 	    || (r=easy_setopt(CURLOPT_TIMEOUT,20))
 #ifdef	DISABLE_CURL_SSL_VERIFYHOST
 	    || (r=easy_setopt(CURLOPT_SSL_VERIFYHOST,0))
