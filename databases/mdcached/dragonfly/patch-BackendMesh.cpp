--- BackendMesh.cpp.orig
+++ BackendMesh.cpp
@@ -94,7 +94,7 @@
  * it at a time.
  */
 void
-BackendConnection::sendCommand(struct mc_header *hcmd) throw (ConnectionException) {
+BackendConnection::sendCommand(struct mc_header *hcmd) {
 	sock_write_mtx.Lock();
 	ssize_t res = send(sock, hcmd, hcmd->total_size, 0);
 	if (res <= 0 || res != (ssize_t)(hcmd->total_size)) {
