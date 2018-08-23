# $FreeBSD: head/devel/p5-Dist-CheckConflicts/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Dist-CheckConflicts
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DOY
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Declare version conflicts for your dist

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Module-Runtime>=0.009:devel/p5-Module-Runtime
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
