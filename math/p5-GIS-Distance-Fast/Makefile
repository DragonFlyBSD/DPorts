# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: math/p5-GIS-Distance-Fast/Makefile 341825 2014-01-30 09:42:48Z az $

PORTNAME=	GIS-Distance-Fast
PORTVERSION=	0.07
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BLUEFEET
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	C implementation of GIS::Distance formulas

BUILD_DEPENDS=	p5-GIS-Distance>=0.07:${PORTSDIR}/math/p5-GIS-Distance
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
