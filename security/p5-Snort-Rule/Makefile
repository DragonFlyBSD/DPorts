# Created by: Paul Schmehl <pauls@utdallas.edu>
# $FreeBSD: security/p5-Snort-Rule/Makefile 342151 2014-02-01 14:41:36Z miwi $

PORTNAME=	Snort-Rule
PORTVERSION=	1.07
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SAXJAZMAN/Snort
PKGNAMEPREFIX=	p5-

MAINTAINER=	pauls@utdallas.edu
COMMENT=	Perl5 extension for dynamically building snort rules

USES=		perl5
USE_PERL5=	configure

PLIST_FILES=	%%SITE_PERL%%/Snort/Rule.pm \
		%%SITE_PERL%%/mach/auto/Snort/Rule/.packlist \
		%%PERL5_MAN3%%/Snort::Rule.3.gz
PLIST_DIRS=	%%SITE_PERL%%/mach/auto/Snort/Rule \
		%%SITE_PERL%%/mach/auto/Snort \
		%%SITE_PERL%%/Snort

.include <bsd.port.mk>
