--- team-framework/bots/cobra/cobra_clientspecificrepository.h.orig	2005-04-12 20:22:05.000000000 +0300
+++ team-framework/bots/cobra/cobra_clientspecificrepository.h
@@ -29,6 +29,7 @@ The original location of this file is co
 #ifndef cobra_CLIENTSPECIFICREPOSITORY
 #define cobra_CLIENTSPECIFICREPOSITORY
 
+#include <memory>
 #include "../../strategies/clientspecificrepository.h"
 #include "../../exceptions/strategyexception.h"
 
