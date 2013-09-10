# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Fatal/Makefile 326671 2013-09-07 17:58:27Z az $

PORTNAME=	Test-Fatal
PORTVERSION=	0.010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Incredibly simple helpers for testing code with exceptions

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Try-Tiny>=0.07:${PORTSDIR}/lang/p5-Try-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::Fatal.3

.include <bsd.port.mk>
