--- vendor/github.com/go-piv/piv-go/v2/piv/pcsc_unix.go.orig	2026-11-19 15:06:31 UTC
+++ vendor/github.com/go-piv/piv-go/v2/piv/pcsc_unix.go
@@ -12,8 +12,8 @@
 // See the License for the specific language governing permissions and
 // limitations under the License.
 
-//go:build darwin || linux || freebsd || openbsd
-// +build darwin linux freebsd openbsd
+//go:build darwin || linux || dragonfly || freebsd || openbsd
+// +build darwin linux dragonfly freebsd openbsd
 
 package piv
 
@@ -21,6 +21,10 @@
 
 // #cgo darwin LDFLAGS: -framework PCSC
 // #cgo linux pkg-config: libpcsclite
+// #cgo dragonfly CFLAGS: -I/usr/local/include/
+// #cgo dragonfly CFLAGS: -I/usr/local/include/PCSC
+// #cgo dragonfly LDFLAGS: -L/usr/local/lib/
+// #cgo dragonfly LDFLAGS: -lpcsclite
 // #cgo freebsd CFLAGS: -I/usr/local/include/
 // #cgo freebsd CFLAGS: -I/usr/local/include/PCSC
 // #cgo freebsd LDFLAGS: -L/usr/local/lib/
