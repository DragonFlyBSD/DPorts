--- src/solnp.cpp.orig
+++ src/solnp.cpp
@@ -4,25 +4,25 @@
 #include "subnp_helpers.h"
 
 subnp_state::subnp_state(Rcpp::List& state)
-    : pars(state["augmented_parameters"]),
-      lagrange_mults(state["lagrange_mults"]),
-      scaled_eval(state["scaled_eval"]),
-      augmented_hessian(state["augmented_hessian"]),
-      lower(state["lower_tmp"]),
-      upper(state["upper_tmp"]),
-      problem_indicators(state["problem_indicators"]),
+    : pars(Rcpp::as<arma::vec>(state["augmented_parameters"])),
+      lagrange_mults(Rcpp::as<arma::vec>(state["lagrange_mults"])),
+      scaled_eval(Rcpp::as<arma::vec>(state["scaled_eval"])),
+      augmented_hessian(Rcpp::as<arma::mat>(state["augmented_hessian"])),
+      lower(Rcpp::as<arma::vec>(state["lower_tmp"])),
+      upper(Rcpp::as<arma::vec>(state["upper_tmp"])),
+      problem_indicators(Rcpp::as<Rcpp::IntegerVector>(state["problem_indicators"])),
       lambda(Rcpp::as<double>(state["lambda"])),
       penalty_param(state["penalty_param"]),
       tol(state["tol"]),
       ftol(state["ftol"]),
       min_iter(state["min_iter"]),
       trace(state["trace"]),
-      solnp_fun(state["solnp_fun"]),
-      solnp_gradfun(state["solnp_gradfun"]),
-      solnp_eqfun(state["solnp_eqfun"]),
-      solnp_ineqfun(state["solnp_ineqfun"]),
-      solnp_eqjac(state["solnp_eqjac"]),
-      solnp_ineqjac(state["solnp_ineqjac"])
+      solnp_fun(Rcpp::as<Rcpp::Function>(state["solnp_fun"])),
+      solnp_gradfun(Rcpp::as<Rcpp::Function>(state["solnp_gradfun"])),
+      solnp_eqfun(Rcpp::as<Rcpp::Function>(state["solnp_eqfun"])),
+      solnp_ineqfun(Rcpp::as<Rcpp::Function>(state["solnp_ineqfun"])),
+      solnp_eqjac(Rcpp::as<Rcpp::Function>(state["solnp_eqjac"])),
+      solnp_ineqjac(Rcpp::as<Rcpp::Function>(state["solnp_ineqjac"]))
 {
     // Defensive assignment for possibly missing or NULL ineq_lower and ineq_upper
     if (state.containsElementNamed("ineq_lower") && !Rf_isNull(state["ineq_lower"])) {
