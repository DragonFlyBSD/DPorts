--- vendor/github.com/sourcegraph/zoekt/index/indexfile.go.orig
+++ vendor/github.com/sourcegraph/zoekt/index/indexfile.go
@@ -12,7 +12,7 @@
 // See the License for the specific language governing permissions and
 // limitations under the License.
 
-//go:build linux || darwin || freebsd
+//go:build linux || darwin || freebsd || dragonfly
 
 package index
 
