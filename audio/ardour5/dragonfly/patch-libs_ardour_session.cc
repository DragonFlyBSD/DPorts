--- libs/ardour/session.cc.orig	2017-09-15 20:56:23 UTC
+++ libs/ardour/session.cc
@@ -3684,7 +3684,7 @@ Session::add_routes_inner (RouteList& ne
 				}
 			}
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 			/* clang complains: 'operator<<' should be declared prior to the call site or in an associated namespace of one of its
 			 * arguments std::ostream& operator<<(std::ostream& o, ARDOUR::PresentationInfo const& rid)"
 			 */
