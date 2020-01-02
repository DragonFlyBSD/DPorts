--- cpp/system.c.orig	2014-08-17 16:28:11 UTC
+++ cpp/system.c
@@ -8,6 +8,8 @@
 
 static void	set_linux_macros(struct predef_macro **head, struct predef_macro **tail,
 			int archflag, int abiflag);
+static void	set_dragonfly_macros(struct predef_macro **head, struct predef_macro **tail,
+			int archflag, int abiflag);
 static void	set_freebsd_macros(struct predef_macro **head, struct predef_macro **tail,
 			int archflag, int abiflag);
 static void	set_openbsd_macros(struct predef_macro **head, struct predef_macro **tail,
@@ -118,6 +120,9 @@ set_system_macros(struct predef_macro **
 	case OS_LINUX:
 		set_linux_macros(head, tail, archflag, abiflag);
 		break;
+	case OS_DRAGONFLYBSD:
+		set_dragonfly_macros(head, tail, archflag, abiflag);
+		break;
 	case OS_FREEBSD:
 		set_freebsd_macros(head, tail, archflag, abiflag);
 		break;
@@ -238,6 +243,19 @@ set_linux_macros(struct predef_macro **h
 }
 
 static void
+set_dragonfly_macros(struct predef_macro **head, struct predef_macro **tail,
+	int archflag, int abiflag) {
+
+	struct predef_macro	*tmp_pre;
+
+	(void) archflag; (void) abiflag;
+	tmp_pre = tmp_pre_macro("__DragonFly__", "1");
+	APPEND_LIST(*head, *tail, tmp_pre);
+	tmp_pre = tmp_pre_macro("__DragonFly", "1");
+	APPEND_LIST(*head, *tail, tmp_pre);
+}
+
+static void
 set_freebsd_macros(struct predef_macro **head, struct predef_macro **tail,
 	int archflag, int abiflag) {
 
