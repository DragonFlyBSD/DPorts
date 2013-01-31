# New ports collection makefile for:	koctave
# Date created:				01 August 2003
# Whom:					Kay Lehmann <kay_lehmann@web.de>
#
# $FreeBSD: ports/math/koctave/Makefile,v 1.27 2012/12/30 18:56:09 svnexp Exp $
#

PORTNAME=	koctave
PORTVERSION=	0.70
PORTREVISION=	5
CATEGORIES=	math kde
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	KDEGUI for octave

RUN_DEPENDS=	octave:${PORTSDIR}/math/octave

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

USE_QT_VER=	3
USE_KDELIBS_VER=3
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool

post-patch:
	${REINPLACE_CMD} -e '/kde_appsdir/s|applnk||g' ${WRKSRC}/configure
	${REINPLACE_CMD} -e '/kde_appsdir/s|Applications|applications/kde|g' \
		-e '/kde_appsdir/s|share/||g' ${WRKSRC}/src/Makefile.in
	${REINPLACE_CMD} -e 's|/usr/bin|${LOCALBASE}/bin|' \
		${WRKSRC}/src/prefs.cpp ${WRKSRC}/src/koctave.cpp

.include <bsd.port.mk>
