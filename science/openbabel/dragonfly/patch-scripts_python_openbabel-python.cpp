--- scripts/python/openbabel-python.cpp.orig	2012-10-11 19:20:57 UTC
+++ scripts/python/openbabel-python.cpp
@@ -25531,64 +25531,64 @@ SWIGINTERN PyObject *_wrap_OBReaction_Nu
   result = (int)((OpenBabel::OBReaction const *)arg1)->NumProducts(); resultobj = SWIG_From_int(static_cast< int >(result));
   return resultobj; fail: return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_AddReactant(PyObject *SWIGUNUSEDPARM(self), PyObject *args) { PyObject *resultobj = 0;
-  OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > arg2 ;
+  OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > arg2 ;
   void *argp1 = 0 ; int res1 = 0 ; void *argp2 ; int res2 = 0 ; PyObject *swig_obj[2] ;
   if (!SWIG_Python_UnpackTuple(args,"OBReaction_AddReactant",2,2,swig_obj)) SWIG_fail;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_AddReactant" "', argument " "1"" of type '" "OpenBabel::OBReaction *""'");  }
    arg1 = reinterpret_cast< OpenBabel::OBReaction * >(argp1); {
     res2 = SWIG_ConvertPtr(swig_obj[1], &argp2, SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t,  0  | 0); if (!SWIG_IsOK(res2)) {
-      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_AddReactant" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'");  }
+      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_AddReactant" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'");  }
        if (!argp2) {
-      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_AddReactant" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'"); }
-     else { shared_ptr< OpenBabel::OBMol > * temp = reinterpret_cast< shared_ptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
+      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_AddReactant" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'"); }
+     else { obsharedptr< OpenBabel::OBMol > * temp = reinterpret_cast< obsharedptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
       if (SWIG_IsNewObj(res2)) delete temp; }  }  (arg1)->AddReactant(arg2); resultobj = SWIG_Py_Void(); return resultobj; fail:
   return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_AddProduct(PyObject *SWIGUNUSEDPARM(self), PyObject *args) { PyObject *resultobj = 0;
-  OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > arg2 ;
+  OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > arg2 ;
   void *argp1 = 0 ; int res1 = 0 ; void *argp2 ; int res2 = 0 ; PyObject *swig_obj[2] ;
   if (!SWIG_Python_UnpackTuple(args,"OBReaction_AddProduct",2,2,swig_obj)) SWIG_fail;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_AddProduct" "', argument " "1"" of type '" "OpenBabel::OBReaction *""'");  }
    arg1 = reinterpret_cast< OpenBabel::OBReaction * >(argp1); {
     res2 = SWIG_ConvertPtr(swig_obj[1], &argp2, SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t,  0  | 0); if (!SWIG_IsOK(res2)) {
-      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_AddProduct" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'");  }
+      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_AddProduct" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'");  }
        if (!argp2) {
-      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_AddProduct" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'"); }
-     else { shared_ptr< OpenBabel::OBMol > * temp = reinterpret_cast< shared_ptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
+      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_AddProduct" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'"); }
+     else { obsharedptr< OpenBabel::OBMol > * temp = reinterpret_cast< obsharedptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
       if (SWIG_IsNewObj(res2)) delete temp; }  }  (arg1)->AddProduct(arg2); resultobj = SWIG_Py_Void(); return resultobj; fail:
   return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_SetTransitionState(PyObject *SWIGUNUSEDPARM(self), PyObject *args) {
   PyObject *resultobj = 0; OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ;
-  SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > arg2 ; void *argp1 = 0 ; int res1 = 0 ; void *argp2 ; int res2 = 0 ;
+  SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > arg2 ; void *argp1 = 0 ; int res1 = 0 ; void *argp2 ; int res2 = 0 ;
   PyObject *swig_obj[2] ; if (!SWIG_Python_UnpackTuple(args,"OBReaction_SetTransitionState",2,2,swig_obj)) SWIG_fail;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_SetTransitionState" "', argument " "1"" of type '" "OpenBabel::OBReaction *""'");  }
    arg1 = reinterpret_cast< OpenBabel::OBReaction * >(argp1); {
     res2 = SWIG_ConvertPtr(swig_obj[1], &argp2, SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t,  0  | 0); if (!SWIG_IsOK(res2)) {
-      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_SetTransitionState" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'");  }
+      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_SetTransitionState" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'");  }
        if (!argp2) {
-      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_SetTransitionState" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'"); }
-     else { shared_ptr< OpenBabel::OBMol > * temp = reinterpret_cast< shared_ptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
+      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_SetTransitionState" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'"); }
+     else { obsharedptr< OpenBabel::OBMol > * temp = reinterpret_cast< obsharedptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
       if (SWIG_IsNewObj(res2)) delete temp; }  }  (arg1)->SetTransitionState(arg2); resultobj = SWIG_Py_Void();
   return resultobj; fail: return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_AddAgent(PyObject *SWIGUNUSEDPARM(self), PyObject *args) { PyObject *resultobj = 0;
-  OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > arg2 ;
+  OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > arg2 ;
   void *argp1 = 0 ; int res1 = 0 ; void *argp2 ; int res2 = 0 ; PyObject *swig_obj[2] ;
   if (!SWIG_Python_UnpackTuple(args,"OBReaction_AddAgent",2,2,swig_obj)) SWIG_fail;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_AddAgent" "', argument " "1"" of type '" "OpenBabel::OBReaction *""'");  }
    arg1 = reinterpret_cast< OpenBabel::OBReaction * >(argp1); {
     res2 = SWIG_ConvertPtr(swig_obj[1], &argp2, SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t,  0  | 0); if (!SWIG_IsOK(res2)) {
-      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_AddAgent" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'");  }
+      SWIG_exception_fail(SWIG_ArgError(res2), "in method '" "OBReaction_AddAgent" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'");  }
        if (!argp2) {
-      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_AddAgent" "', argument " "2"" of type '" "shared_ptr< OpenBabel::OBMol > const""'"); }
-     else { shared_ptr< OpenBabel::OBMol > * temp = reinterpret_cast< shared_ptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
+      SWIG_exception_fail(SWIG_ValueError, "invalid null reference " "in method '" "OBReaction_AddAgent" "', argument " "2"" of type '" "obsharedptr< OpenBabel::OBMol > const""'"); }
+     else { obsharedptr< OpenBabel::OBMol > * temp = reinterpret_cast< obsharedptr< OpenBabel::OBMol > * >(argp2); arg2 = *temp;
       if (SWIG_IsNewObj(res2)) delete temp; }  }  (arg1)->AddAgent(arg2); resultobj = SWIG_Py_Void(); return resultobj; fail:
   return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_GetReactant(PyObject *SWIGUNUSEDPARM(self), PyObject *args) { PyObject *resultobj = 0;
   OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; unsigned int arg2 ; void *argp1 = 0 ; int res1 = 0 ;
-  unsigned int val2 ; int ecode2 = 0 ; PyObject *swig_obj[2] ; SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > result;
+  unsigned int val2 ; int ecode2 = 0 ; PyObject *swig_obj[2] ; SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > result;
   if (!SWIG_Python_UnpackTuple(args,"OBReaction_GetReactant",2,2,swig_obj)) SWIG_fail;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_GetReactant" "', argument " "1"" of type '" "OpenBabel::OBReaction *""'");  }
@@ -25596,11 +25596,11 @@ SWIGINTERN PyObject *_wrap_OBReaction_Ge
   if (!SWIG_IsOK(ecode2)) {
     SWIG_exception_fail(SWIG_ArgError(ecode2), "in method '" "OBReaction_GetReactant" "', argument " "2"" of type '" "unsigned int""'"); }
     arg2 = static_cast< unsigned int >(val2); result = (arg1)->GetReactant(arg2);
-  resultobj = SWIG_NewPointerObj((new shared_ptr< OpenBabel::OBMol >(static_cast< const shared_ptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
+  resultobj = SWIG_NewPointerObj((new obsharedptr< OpenBabel::OBMol >(static_cast< const obsharedptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
   return resultobj; fail: return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_GetProduct(PyObject *SWIGUNUSEDPARM(self), PyObject *args) { PyObject *resultobj = 0;
   OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; unsigned int arg2 ; void *argp1 = 0 ; int res1 = 0 ;
-  unsigned int val2 ; int ecode2 = 0 ; PyObject *swig_obj[2] ; SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > result;
+  unsigned int val2 ; int ecode2 = 0 ; PyObject *swig_obj[2] ; SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > result;
   if (!SWIG_Python_UnpackTuple(args,"OBReaction_GetProduct",2,2,swig_obj)) SWIG_fail;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_GetProduct" "', argument " "1"" of type '" "OpenBabel::OBReaction *""'");  }
@@ -25608,24 +25608,24 @@ SWIGINTERN PyObject *_wrap_OBReaction_Ge
   if (!SWIG_IsOK(ecode2)) {
     SWIG_exception_fail(SWIG_ArgError(ecode2), "in method '" "OBReaction_GetProduct" "', argument " "2"" of type '" "unsigned int""'"); }
     arg2 = static_cast< unsigned int >(val2); result = (arg1)->GetProduct(arg2);
-  resultobj = SWIG_NewPointerObj((new shared_ptr< OpenBabel::OBMol >(static_cast< const shared_ptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
+  resultobj = SWIG_NewPointerObj((new obsharedptr< OpenBabel::OBMol >(static_cast< const obsharedptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
   return resultobj; fail: return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_GetTransitionState(PyObject *SWIGUNUSEDPARM(self), PyObject *args) {
   PyObject *resultobj = 0; OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; void *argp1 = 0 ; int res1 = 0 ;
-  PyObject *swig_obj[1] ; SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > result; if (!args) SWIG_fail; swig_obj[0] = args;
+  PyObject *swig_obj[1] ; SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > result; if (!args) SWIG_fail; swig_obj[0] = args;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_GetTransitionState" "', argument " "1"" of type '" "OpenBabel::OBReaction const *""'");  }
    arg1 = reinterpret_cast< OpenBabel::OBReaction * >(argp1);
   result = ((OpenBabel::OBReaction const *)arg1)->GetTransitionState();
-  resultobj = SWIG_NewPointerObj((new shared_ptr< OpenBabel::OBMol >(static_cast< const shared_ptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
+  resultobj = SWIG_NewPointerObj((new obsharedptr< OpenBabel::OBMol >(static_cast< const obsharedptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
   return resultobj; fail: return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_GetAgent(PyObject *SWIGUNUSEDPARM(self), PyObject *args) { PyObject *resultobj = 0;
   OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; void *argp1 = 0 ; int res1 = 0 ; PyObject *swig_obj[1] ;
-  SwigValueWrapper< shared_ptr< OpenBabel::OBMol > > result; if (!args) SWIG_fail; swig_obj[0] = args;
+  SwigValueWrapper< obsharedptr< OpenBabel::OBMol > > result; if (!args) SWIG_fail; swig_obj[0] = args;
   res1 = SWIG_ConvertPtr(swig_obj[0], &argp1,SWIGTYPE_p_OpenBabel__OBReaction, 0 |  0 ); if (!SWIG_IsOK(res1)) {
     SWIG_exception_fail(SWIG_ArgError(res1), "in method '" "OBReaction_GetAgent" "', argument " "1"" of type '" "OpenBabel::OBReaction const *""'");  }
    arg1 = reinterpret_cast< OpenBabel::OBReaction * >(argp1); result = ((OpenBabel::OBReaction const *)arg1)->GetAgent();
-  resultobj = SWIG_NewPointerObj((new shared_ptr< OpenBabel::OBMol >(static_cast< const shared_ptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
+  resultobj = SWIG_NewPointerObj((new obsharedptr< OpenBabel::OBMol >(static_cast< const obsharedptr< OpenBabel::OBMol >& >(result))), SWIGTYPE_p_shared_ptrT_OpenBabel__OBMol_t, SWIG_POINTER_OWN |  0 );
   return resultobj; fail: return NULL; }
 SWIGINTERN PyObject *_wrap_OBReaction_GetTitle(PyObject *SWIGUNUSEDPARM(self), PyObject *args) { PyObject *resultobj = 0;
   OpenBabel::OBReaction *arg1 = (OpenBabel::OBReaction *) 0 ; void *argp1 = 0 ; int res1 = 0 ; PyObject *swig_obj[1] ;
@@ -56173,7 +56173,7 @@ static swig_type_info _swigt__p_p_double
 static swig_type_info _swigt__p_p_int = {"_p_p_int", "int **", 0, 0, (void*)0, 0};
 static swig_type_info _swigt__p_reference = {"_p_reference", "reference *", 0, 0, (void*)0, 0};
 static swig_type_info _swigt__p_second_type = {"_p_second_type", "second_type *", 0, 0, (void*)0, 0};
-static swig_type_info _swigt__p_shared_ptrT_OpenBabel__OBMol_t = {"_p_shared_ptrT_OpenBabel__OBMol_t", "shared_ptr< OpenBabel::OBMol > *", 0, 0, (void*)0, 0};
+static swig_type_info _swigt__p_shared_ptrT_OpenBabel__OBMol_t = {"_p_shared_ptrT_OpenBabel__OBMol_t", "obsharedptr< OpenBabel::OBMol > *", 0, 0, (void*)0, 0};
 static swig_type_info _swigt__p_size_type = {"_p_size_type", "size_type *", 0, 0, (void*)0, 0};
 static swig_type_info _swigt__p_std__allocatorT_std__vectorT_std__pairT_unsigned_int_unsigned_int_t_std__allocatorT_std__pairT_unsigned_int_unsigned_int_t_t_t_t = {"_p_std__allocatorT_std__vectorT_std__pairT_unsigned_int_unsigned_int_t_std__allocatorT_std__pairT_unsigned_int_unsigned_int_t_t_t_t", "std::allocator< std::vector< std::pair< unsigned int,unsigned int >,std::allocator< std::pair< unsigned int,unsigned int > > > > *|std::vector< std::vector< std::pair< unsigned int,unsigned int > > >::allocator_type *", 0, 0, (void*)0, 0};
 static swig_type_info _swigt__p_std__binary_functionT_char_const_p_char_const_p_bool_t = {"_p_std__binary_functionT_char_const_p_char_const_p_bool_t", "std::binary_function< char const *,char const *,bool > *", 0, 0, (void*)0, 0};
