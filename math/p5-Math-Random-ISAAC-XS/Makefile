# New ports collection makefile for:	Math::Random::ISAAC::XS
# Date created:				07 Dec, 2009
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-Random-ISAAC-XS/Makefile,v 1.5 2012/11/17 05:59:26 svnexp Exp $
#

PORTNAME=	Math-Random-ISAAC-XS
PORTVERSION=	1.004
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JAWNSY
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	C implementation of the ISAAC PRNG Algorithm

BUILD_DEPENDS=	p5-Test-NoWarnings>0:${PORTSDIR}/devel/p5-Test-NoWarnings
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		Math::Random::ISAAC::XS.3

.include <bsd.port.mk>
