# Created by: past@ebs.gr
# $FreeBSD: x11-fonts/mgopen/Makefile 327781 2013-09-20 23:51:14Z bapt $

PORTNAME=	mgopen
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	http://pub.ellak.gr/fonts/${PORTNAME}/files/
DISTNAME=	MgOpen

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MgOpen greek fonts collection

BUILD_DEPENDS=	fc-cache:${PORTSDIR}/x11-fonts/fontconfig
RUN_DEPENDS=	fc-cache:${PORTSDIR}/x11-fonts/fontconfig

NO_BUILD=	yes

FONTSDIR=	${PREFIX}/lib/X11/fonts/${PORTNAME}
PLIST_SUB=	FONTSDIR=${FONTSDIR:S|^${PREFIX}/||}

SUB_FILES=	pkg-message
SUB_LIST=	FONTSDIR=${FONTSDIR}

NO_STAGE=	yes
do-install:
	${MKDIR} ${FONTSDIR}
	${INSTALL_DATA} ${WRKDIR}/*.ttf ${FONTSDIR}

post-install:
	@${ECHO_MSG} "===> Running fc-cache"
	-${LOCALBASE}/bin/fc-cache -f -v ${FONTSDIR}
	@${ECHO_MSG}
	@${CAT} ${PKGMESSAGE}
	@${ECHO_MSG}

.include <bsd.port.mk>
