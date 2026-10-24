--- board.m.orig	2009-06-12 18:13:54 UTC
+++ board.m
@@ -171,7 +171,7 @@
             [tile release];
         }
     }
-    tmptiles = (NSMutableArray *)[tmptiles sortedArrayUsingFunction:(int (*)(id, id, void*))randomizeTiles context:self];
+    tmptiles = (NSMutableArray *)[tmptiles sortedArrayUsingFunction:(NSComparisonResult (*)(id, id, void*))randomizeTiles context:self];
 
     if(tmr && !hadEndOfGame) {
         if([tmr isValid])
@@ -491,7 +491,7 @@
     [gameData setObject: entry forKey: @"seconds"];
 
     [scores addObject: gameData];
-    [scores sortUsingFunction:(int (*)(id, id, void*))sortScores context:self];
+    [scores sortUsingFunction:(NSComparisonResult (*)(id, id, void*))sortScores context:self];
 		if ([scores count] > numScoresToKeep) {
 			NSRange scoresToZap = NSMakeRange(numScoresToKeep, 
 				[scores count] - numScoresToKeep);
