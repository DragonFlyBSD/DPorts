--- vendor/github.com/sourcegraph/zoekt/index/indexfile.go.orig	2026-11-23 00:00:00 UTC
+++ vendor/github.com/sourcegraph/zoekt/index/indexfile.go
@@ -12,7 +12,7 @@
 // See the License for the specific language governing permissions and
 // limitations under the License.
 
-//go:build linux || darwin || freebsd || netbsd || openbsd || illumos
+//go:build linux || darwin || dragonfly || freebsd || netbsd || openbsd || illumos
 
 package index
 
