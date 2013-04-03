--- src/backend/analysis/StatisticsFilter.cpp.orig	2009-04-26 19:56:10.000000000 +0000
+++ src/backend/analysis/StatisticsFilter.cpp
@@ -28,7 +28,7 @@
  ***************************************************************************/
 #include "StatisticsFilter.h"
 #include "core/AbstractColumn.h"
-#include <math.h>
+#include <cmath>
 
 class StatisticsColumn : public AbstractColumn {
 	public:
@@ -148,7 +148,7 @@ void StatisticsFilter::inputDataChanged(
 	// iterate over all rows, determining first_valid_row, last_valid_row, N, min, max and sum
 	for (int row = 0; row <= column->rowCount(); row++) {
 		double val = m_inputs.at(port)->valueAt(row);
-		if (isnan(val)) continue;
+		if (std::isnan(val)) continue;
 		if (s->first_valid_row == -1) s->first_valid_row = row;
 		s->last_valid_row = row;
 		s->N++;
@@ -167,7 +167,7 @@ void StatisticsFilter::inputDataChanged(
 	s->variance = 0;
 	for (int row = 0; row <= column->rowCount(); row++) {
 		double val = column->valueAt(row);
-		if (isnan(val)) continue;
+		if (std::isnan(val)) continue;
 		s->variance += pow(val - mean, 2);
 	}
 	s->variance /= double(s->N);
