# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: math/p5-Math-Geometry-Planar-GPC-Polygon/Makefile 327032 2013-09-12 05:53:03Z az $

PORTNAME=	Math-Geometry-Planar-GPC-Polygon
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	OO wrapper to gpc library

BUILD_DEPENDS=	p5-Inline>=0:${PORTSDIR}/devel/p5-Inline
RUN_DEPENDS=	p5-Inline>=0:${PORTSDIR}/devel/p5-Inline

USES=		perl5
USE_PERL5=	configure
MAKE_JOBS_UNSAFE=	yes

MAN3=		Math::Geometry::Planar::GPC::Polygon.3

.include <bsd.port.mk>
