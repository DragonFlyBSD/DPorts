  XXX yup _GLIBCXX_USE_CXX11_ABI change, pending upstream proper fix
--- src/libutil/ustring.cpp.orig	2014-11-25 07:10:44.000000000 +0200
+++ src/libutil/ustring.cpp
@@ -183,7 +183,7 @@ ustring::TableRep::TableRep (string_view
     // the std::string to make it point to our chars!  In such a case, the
     // destructor will be careful not to allow a deallocation.
 
-#if defined(__GNUC__) && !defined(_LIBCPP_VERSION)
+#if defined(__GNUC__) && !defined(_LIBCPP_VERSION) && !defined(__DragonFly__)
     // It turns out that the first field of a gcc std::string is a pointer
     // to the characters within the basic_string::_Rep.  We merely redirect
     // that pointer, though for std::string to function properly, the chars
