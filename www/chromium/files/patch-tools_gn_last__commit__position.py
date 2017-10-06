diff --git tools/gn/last_commit_position.py tools/gn/last_commit_position.py
index a91f7226e17e..ea744f354002 100644
--- tools/gn/last_commit_position.py
+++ tools/gn/last_commit_position.py
@@ -60,6 +60,10 @@ def FetchCommitPosition(directory):
   max_lines = 2048
 
   proc = RunGitCommand(directory, ['log'])
+  if proc is None:
+    # The git binary might not be available in the build environment.
+    return None
+
   for i in range(max_lines):
     line = proc.stdout.readline()
     if not line:
