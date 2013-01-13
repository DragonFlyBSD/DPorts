# New ports collection makefile for:	libmediawiki
# Date created:				2012-05-12
# Whom:					Jason E. Hale <bsdkaffee@gmail.com>
#
# $FreeBSD: ports/net/libmediawiki/Makefile,v 1.4 2012/11/17 06:00:04 svnexp Exp $
#

PORTNAME=	libmediawiki
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	net kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for accessing MediaWiki sites

.include "${.CURDIR}/../../graphics/digikam-kde4/Makefile.common"

post-patch:
	${REINPLACE_CMD} -e '/pkgconfig/s|$${LIB_INSTALL_DIR}|libdata|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
