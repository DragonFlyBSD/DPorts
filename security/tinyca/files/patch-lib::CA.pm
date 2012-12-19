
$FreeBSD: ports/security/tinyca/files/patch-lib::CA.pm,v 1.3 2012/11/17 06:01:21 svnexp Exp $

--- lib/CA.pm.orig
+++ lib/CA.pm
@@ -883,7 +883,7 @@
    };
 
    # create configuration file
-   my $in  = $self->{'init'}->{'templatedir'}."/openssl.cnf";
+   my $in  = $self->{'init'}->{'templatedir'}."/tinyca.cnf";
    my $out = $self->{$opts->{'name'}}->{'dir'}."/openssl.cnf";
 
    open(IN, "<$in") || do {
