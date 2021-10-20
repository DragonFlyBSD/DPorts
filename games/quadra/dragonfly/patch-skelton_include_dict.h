--- skelton/include/dict.h.orig	2008-12-20 09:14:57.000000000 +0200
+++ skelton/include/dict.h
@@ -31,7 +31,7 @@ class Dict {
 	char key[32];
 	Textbuf value;
 public:
-	Dict(const char *k=NULL, const char *v=NULL);
+	Dict(const char *k=nullptr, const char *v=nullptr);
 	virtual ~Dict();
 	void add(const char *s);
 	void dump() const;
