--- src/core/tools/qwebengine_convert_dict/main.cpp.orig	2026-05-08 07:54:08 UTC
+++ src/core/tools/qwebengine_convert_dict/main.cpp
@@ -36,10 +36,15 @@
 using namespace Qt::StringLiterals;
 
 // see also src/core/type_conversion.h
+// On DragonFly, libc++-built tool objects link against a libstdc++-built
+// Qt6Core (QString::toStdString/fromStdString carry the cxx11 ABI tag), so
+// avoid crossing the STL boundary here: convert through UTF-8 byte arrays.
 inline base::FilePath::StringType toFilePathString(const QString &str)
 {
 #if defined(Q_OS_WIN)
     return QDir::toNativeSeparators(str).toStdWString();
+#elif defined(__DragonFly__)
+    return std::string(str.toUtf8().constData());
 #else
     return str.toStdString();
 #endif
@@ -64,7 +69,11 @@ inline QString toQt(const std::u16string &string)
 
 inline QString toQt(const std::string &string)
 {
+#if defined(__DragonFly__)
+    return QString::fromUtf8(string.data(), static_cast<qsizetype>(string.size()));
+#else
     return QString::fromStdString(string);
+#endif
 }
 
 template<class T>
@@ -108,8 +117,13 @@ inline bool VerifyWords(const convert_dict::DicReader:
         if (buf.back() != '\0' || buf.compare(0, buf_size - 1, org_words[i].first) != 0) {
             out << "Word does not match!\n"
                 << "  Index:    " << i << "\n"
+#if defined(__DragonFly__)
+                << "  Expected: " << QString::fromUtf8(org_words[i].first.data(), static_cast<qsizetype>(org_words[i].first.size())) << "\n"
+                << "  Actual:   " << QString::fromUtf8(buf.data(), static_cast<qsizetype>(buf.size())) << "\n";
+#else
                 << "  Expected: " << QString::fromStdString(org_words[i].first) << "\n"
                 << "  Actual:   " << QString::fromStdString(buf) << "\n";
+#endif
             return false;
         }
 
@@ -121,7 +135,11 @@ inline bool VerifyWords(const convert_dict::DicReader:
                         [](int a, int b) { return a == b; })) {
             out << "Affixes do not match!\n"
                 << "  Index:    " << i << "\n"
+#if defined(__DragonFly__)
+                << "  Word:     " << QString::fromUtf8(buf.data(), static_cast<qsizetype>(buf.size())) << "\n"
+#else
                 << "  Word:     " << QString::fromStdString(buf) << "\n"
+#endif
                 << "  Expected: " << expectedAffixes << "\n"
                 << "  Actual:   " << actualAffixes << "\n";
             return false;
