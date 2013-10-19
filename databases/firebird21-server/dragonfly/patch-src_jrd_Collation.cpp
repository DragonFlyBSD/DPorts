--- src/jrd/Collation.cpp.orig	2013-03-19 08:23:18.000000000 +0000
+++ src/jrd/Collation.cpp
@@ -191,157 +191,55 @@ bool MATCHESNAME(Jrd::thread_db* tdbb, J
 
 
 template <class SLEUTHTYPE>
-bool SLEUTHNAME(Jrd::thread_db* tdbb_dummy, Jrd::TextType* obj, USHORT flags,
-				const SLEUTHTYPE* search, SLONG search_len,
-				const SLEUTHTYPE* match, SLONG match_len)
-{
-/**************************************
- *
- *	E V L _ ? ? _ s l e u t h _ c h e c k
- *
- **************************************
- *
- * Functional description
- *	Evaluate the "sleuth" search operator.
- *
- *	Turn the (pointer, byte length) input parameters into
- *	(pointer, end_pointer) for use in SLEUTH_AUX
- *
- **************************************/
-	fb_assert((match_len % sizeof(SLEUTHTYPE)) == 0);
-	fb_assert((search_len % sizeof(SLEUTHTYPE)) == 0);
-	fb_assert(obj->getCanonicalWidth() == sizeof(SLEUTHTYPE));
-
-	const SLEUTHTYPE* const end_match = match + (match_len / sizeof(SLEUTHTYPE));
-	const SLEUTHTYPE* const end_search = search + (search_len / sizeof(SLEUTHTYPE));
-
-	return SLEUTH_AUX(obj, flags, search, end_search, match, end_match);
-}
-
-
-template <class SLEUTHTYPE>
-ULONG SLEUTH_MERGE_NAME(Jrd::thread_db* tdbb_dummy, Jrd::TextType* obj,
-						const SLEUTHTYPE* match, SLONG match_bytes,
-						const SLEUTHTYPE* control, SLONG control_bytes,
-						SLEUTHTYPE* combined, SLONG combined_bytes)
+static bool SLEUTH_CLASS_NAME(
+								 Jrd::TextType* obj,
+								 USHORT flags,
+								 const SLEUTHTYPE* char_class,
+								 const SLEUTHTYPE* const end_class, 
+								 SLEUTHTYPE character)
 {
 /**************************************
  *
- *	E V L _ ? ? _ s l e u t h _ m e r g e
+ *	s l e u t h _ c l a s s
  *
  **************************************
  *
  * Functional description
- *	Merge the matching pattern and control strings to give a cannonical
- *	matching pattern.  Return the length of the combined string. 
- *
- * 	What this routine does is to take the language template, strip off 
- *	the prefix and put it in the output string, then parse the definitions
- *	into an array of character pointers.  The index array is the defined
- *	character.   The routine then takes the actual match pattern and uses
- *	the characters in it to index into the definitions to produce an equivalent
- *	pattern in the cannonical language.
- *
- *	The silly loop setting *v++ to zero initializes the array up to the
- *	highest character defined (also max_op).  Believe it or not, that part
- *	is not a bug.
+ *	See if a character is a member of a class.
+ *	Japanese version operates on short-based buffer,
+ *	instead of SCHAR-based.
  *
  **************************************/
-	fb_assert(match != NULL);
-	fb_assert(control != NULL);
-	fb_assert(combined != NULL);
-
-	fb_assert((match_bytes % sizeof(SLEUTHTYPE)) == 0);
-	fb_assert((control_bytes % sizeof(SLEUTHTYPE)) == 0);
+	fb_assert(char_class != NULL);
+	fb_assert(end_class != NULL);
+	fb_assert(char_class <= end_class);
 	fb_assert(obj->getCanonicalWidth() == sizeof(SLEUTHTYPE));
 
-	const SLEUTHTYPE* const end_match = match + (match_bytes / sizeof(SLEUTHTYPE));
-	const SLEUTHTYPE* const end_control = control + (control_bytes / sizeof(SLEUTHTYPE));
-
-	SLEUTHTYPE max_op = 0;
-	SLEUTHTYPE* comb = combined;
-	SLEUTHTYPE* vector[256];
-	SLEUTHTYPE** v = vector;
-	SLEUTHTYPE temp[256];
-	SLEUTHTYPE* t = temp;
-
-/* Parse control string into substitution strings and initializing string */
+	bool result = true;
 
-	while (control < end_control) {
-		SLEUTHTYPE c = *control++;
-		if (*control == *(SLEUTHTYPE*)obj->getGdmlSubstituteCanonic()) {
-			/* Note: don't allow substitution characters larger than vector */
-			SLEUTHTYPE** const end_vector =
-				vector + (((int)c < FB_NELEM(vector)) ? c : 0);
-			while (v <= end_vector)
-				*v++ = 0;
-			*end_vector = t;
-			++control;
-			while (control < end_control) {
-				c = *control++;
-				if ((t > temp && t[-1] == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic())
-					|| ((c != *(SLEUTHTYPE*)obj->getGdmlCommaCanonic()) && (c != *(SLEUTHTYPE*)obj->getGdmlRParenCanonic())))
-				{
-					*t++ = c;
-				}
-				else
-					break;
-			}
-			*t++ = 0;
-		}
-		else if (c == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic() && control < end_control)
-			*comb++ = *control++;
-		else if (c == *(SLEUTHTYPE*)obj->getGdmlRParenCanonic())
-			break;
-		else if (c != *(SLEUTHTYPE*)obj->getGdmlLParenCanonic())
-			*comb++ = c;
+	if (*char_class == *(SLEUTHTYPE*)obj->getGdmlNotCanonic()) {
+		++char_class;
+		result = false;
 	}
 
-	max_op = v - vector;
-
-/* Interpret matching string, substituting where appropriate */
-
-	while (match < end_match) {
-		const SLEUTHTYPE c = *match++;
-
-		/* if we've got a defined character, slurp the definition */
-
-        SLEUTHTYPE* p;
-		if (c <= max_op && (p = vector[c])) {
-			while (*p)
-				*comb++ = *p++;
-
-			/* if we've got the definition of a quote character, 
-			   slurp the next character too */
-
-			if (comb > combined && comb[-1] == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic() && *match)
-				*comb++ = *match++;
+	while (char_class < end_class) {
+		const SLEUTHTYPE c = *char_class++;
+		if (c == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic()) {
+			if (*char_class++ == character)
+				return true;
 		}
-
-		/* at this point we've got a non-match, but as it might be one of ours, 
-		   quote it. */
-
-		else {
-			if ((((size_t) c) < FB_NELEM(special)) && special[c] &&
-				comb > combined && comb[-1] != *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic())
-			{
-				*comb++ = *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic();
-			}
-			*comb++ = c;
+		else if (*char_class == *(SLEUTHTYPE*)obj->getGdmlRangeCanonic()) {
+			char_class += 2;
+			if (character >= c && character <= char_class[-1])
+				return result;
 		}
+		else if (character == c)
+			return result;
 	}
 
-/* Put in trailing stuff */
-
-	while (control < end_control)
-		*comb++ = *control++;
-
-	/* YYY - need to add code watching for overflow of combined */
-
-	return (comb - combined) * sizeof(SLEUTHTYPE);
+	return !result;
 }
 
-
 template <class SLEUTHTYPE>
 static bool SLEUTH_AUX(
 						  Jrd::TextType* obj,
@@ -472,57 +370,163 @@ static bool SLEUTH_AUX(
 }
 
 
+
 template <class SLEUTHTYPE>
-static bool SLEUTH_CLASS_NAME(
-								 Jrd::TextType* obj,
-								 USHORT flags,
-								 const SLEUTHTYPE* char_class,
-								 const SLEUTHTYPE* const end_class, 
-								 SLEUTHTYPE character)
+bool SLEUTHNAME(Jrd::thread_db* tdbb_dummy, Jrd::TextType* obj, USHORT flags,
+				const SLEUTHTYPE* search, SLONG search_len,
+				const SLEUTHTYPE* match, SLONG match_len)
 {
 /**************************************
  *
- *	s l e u t h _ c l a s s
+ *	E V L _ ? ? _ s l e u t h _ c h e c k
  *
  **************************************
  *
  * Functional description
- *	See if a character is a member of a class.
- *	Japanese version operates on short-based buffer,
- *	instead of SCHAR-based.
+ *	Evaluate the "sleuth" search operator.
+ *
+ *	Turn the (pointer, byte length) input parameters into
+ *	(pointer, end_pointer) for use in SLEUTH_AUX
  *
  **************************************/
-	fb_assert(char_class != NULL);
-	fb_assert(end_class != NULL);
-	fb_assert(char_class <= end_class);
+	fb_assert((match_len % sizeof(SLEUTHTYPE)) == 0);
+	fb_assert((search_len % sizeof(SLEUTHTYPE)) == 0);
 	fb_assert(obj->getCanonicalWidth() == sizeof(SLEUTHTYPE));
 
-	bool result = true;
+	const SLEUTHTYPE* const end_match = match + (match_len / sizeof(SLEUTHTYPE));
+	const SLEUTHTYPE* const end_search = search + (search_len / sizeof(SLEUTHTYPE));
 
-	if (*char_class == *(SLEUTHTYPE*)obj->getGdmlNotCanonic()) {
-		++char_class;
-		result = false;
+	return SLEUTH_AUX(obj, flags, search, end_search, match, end_match);
+}
+
+
+template <class SLEUTHTYPE>
+ULONG SLEUTH_MERGE_NAME(Jrd::thread_db* tdbb_dummy, Jrd::TextType* obj,
+						const SLEUTHTYPE* match, SLONG match_bytes,
+						const SLEUTHTYPE* control, SLONG control_bytes,
+						SLEUTHTYPE* combined, SLONG combined_bytes)
+{
+/**************************************
+ *
+ *	E V L _ ? ? _ s l e u t h _ m e r g e
+ *
+ **************************************
+ *
+ * Functional description
+ *	Merge the matching pattern and control strings to give a cannonical
+ *	matching pattern.  Return the length of the combined string. 
+ *
+ * 	What this routine does is to take the language template, strip off 
+ *	the prefix and put it in the output string, then parse the definitions
+ *	into an array of character pointers.  The index array is the defined
+ *	character.   The routine then takes the actual match pattern and uses
+ *	the characters in it to index into the definitions to produce an equivalent
+ *	pattern in the cannonical language.
+ *
+ *	The silly loop setting *v++ to zero initializes the array up to the
+ *	highest character defined (also max_op).  Believe it or not, that part
+ *	is not a bug.
+ *
+ **************************************/
+	fb_assert(match != NULL);
+	fb_assert(control != NULL);
+	fb_assert(combined != NULL);
+
+	fb_assert((match_bytes % sizeof(SLEUTHTYPE)) == 0);
+	fb_assert((control_bytes % sizeof(SLEUTHTYPE)) == 0);
+	fb_assert(obj->getCanonicalWidth() == sizeof(SLEUTHTYPE));
+
+	const SLEUTHTYPE* const end_match = match + (match_bytes / sizeof(SLEUTHTYPE));
+	const SLEUTHTYPE* const end_control = control + (control_bytes / sizeof(SLEUTHTYPE));
+
+	SLEUTHTYPE max_op = 0;
+	SLEUTHTYPE* comb = combined;
+	SLEUTHTYPE* vector[256];
+	SLEUTHTYPE** v = vector;
+	SLEUTHTYPE temp[256];
+	SLEUTHTYPE* t = temp;
+
+/* Parse control string into substitution strings and initializing string */
+
+	while (control < end_control) {
+		SLEUTHTYPE c = *control++;
+		if (*control == *(SLEUTHTYPE*)obj->getGdmlSubstituteCanonic()) {
+			/* Note: don't allow substitution characters larger than vector */
+			SLEUTHTYPE** const end_vector =
+				vector + (((int)c < FB_NELEM(vector)) ? c : 0);
+			while (v <= end_vector)
+				*v++ = 0;
+			*end_vector = t;
+			++control;
+			while (control < end_control) {
+				c = *control++;
+				if ((t > temp && t[-1] == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic())
+					|| ((c != *(SLEUTHTYPE*)obj->getGdmlCommaCanonic()) && (c != *(SLEUTHTYPE*)obj->getGdmlRParenCanonic())))
+				{
+					*t++ = c;
+				}
+				else
+					break;
+			}
+			*t++ = 0;
+		}
+		else if (c == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic() && control < end_control)
+			*comb++ = *control++;
+		else if (c == *(SLEUTHTYPE*)obj->getGdmlRParenCanonic())
+			break;
+		else if (c != *(SLEUTHTYPE*)obj->getGdmlLParenCanonic())
+			*comb++ = c;
 	}
 
-	while (char_class < end_class) {
-		const SLEUTHTYPE c = *char_class++;
-		if (c == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic()) {
-			if (*char_class++ == character)
-				return true;
+	max_op = v - vector;
+
+/* Interpret matching string, substituting where appropriate */
+
+	while (match < end_match) {
+		const SLEUTHTYPE c = *match++;
+
+		/* if we've got a defined character, slurp the definition */
+
+        SLEUTHTYPE* p;
+		if (c <= max_op && (p = vector[c])) {
+			while (*p)
+				*comb++ = *p++;
+
+			/* if we've got the definition of a quote character, 
+			   slurp the next character too */
+
+			if (comb > combined && comb[-1] == *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic() && *match)
+				*comb++ = *match++;
 		}
-		else if (*char_class == *(SLEUTHTYPE*)obj->getGdmlRangeCanonic()) {
-			char_class += 2;
-			if (character >= c && character <= char_class[-1])
-				return result;
+
+		/* at this point we've got a non-match, but as it might be one of ours, 
+		   quote it. */
+
+		else {
+			if ((((size_t) c) < FB_NELEM(special)) && special[c] &&
+				comb > combined && comb[-1] != *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic())
+			{
+				*comb++ = *(SLEUTHTYPE*)obj->getGdmlQuoteCanonic();
+			}
+			*comb++ = c;
 		}
-		else if (character == c)
-			return result;
 	}
 
-	return !result;
+/* Put in trailing stuff */
+
+	while (control < end_control)
+		*comb++ = *control++;
+
+	/* YYY - need to add code watching for overflow of combined */
+
+	return (comb - combined) * sizeof(SLEUTHTYPE);
 }
 
 
+
+
+
+
 // Below are templates for functions used in Collation implementation
 
 class NullStrConverter {
