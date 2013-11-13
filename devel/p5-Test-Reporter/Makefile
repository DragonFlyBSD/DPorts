# $FreeBSD: devel/p5-Test-Reporter/Makefile 333547 2013-11-12 08:03:56Z lth $

PORTNAME=	Test-Reporter
PORTVERSION=	1.60
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Sends test results to cpan-testers@perl.org

RUN_DEPENDS=	p5-Net>0:${PORTSDIR}/net/p5-Net
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>
