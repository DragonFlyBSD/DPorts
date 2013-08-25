# New ports collection makefile for:	openyahtzee
# Date created:		04 January 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: games/openyahtzee/Makefile 324851 2013-08-17 16:27:24Z gerald $
#

PORTNAME=	openyahtzee
PORTVERSION=	1.9.1
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/Open%20Yahtzee/Open%20Yahtzee%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Full-featured classic dice game Yahtzee

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/boost/scoped_ptr.hpp:${PORTSDIR}/devel/boost-libs

USE_BZIP2=	yes
USE_GCC=	yes
USE_WX=		2.8+
WX_CONF_ARGS=	absolute
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN6=		openyahtzee.6
PLIST_FILES=	bin/openyahtzee \
		share/applications/openyahtzee.desktop \
		share/pixmaps/openyahtzee.png
PLIST_DIRSTRY=	share/applications

.include <bsd.port.mk>
