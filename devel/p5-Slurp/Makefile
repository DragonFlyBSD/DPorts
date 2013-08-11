# Created by: Philip M. Gollucci <pgollucci@p6m7g8.com>
# $FreeBSD: devel/p5-Slurp/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Slurp
PORTVERSION=	0.4
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ROBAU
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Slurp entire files into variables

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

MAN3=		Slurp.3

PLIST_FILES=	%%SITE_PERL%%/Slurp.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Slurp/.packlist
PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/Slurp

.include <bsd.port.mk>
