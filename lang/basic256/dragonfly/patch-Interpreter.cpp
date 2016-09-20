--- Interpreter.cpp.intermediate	2016-09-20 19:54:09 UTC
+++ Interpreter.cpp
@@ -2662,7 +2662,7 @@ Interpreter::execByteCode() {
                             break;
                         case OP_TAN:
                             val = tan(val);
-                            if (isinf(val)) {
+                            if (std::isinf(val)) {
                                 errornum = ERROR_INFINITY;
                                 stack.pushint(0);
                             } else {
@@ -2722,7 +2722,7 @@ Interpreter::execByteCode() {
                             break;
                         case OP_EXP:
                             val = exp(val);
-                            if (isinf(val)) {
+                            if (std::isinf(val)) {
                                 errornum = ERROR_INFINITY;
                                 stack.pushint(0);
                             } else {
@@ -2738,7 +2738,7 @@ Interpreter::execByteCode() {
                     double oneval = stack.popfloat();
                     double twoval = stack.popfloat();
                     double ans = twoval + oneval;
-                    if (isinf(ans)) {
+                    if (std::isinf(ans)) {
                         errornum = ERROR_INFINITY;
                         stack.pushint(0);
                     } else {
@@ -2751,7 +2751,7 @@ Interpreter::execByteCode() {
                     double oneval = stack.popfloat();
                     double twoval = stack.popfloat();
                     double ans = twoval - oneval;
-                    if (isinf(ans)) {
+                    if (std::isinf(ans)) {
                         errornum = ERROR_INFINITY;
                         stack.pushint(0);
                     } else {
@@ -2764,7 +2764,7 @@ Interpreter::execByteCode() {
                     double oneval = stack.popfloat();
                     double twoval = stack.popfloat();
                     double ans = twoval * oneval;
-                    if (isinf(ans)) {
+                    if (std::isinf(ans)) {
                         errornum = ERROR_INFINITY;
                         stack.pushint(0);
                     } else {
@@ -2781,7 +2781,7 @@ Interpreter::execByteCode() {
                         stack.pushint(0);
                     } else {
                         double ans = fmod(twoval, oneval);
-                        if (isinf(ans)) {
+                        if (std::isinf(ans)) {
                             errornum = ERROR_INFINITY;
                             stack.pushint(0);
                         } else {
@@ -2799,7 +2799,7 @@ Interpreter::execByteCode() {
                         stack.pushint(0);
                     } else {
                         double ans = twoval / oneval;
-                        if (isinf(ans)) {
+                        if (std::isinf(ans)) {
                             errornum = ERROR_INFINITY;
                             stack.pushint(0);
                         } else {
@@ -2818,7 +2818,7 @@ Interpreter::execByteCode() {
                     } else {
                         double intpart;
                         modf(twoval /oneval, &intpart);
-                        if (isinf(intpart)) {
+                        if (std::isinf(intpart)) {
                             errornum = ERROR_INFINITY;
                             stack.pushint(0);
                         } else {
@@ -2836,7 +2836,7 @@ Interpreter::execByteCode() {
                         errornum = ERROR_NOTANUMBER;
                         stack.pushint(0);
                     } else {
-                        if (isinf(ans)) {
+                        if (std::isinf(ans)) {
                             errornum = ERROR_INFINITY;
                             stack.pushint(0);
                         } else {
