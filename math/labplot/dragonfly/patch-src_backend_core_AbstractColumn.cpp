--- src/backend/core/AbstractColumn.cpp.orig	2013-05-05 11:31:55.563429000 +0000
+++ src/backend/core/AbstractColumn.cpp
@@ -39,7 +39,7 @@
 #include <QtCore/QDateTime>
 #include <QtCore/QDate>
 #include <QtCore/QTime>
-#include <math.h>
+#include <cmath>
 #include <QMetaType>
 #include <QDebug>
 
@@ -208,7 +208,7 @@ void AbstractColumn::clear() {}
 bool AbstractColumn::isValid(int row) const {
 	switch (columnMode()) {
 		case AbstractColumn::Numeric:
-			return !isnan(valueAt(row));
+			return !std::isnan(valueAt(row));
 		case AbstractColumn::Text:
 			return !textAt(row).isNull();
 		case AbstractColumn::DateTime:
@@ -462,7 +462,7 @@ double AbstractColumn::minimum() const{
 	double min = INFINITY;
 	for (int row = 0; row < rowCount(); row++) {
 		val = valueAt(row);
-		if (isnan(val))
+		if (std::isnan(val))
 			continue;
 		
 		if (val < min)
@@ -476,7 +476,7 @@ double AbstractColumn::maximum() const{
 	double max = -INFINITY;
 	for (int row = 0; row < rowCount(); row++) {
 		val = valueAt(row);
-		if (isnan(val))
+		if (std::isnan(val))
 			continue;
 		
 		if (val > max)
