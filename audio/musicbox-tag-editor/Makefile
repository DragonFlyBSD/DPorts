# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: audio/musicbox-tag-editor/Makefile 336166 2013-12-11 14:35:36Z bapt $
#   $MCom: ports/audio/musicbox-tag-editor/Makefile,v 1.5 2007/09/10 05:13:24 mezz Exp $

PORTNAME=	musicbox-tag-editor
PORTVERSION=	0.2.3
PORTREVISION=	15
CATEGORIES=	audio
MASTER_SITES=	SF/musicbox/musicbox/${PORTVERSION}
DISTNAME=	musicbox-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple GTK+ audio tag editor

LIB_DEPENDS=	libtag.so:${PORTSDIR}/audio/taglib

USES=		pathfix pkgconfig
NO_STAGE=	yes
USE_GNOME=	gnomeprefix libglade2
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
# avoid conflict with audio/musicbox
CONFIGURE_ARGS=	--program-suffix=-tag-editor

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/share/pixmaps|${PREFIX}/share/pixmaps|' \
		${WRKSRC}/data/musicbox.glade
	@${REINPLACE_CMD} -e 's|Exec=musicbox|Exec=musicbox-tag-editor|' \
		${WRKSRC}/data/musicbox.desktop

.include <bsd.port.mk>
