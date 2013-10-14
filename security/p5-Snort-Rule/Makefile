# Created by: Paul Schmehl <pauls@utdallas.edu>
# $FreeBSD: security/p5-Snort-Rule/Makefile 327769 2013-09-20 22:55:24Z bapt $

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
		%%SITE_PERL%%/mach/auto/Snort/Rule/.packlist
PLIST_DIRS=	%%SITE_PERL%%/mach/auto/Snort/Rule \
		%%SITE_PERL%%/mach/auto/Snort \
		%%SITE_PERL%%/Snort

MAN3=		Snort::Rule.3

NO_STAGE=	yes
.include <bsd.port.mk>
