--- src/svnfrontend/svnactions.cpp.orig	2016-01-19 22:15:34.899195000 +0200
+++ src/svnfrontend/svnactions.cpp
@@ -2210,7 +2210,7 @@ void SvnActions::slotMerge(const QString
     .dry_run(dry).record_only(recordOnly).reintegrate(reintegrate)
     .localPath(svn::Path(target)).merge_options(svn::StringArray());
 
-    if (!reintegrate && (!p2.isset() || src1 == src2)) {
+    if (!reintegrate && (!p2.path_isset() || src1 == src2)) {
         // pegged merge
         pegged_merge = true;
         if (peg == svn::Revision::UNDEFINED) {
