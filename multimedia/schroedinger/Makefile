# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/multimedia/schroedinger/Makefile,v 1.17 2012/11/17 05:59:53 svnexp Exp $

PORTNAME=	schroedinger
PORTVERSION=	1.0.11
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	http://diracvideo.org/download/schroedinger/
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	mm@FreeBSD.org
COMMENT=	High-speed Dirac codec

LICENSE=	GPLv2 LGPL20 MIT MPL
LICENSE_COMB=	dual
LICENSE_FILE_MIT=	${WRKSRC}/COPYING.MIT
LICENSE_FILE_MPL=	${WRKSRC}/COPYING.MPL

LIB_DEPENDS=	orc-0.4:${PORTSDIR}/devel/orc
BUILD_DEPENDS=	orc>=0.4.16:${PORTSDIR}/devel/orc

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|^pkgconfigdir=.*|pkgconfigdir="\\$${prefix}/libdata/pkgconfig"|' \
		-e 's|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/configure

.include <bsd.port.mk>
