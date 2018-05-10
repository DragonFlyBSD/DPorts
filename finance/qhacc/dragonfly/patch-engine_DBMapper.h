--- engine/DBMapper.h.intermediate	2018-03-02 07:38:20.000000000 +0000
+++ engine/DBMapper.h
@@ -57,7 +57,7 @@ public:
 
 protected:
 
-  QSqlDatabase& getConnection( ) const {
+  const QSqlDatabase& getConnection( ) const {
     return connection;
   }
 
