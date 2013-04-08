# $FreeBSD: graphics/p5-Chart/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Chart
PORTVERSION=	2.4.6
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CHARTGRP
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to build chart graphics

BUILD_DEPENDS=	p5-GD>=2:${PORTSDIR}/graphics/p5-GD
RUN_DEPENDS=	p5-GD>=2:${PORTSDIR}/graphics/p5-GD

PERL_CONFIGURE=	yes

MAN3=		Chart.3

.include <bsd.port.mk>
