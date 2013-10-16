# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: math/p5-GIS-Distance-Lite/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	GIS-Distance-Lite
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JOBERO
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Calculate geographic distances in geodetic WGS84 format

RUN_DEPENDS=	p5-Math-Complex>1.0.3:${PORTSDIR}/math/p5-Math-Complex

USES=		perl5
USE_PERL5=	configure

MAN3=		GIS::Distance::Lite.3 \

NO_STAGE=	yes
.include <bsd.port.mk>
