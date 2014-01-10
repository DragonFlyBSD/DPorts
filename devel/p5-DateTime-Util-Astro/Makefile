# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: devel/p5-DateTime-Util-Astro/Makefile 338856 2014-01-06 11:00:15Z az $

PORTNAME=	DateTime-Util-Astro
PORTVERSION=	0.12000
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Utilities for Astronomical Calculations

BUILD_DEPENDS=	p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Util-Calc>=0.13:${PORTSDIR}/devel/p5-DateTime-Util-Calc
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
