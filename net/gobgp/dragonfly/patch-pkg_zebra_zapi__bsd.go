--- pkg/zebra/zapi_bsd.go.orig	2026-10-26 05:20:03 UTC
+++ pkg/zebra/zapi_bsd.go
@@ -13,7 +13,7 @@
 // See the License for the specific language governing permissions and
 // limitations under the License.
 
-//go:build freebsd || netbsd || openbsd
+//go:build dragonfly || freebsd || netbsd || openbsd
 // +build freebsd netbsd openbsd
 
 package zebra
