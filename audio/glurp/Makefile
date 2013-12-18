# Created by: Mark Reidel <ports@mark.reidel.info>
# $FreeBSD: audio/glurp/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	glurp
PORTVERSION=	0.12.3
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@mark.reidel.info
COMMENT=	Nice and clean GTK+-2.x based graphical client for musicpd

LIB_DEPENDS=	libmpd.so:${PORTSDIR}/audio/libmpd

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
NO_STAGE=	yes
USE_GNOME=	gtk20 glib20 libglade2
MAKE_ARGS+=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib -export-dynamic" \

.include <bsd.port.mk>
