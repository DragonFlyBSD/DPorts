--- modules/ast/src/cpp/types/types_tools.cpp.orig	2020-02-25 09:59:43 UTC
+++ modules/ast/src/cpp/types/types_tools.cpp
@@ -533,7 +533,7 @@ int checkIndexesArguments(InternalType*
                 double minIndex = _pRef == NULL || _pRef->isList() == false ? 1 : 0;
                 for (int j = 0; j < size; ++j)
                 {
-                    if (dbl[j] < minIndex || isnan(dbl[j]))
+                    if (dbl[j] < minIndex || std::isnan(dbl[j]))
                     {
                         if (pCurrentArg->isDeletable())
                         {
