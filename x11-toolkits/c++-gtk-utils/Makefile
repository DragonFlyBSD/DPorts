# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: x11-toolkits/c++-gtk-utils/Makefile 315419 2013-03-27 23:16:52Z pawel $

PORTNAME=	c++-gtk-utils
PORTVERSION=	2.0.16
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/cxx-gtk-utils/cxx-gtk-utils/${PORTVERSION}/
DISTNAME=	c%2B%2B-gtk-utils-${PORTVERSION}

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Lightweight library for programming GTK+ programs

LICENSE=	LGPL21

GNU_CONFIGURE=	yes
USE_GCC=	4.4+
USE_PKGCONFIG=	build
USES=		pathfix
USE_GNOME=	gtk20
USE_LDCONFIG=	yes

CONFIGURE_SCRIPT=	configure-gtk2
CONFIGURE_ARGS+=	--docdir=${DOCSDIR}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

OPTIONS_DEFINE=	DEBUG

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDEBUG}
CONFIGURE_ARGS+=--enable-debug
.endif

.include <bsd.port.mk>
