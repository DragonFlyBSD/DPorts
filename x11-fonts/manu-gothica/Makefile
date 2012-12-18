# New ports collection makefile for:	manu-gothica
# Date created:		2006-04-02
# Whom:			heiner Eichmann <h.eichmann@gmx.de>
#
# $FreeBSD: ports/x11-fonts/manu-gothica/Makefile,v 1.11 2012/11/17 06:03:29 svnexp Exp $
#

PORTNAME=	manu-gothica
DISTVERSION=	0
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.bryld.info/filer/
DISTNAME=	manugot19
EXTRACT_SUFX=	.ttf

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Old German blackletter handwriting (Suetterlin)

BUILD_DEPENDS=	fc-cache:${PORTSDIR}/x11-fonts/fontconfig
RUN_DEPENDS:=	${BUILD_DEPENDS}

RESTRICTED=	The font is free for personal use

EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	${WRKSRC}
NO_BUILD=	yes

NO_WRKSUBDIR=	yes
FONTSDIR=	lib/X11/fonts/TTF/
PLIST_SUB+=	FONTSDIR=${FONTSDIR}

do-install:
	${MKDIR} ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/manugot19.ttf ${PREFIX}/${FONTSDIR}/manugot19.ttf

post-install:
	@${ECHO_MSG} "===> Running fc-cache"
	-${LOCALBASE}/bin/fc-cache -f -v ${PREFIX}/${FONTSDIR}
	@${ECHO_MSG}
	@${ECHO_MSG}

.include <bsd.port.mk>
