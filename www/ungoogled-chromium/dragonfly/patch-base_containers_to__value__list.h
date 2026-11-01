diff --git base/containers/to_value_list.h base/containers/to_value_list.h
index 643ccd015bfe..01735ae80b80 100644
--- base/containers/to_value_list.h
+++ base/containers/to_value_list.h
@@ -36,7 +36,7 @@ Value::List ToValueList(Range&& range, Proj proj = {}) {
   auto container = Value::List::with_capacity(std::ranges::size(range));
   std::ranges::for_each(
       std::forward<Range>(range),
-      [&]<typename T>(T&& value) { container.Append(std::forward<T>(value)); },
+      [&]<typename T>(T&& value) { container.Append(std::move(value)); },
       std::move(proj));
   return container;
 }
