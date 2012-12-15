# New ports collection makefile for:	ft2demos
# Date created:		12 April 2001
# Whom:			KANOU Hiroki <kanou@khdd.net>
#
# $FreeBSD: ports/print/ft2demos/Makefile,v 1.43 2012/11/17 06:00:49 svnexp Exp $
#

PORTNAME=	ft2demos
PORTVERSION=	2.4.9
CATEGORIES=	print
MASTER_SITES=	SF/freetype/freetype-demos/${PORTVERSION} \
		RINGSERVER/graphics/freetype/freetype2

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Demo programs for FreeType2

BUILD_DEPENDS+=	${FREETYPE_WRKSRC}/config.mk:${PORTSDIR}/print/freetype2:build
LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

USE_BZIP2=	yes
USE_XORG=	xext
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool:env
MAKE_ENV=	TOP_DIR="${FREETYPE_WRKSRC}"
MAKE_ARGS=	EXES="${FT_PROGRAMS}" X11_PATH="${LOCALBASE}"

PLIST_FILES=	${FT_PROGRAMS:S,^,bin/,}

FT_PROGRAMS=	ftbench ftchkwd ftdiff ftdump ftgamma ftgrid ftlint ftmemchk \
		ftmulti ftpatchk ftstring fttimer ftvalid ftview

.include <bsd.port.pre.mk>

.if exists(../../print/freetype2)
FREETYPE2VER!=		awk '{ if ($$1 == "PORTVERSION=") print $$2 }' ../../print/freetype2/Makefile ; echo
.endif
FREETYPE_WRKSRC=	${WRKDIRPREFIX}/print/freetype2/work/freetype-${FREETYPE2VER}

do-install:
	@(cd ${WRKSRC}/bin/.libs/; ${INSTALL_PROGRAM} ${FT_PROGRAMS} ${PREFIX}/bin)

.include <bsd.port.post.mk>
