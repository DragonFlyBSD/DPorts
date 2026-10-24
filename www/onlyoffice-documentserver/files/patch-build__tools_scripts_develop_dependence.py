--- build_tools/scripts/develop/dependence.py.orig	2026-05-15 19:11:43 UTC
+++ build_tools/scripts/develop/dependence.py
@@ -687,7 +687,7 @@
   connectionString = postgreLoginSrt + ' -c "SELECT setting FROM pg_settings WHERE name = ' + "'port'" + ';"'
 
   if (host_platform == 'linux'):
-    result = os.system(postgreLoginSrt + ' -c "\q"')
+    result = os.system(postgreLoginSrt + r' -c "\q"')
     connectionResult = base.run_command(connectionString)
     expected_port = config.option("db-port")
 
@@ -744,11 +744,11 @@
   creatdb_path = base.get_script_dir() + "/../../server/schema/postgresql/createdb.sql"
 
   # Check if user exists
-  user_check_result = base.run_command_in_dir(postgre_path_to_bin, postgreLoginRoot + ' -c "\du ' + dbUser + '"')
+  user_check_result = base.run_command_in_dir(postgre_path_to_bin, postgreLoginRoot + r' -c "\du ' + dbUser + '"')
   
   if (user_check_result['stdout'].find(dbUser) != -1):
     # User exists, check password
-    if (os.system(postgreLoginDbUser + '-c "\q"') != 0):
+    if (os.system(postgreLoginDbUser + r'-c "\q"') != 0):
       print('Invalid user password, changing...')
       result = change_userPass(dbUser, dbPass, postgre_path_to_bin) and result
   else:
