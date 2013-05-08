# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: print/harfbuzz/Makefile 316355 2013-04-23 14:20:25Z bapt $

PORTNAME=	harfbuzz
PORTVERSION=	0.9.14
CATEGORIES=	print
MASTER_SITES=	http://www.freedesktop.org/software/harfbuzz/release/

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	OpenType text shaping engine

LIB_DEPENDS=	freetype:${PORTSDIR}/print/freetype2

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USES=		pathfix pkgconfig
USE_GNOME=	glib20
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-silent-rules

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 1000024
EXTRA_PATCHES=	${PATCHDIR}/extra-src_hb-open-type-private.hh
.endif

.include <bsd.port.post.mk>
