
$FreeBSD: head/lang/erlang-runtime15/files/patch-lib_runtime__tools_src_observer__backend.erl 307862 2012-11-27 21:34:53Z olgeni $

--- lib/runtime_tools/src/observer_backend.erl.orig
+++ lib/runtime_tools/src/observer_backend.erl
@@ -83,7 +83,7 @@
 	       ets -> ets:info(Table, size);
 	       mnesia -> mnesia:table_info(Table, size)
 	   end,
-    case Size > 0 of
+    case Size =/= undefined andalso Size > 0 of
 	false ->
 	    Parent ! {self(), '$end_of_table'},
 	    normal;
