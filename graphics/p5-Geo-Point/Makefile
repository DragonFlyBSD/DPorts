# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: graphics/p5-Geo-Point/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Geo-Point
PORTVERSION=	0.94
CATEGORIES=	graphics devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl Module Tries To Abstract Coordinate Systems

RUN_DEPENDS=	p5-Geo-Distance>=0.06:${PORTSDIR}/math/p5-Geo-Distance \
		p5-Geo-Proj4>=1.00:${PORTSDIR}/graphics/p5-Geo-Proj4 \
		p5-Math-Polygon>=1.00:${PORTSDIR}/math/p5-Math-Polygon

MAN3=		Geo::Point.3 Geo::Shape.3 Geo::Surface.3 \
		Geo::Line.3 Geo::Proj.3 Geo::Space.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
