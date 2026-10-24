-- Fix C++ chained comparison that clang now rejects with -Werror=parentheses.
-- Upstream code uses 0<=bufnum<=world->mNumSndBufs which is invalid in C++.
-- Reference: FreeBSD package build failure for main-amd64-default.
--- source/NCAnalysisUGens/SMS.cpp.orig	2026-07-10 03:44:47 UTC
+++ source/NCAnalysisUGens/SMS.cpp
@@ -439,7 +439,7 @@ void SMS_Ctor(SMS* unit) {
 
 		int bufnum= (int)fbufnum;
 
-	if(0<=bufnum<= world->mNumSndBufs) {
+	if(0<=bufnum && bufnum<= world->mNumSndBufs) {
 		SndBuf * buf;
 
 		buf = world->mSndBufs + bufnum;
