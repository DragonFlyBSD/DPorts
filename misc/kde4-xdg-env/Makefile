# $FreeBSD: misc/kde4-xdg-env/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	xdg
PORTVERSION=	1.0.1
CATEGORIES=	misc kde
MASTER_SITES=	# none
PKGNAMEPREFIX=	kde4-
PKGNAMESUFFIX=	-env
DISTNAME=	# none
EXTRACT_SUFX=	# none

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Script which hooks into startkde and helps KDE pick up XDG apps/menus

USE_KDE4=	kdeprefix

SUB_LIST+=	KDE4_PREFIX=${KDE4_PREFIX}

NO_BUILD=	yes

SUB_FILES=	xdg-env.sh

PLIST_FILES=	env/xdg-env.sh
PLIST_DIRSTRY=	env

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/env
	${INSTALL_SCRIPT} ${WRKDIR}/xdg-env.sh ${PREFIX}/env

.include <bsd.port.mk>
