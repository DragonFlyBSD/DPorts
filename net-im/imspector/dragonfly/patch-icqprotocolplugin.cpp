--- icqprotocolplugin.cpp.intermediate	2013-03-22 18:53:24.223148000 +0000
+++ icqprotocolplugin.cpp
@@ -676,7 +676,7 @@ int getmessage(GET_ARGS, std::string &me
 					size_t inbytesleft = mylength - 4;
 					size_t outbytesleft = BUFFER_SIZE - 1; /* Trailing \0 */
 					size_t result = iconv(iconv_utf16be_utf8,
-						(const char**) &inbuf, &inbytesleft, &outbuf, &outbytesleft);
+						(char**) &inbuf, &inbytesleft, &outbuf, &outbytesleft);
 
 					if (result == (size_t) -1)
 					{
