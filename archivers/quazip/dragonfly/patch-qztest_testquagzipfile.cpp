--- qztest/testquagzipfile.cpp.intermediate	2013-08-17 19:09:58.425428000 +0000
+++ qztest/testquagzipfile.cpp
@@ -8,9 +8,9 @@ void TestQuaGzipFile::read()
 {
     QDir curDir;
     curDir.mkpath("tmp");
-    gzFile_s* /*voidp*/ gzFile = gzopen("tmp/test.gz", "wb");
-    gzwrite(gzFile, "test", 4);
-    gzclose(gzFile);
+    gzFile gzf = gzopen("tmp/test.gz", "wb");
+    gzwrite(gzf, "test", 4);
+    gzclose(gzf);
     QuaGzipFile testFile("tmp/test.gz");
     QVERIFY(testFile.open(QIODevice::ReadOnly));
     char buf[5];
@@ -32,11 +32,11 @@ void TestQuaGzipFile::write()
     QCOMPARE(testFile.write("test", 4), static_cast<qint64>(4));
     testFile.close();
     QVERIFY(!testFile.isOpen());
-    gzFile_s* /*voidp*/ gzFile = gzopen("tmp/test.gz", "rb");
+    gzFile gzf = gzopen("tmp/test.gz", "rb");
     char buf[5];
     buf[4] = '\0';
-    QCOMPARE(gzread(gzFile, buf, 5), 4);
-    gzclose(gzFile);
+    QCOMPARE(gzread(gzf, buf, 5), 4);
+    gzclose(gzf);
     QCOMPARE(static_cast<const char*>(buf), "test");
     curDir.remove("tmp/test.gz");
     curDir.rmdir("tmp");
