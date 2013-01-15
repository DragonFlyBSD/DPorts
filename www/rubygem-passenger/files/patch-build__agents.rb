$NetBSD$

Add a Rake target for the agents only.
--- build/agents.rb.orig	2012-04-13 08:09:57.000000000 +0000
+++ build/agents.rb
@@ -77,4 +77,13 @@ end
 
 task 'common:clean' do
 	sh "rm -f #{AGENT_OUTPUT_DIR}PassengerWatchdog #{AGENT_OUTPUT_DIR}PassengerLoggingAgent"
-end
\ No newline at end of file
+end
+
+desc "Build just the agents"
+task :agents => [
+	AGENT_OUTPUT_DIR + 'apache2/PassengerHelperAgent',
+	AGENT_OUTPUT_DIR + 'nginx/PassengerHelperAgent',
+	AGENT_OUTPUT_DIR + 'PassengerWatchdog',
+	AGENT_OUTPUT_DIR + 'PassengerLoggingAgent',
+	:native_support
+]
