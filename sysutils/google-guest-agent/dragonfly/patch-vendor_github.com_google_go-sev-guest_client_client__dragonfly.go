--- vendor/github.com/google/go-sev-guest/client/client_dragonfly.go.orig	2026-07-14 23:05:30 UTC
+++ vendor/github.com/google/go-sev-guest/client/client_dragonfly.go
@@ -0,0 +1,80 @@
+// Copyright 2026 Google LLC
+//
+// Licensed under the Apache License, Version 2.0 (the "License");
+// you may not use this file except in compliance with the License.
+// You may obtain a copy of the License at
+//
+//      http://www.apache.org/licenses/LICENSE-2.0
+//
+// Unless required by applicable law or agreed to in writing, software
+// distributed under the License is distributed on an "AS IS" BASIS,
+// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
+// See the License for the specific language governing permissions and
+// limitations under the License.
+
+package client
+
+import (
+	"fmt"
+
+	spb "github.com/google/go-sev-guest/proto/sevsnp"
+)
+
+// DefaultSevGuestDevicePath is the platform's usual device path to the SEV guest.
+const DefaultSevGuestDevicePath = "unknown"
+
+// DragonFlyDevice implements the Device interface with Linux ioctls.
+type DragonFlyDevice struct{}
+
+// Open is not supported on DragonFly.
+func (*DragonFlyDevice) Open(_ string) error {
+	return fmt.Errorf("DragonFly is unsupported")
+}
+
+// OpenDevice fails on DragonFly.
+func OpenDevice() (*DragonFlyDevice, error) {
+	return nil, fmt.Errorf("DragonFly is unsupported")
+}
+
+// Close is not supported on DragonFly.
+func (*DragonFlyDevice) Close() error {
+	return fmt.Errorf("DragonFly is unsupported")
+}
+
+// Ioctl is not supported on DragonFly.
+func (*DragonFlyDevice) Ioctl(_ uintptr, _ any) (uintptr, error) {
+	return 0, fmt.Errorf("DragonFly is unsupported")
+}
+
+// Product is not supported on DragonFly.
+func (*DragonFlyDevice) Product() *spb.SevProduct {
+	return &spb.SevProduct{}
+}
+
+// DragonFlyQuoteProvider implements the QuoteProvider interface with Linux's configfs-tsm.
+type DragonFlyQuoteProvider struct{}
+
+// IsSupported checks if the quote provider is supported.
+func (*DragonFlyQuoteProvider) IsSupported() bool {
+	return false
+}
+
+// GetRawQuote returns byte format attestation plus certificate table via ConfigFS.
+func (*DragonFlyQuoteProvider) GetRawQuote(reportData [64]byte) ([]byte, error) {
+	return nil, fmt.Errorf("DragonFly is unsupported")
+}
+
+// GetRawQuoteAtLevel returns byte format attestation plus certificate table via ConfigFS.
+func (*DragonFlyQuoteProvider) GetRawQuoteAtLevel(reportData [64]byte, level uint) ([]byte, error) {
+	return nil, fmt.Errorf("DragonFly is unsupported")
+}
+
+// GetQuoteProvider returns a supported SEV-SNP QuoteProvider.
+func GetQuoteProvider() (QuoteProvider, error) {
+	return nil, fmt.Errorf("DragonFly is unsupported")
+}
+
+// GetLeveledQuoteProvider returns a supported SEV-SNP LeveledQuoteProvider.
+func GetLeveledQuoteProvider() (LeveledQuoteProvider, error) {
+	return nil, fmt.Errorf("DragonFly is unsupported")
+}
