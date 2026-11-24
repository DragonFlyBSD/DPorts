--- internal/fido/fido.go.orig	2026-11-19 15:16:26 UTC
+++ internal/fido/fido.go
@@ -15,7 +15,7 @@
 // You should have received a copy of the GNU General Public License
 // along with Proton Mail Bridge. If not, see <https://www.gnu.org/licenses/>.
 
-//go:build darwin || linux || freebsd
+//go:build darwin || dragonfly || linux || freebsd
 
 package fido
 
