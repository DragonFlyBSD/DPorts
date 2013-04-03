--- src/backend/core/AbstractColumn.cpp.orig	2012-11-04 08:26:43.000000000 +0000
+++ src/backend/core/AbstractColumn.cpp
@@ -39,7 +39,7 @@
 #include <QtCore/QDateTime>
 #include <QtCore/QDate>
 #include <QtCore/QTime>
-#include <math.h>
+#include <cmath>
 #include <QMetaType>
 
 /**
@@ -211,7 +211,7 @@ void AbstractColumn::clear() {}
 bool AbstractColumn::isValid(int row) const {
 	switch (columnMode()) {
 		case SciDAVis::Numeric:
-			return !isnan(valueAt(row));
+			return !std::isnan(valueAt(row));
 		case SciDAVis::Text:
 			return !textAt(row).isNull();
 		case SciDAVis::DateTime:
@@ -465,7 +465,7 @@ double AbstractColumn::minimum() const{
 	double min = INFINITY;
 	for (int row = 0; row < rowCount(); row++) {
 		val = valueAt(row);
-		if (isnan(val))
+		if (std::isnan(val))
 			continue;
 		
 		if (val < min)
@@ -479,7 +479,7 @@ double AbstractColumn::maximum() const{
 	double max = -INFINITY;
 	for (int row = 0; row < rowCount(); row++) {
 		val = valueAt(row);
-		if (isnan(val))
+		if (std::isnan(val))
 			continue;
 		
 		if (val > max)
