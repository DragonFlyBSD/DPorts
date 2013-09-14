# Created by: Eric Stith
# $FreeBSD: graphics/p5-Geo-Proj4/Makefile 326963 2013-09-11 11:44:41Z az $

PORTNAME=	Geo-Proj4
PORTVERSION=	1.04
CATEGORIES=	graphics devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Perl cartographic projections wrapper for Proj library

LIB_DEPENDS=	proj:${PORTSDIR}/graphics/proj

MAN3=		Geo::Proj4.3
CONFIGURE_ENV=	GEOPROJ_FWTOOLS_DIR=${LOCALBASE}
MAKE_ENV=	INC=-I${LOCALBASE}/include
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
