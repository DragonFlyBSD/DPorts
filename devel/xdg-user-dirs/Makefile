# $FreeBSD: devel/xdg-user-dirs/Makefile 332887 2013-11-05 18:15:48Z rakuco $

PORTNAME=	xdg-user-dirs
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://user-dirs.freedesktop.org/releases/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tool to help manage personal user directories

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:${PORTSDIR}/textproc/docbook-xsl

GNU_CONFIGURE=	yes
USES=		gettext gmake iconv
USE_GNOME=	libxslt:build
LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
