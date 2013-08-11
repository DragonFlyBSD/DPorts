# New ports collection makefile for:	p5-Test-Pod-Coverage
# Date created:				20 november 2004
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: devel/p5-Test-Pod-Coverage/Makefile 324352 2013-08-07 13:20:32Z az $
#

PORTNAME=	Test-Pod-Coverage
PORTVERSION=	1.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Check for pod coverage in your distribution

RUN_DEPENDS=	p5-Pod-Coverage>0:${PORTSDIR}/devel/p5-Pod-Coverage \
		p5-Test-Simple>0:${PORTSDIR}/devel/p5-Test-Simple
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::Pod::Coverage.3

.include <bsd.port.mk>
