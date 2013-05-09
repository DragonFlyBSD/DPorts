# Created by: Simon Barner <barner@gmx.de>
# $FreeBSD: games/gnmm/Makefile 316654 2013-04-27 08:50:46Z mva $

PORTNAME=	gnmm
PORTVERSION=	0.1.2
PORTREVISION=	12
CATEGORIES=	games gnome
MASTER_SITES=	SF
DIST_SUBDIR=	gnome

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A "nine mens' morris" implementation for the GNOME Desktop Environment

USE_GMAKE=	yes
USES=		pathfix gettext iconv
USE_GNOME=	gnomeprefix gnomelibs gdkpixbuf

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	"--with-libiconv-prefix=${LOCALBASE}"

.include <bsd.port.mk>
