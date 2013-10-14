# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: math/p5-Math-Geometry-Planar-Offset/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	Math-Geometry-Planar-Offset
PORTVERSION=	1.05
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Calculate offset polygons

BUILD_DEPENDS=	p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::Geometry::Planar::Offset.3

USES=		perl5
USE_PERL5=	modbuild

NO_STAGE=	yes
.include <bsd.port.mk>
