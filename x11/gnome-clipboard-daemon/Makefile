# Created by: Mezz <mezz7@cox.net>
# $FreeBSD: ports/x11/gnome-clipboard-daemon/Makefile,v 1.18 2012/11/17 06:03:15 svnexp Exp $

PORTNAME=	gnome-clipboard-daemon
PORTVERSION=	1.0
PORTREVISION=	11
CATEGORIES=	x11 gnome
MASTER_SITES=	http://members.chello.nl/~h.lai/gnome-clipboard-daemon/
DISTNAME=	${PORTNAME:S,^gnome-,,}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program that keeps the content of your X clipboard in memory

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_PKGCONFIG=	build
USE_GNOME=	gtk20
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e \
		's|^CC=|CC?=| ; \
		 s|^CFLAGS=|CFLAGS?=| ; \
		 s|-o clipboard-daemon |-o ${PORTNAME} |' ${WRKSRC}/Makefile

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} ${PORTNAME} ${PREFIX}/bin)

.include <bsd.port.mk>
