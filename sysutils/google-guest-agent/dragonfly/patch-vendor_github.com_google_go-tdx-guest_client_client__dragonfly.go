--- vendor/github.com/google/go-tdx-guest/client/client_dragonfly.go.orig	2026-07-14 16:04:33 UTC
+++ vendor/github.com/google/go-tdx-guest/client/client_dragonfly.go
@@ -0,0 +1,62 @@
+// Copyright 2026 Google LLC
+//
+// Licensed under the Apache License, Version 2.0 (the "License");
+// you may not use this file except in compliance with the License.
+// You may obtain a copy of the License at
+//
+//	http://www.apache.org/licenses/LICENSE-2.0
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
+	"errors"
+)
+
+var ErrDragonFlyUnsupported = errors.New("DragonFly is unsupported")
+
+// DragonFlyDevice implements the Device interface with Linux ioctls.
+type DragonFlyDevice struct{}
+
+// Open is not supported on DragonFly.
+func (*DragonFlyDevice) Open(_ string) error {
+	return ErrDragonFlyUnsupported
+}
+
+// OpenDevice fails on DragonFly.
+func OpenDevice() (*DragonFlyDevice, error) {
+	return nil, ErrDragonFlyUnsupported
+}
+
+// Close is not supported on DragonFly.
+func (*DragonFlyDevice) Close() error {
+	return ErrDragonFlyUnsupported
+}
+
+// Ioctl is not supported on DragonFly.
+func (*DragonFlyDevice) Ioctl(_ uintptr, _ any) (uintptr, error) {
+	return 0, ErrDragonFlyUnsupported
+}
+
+// DragonFlyConfigFsQuoteProvider implements the QuoteProvider interface to fetch attestation quote via ConfigFS.
+type DragonFlyConfigFsQuoteProvider struct{}
+
+// IsSupported is not supported on DragonFly.
+func (p *DragonFlyConfigFsQuoteProvider) IsSupported() error {
+	return ErrDragonFlyUnsupported
+}
+
+// GetRawQuote is not supported on DragonFly.
+func (p *DragonFlyConfigFsQuoteProvider) GetRawQuote(reportData [64]byte) ([]uint8, error) {
+	return nil, ErrDragonFlyUnsupported
+}
+
+// GetQuoteProvider is not supported on DragonFly.
+func GetQuoteProvider() (*DragonFlyConfigFsQuoteProvider, error) {
+	return nil, ErrDragonFlyUnsupported
+}
