# Created by: antonakis@gmail.com
# $FreeBSD: graphics/optar/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	optar
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	http://xps.crucible.gr/
DISTFILES=	optar.tgz \
		font.h
EXTRACT_ONLY=	optar.tgz

MAINTAINER=	antonakis@gmail.com
COMMENT=	A tool for encoding data on paper

BUILD_DEPENDS=	${LOCALBASE}/include/libpng15/png.h:${PORTSDIR}/graphics/png
RUN_DEPENDS=	convert:${PORTSDIR}/graphics/ImageMagick

USE_GMAKE=	yes
WRKSRC=		${WRKDIR}/optar

PLIST_FILES=	bin/optar bin/unoptar bin/pgm2ps

NO_STAGE=	yes
post-extract:
	@${RM} -v ${WRKSRC}/font.h
	@${CP} -v ${DISTDIR}/font.h ${WRKSRC}/font.h
	@${SED} 's:/usr/local:${LOCALBASE}:g' ${WRKSRC}/Makefile > ${WRKSRC}/Makefile.new
	@${MV} ${WRKSRC}/Makefile.new ${WRKSRC}/Makefile
.include <bsd.port.mk>
