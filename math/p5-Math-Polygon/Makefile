# New ports collection makefile for:	p5-Math-Polygon
# Date created:		2009-01-07
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/math/p5-Math-Polygon/Makefile,v 1.5 2012/11/17 05:59:26 svnexp Exp $
#

PORTNAME=	Math-Polygon
PORTVERSION=	1.02
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Class for Maintaining Polygon Data

BUILD_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Math::Polygon.3 \
		Math::Polygon::Calc.3 \
		Math::Polygon::Clip.3 \
		Math::Polygon::Surface.3 \
		Math::Polygon::Transform.3 \
		Math::Polygon::Convex.3

.include <bsd.port.mk>
