# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Test-FailWarnings/Makefile 328390 2013-09-26 16:47:35Z sunpoet $

PORTNAME=	Test-FailWarnings
PORTVERSION=	0.008
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Test
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add test failures if warnings are caught

LICENSE=	AL2

BUILD_DEPENDS=	p5-Capture-Tiny>=0.21:${PORTSDIR}/devel/p5-Capture-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
