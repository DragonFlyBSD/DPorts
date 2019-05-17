--- sys/static.sh.orig	2019-04-02 22:12:18 UTC
+++ sys/static.sh
@@ -6,6 +6,9 @@ case "$(uname)" in
 Linux)
 	LDFLAGS="${LDFLAGS} -lpthread -ldl -lutil -lm"
 	;;
+DragonFly)
+	LDFLAGS="${LDFLAGS} -lpthread -lkvm -lutil -lm"
+	;;
 OpenBSD)
 	LDFLAGS="${LDFLAGS} -lpthread -lkvm -lutil -lm"
 	;;
