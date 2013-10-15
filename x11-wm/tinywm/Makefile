# Created by: Florent Thoumie <flz@xbsd.org>
# $FreeBSD: x11-wm/tinywm/Makefile 327786 2013-09-21 00:01:16Z bapt $

PORTNAME=	tinywm
PORTVERSION=	1.3
PORTREVISION=	2
CATEGORIES=	x11-wm
MASTER_SITES=	http://incise.org/files/dev/
EXTRACT_SUFX=	.tgz

MAINTAINER=	flz@FreeBSD.org
COMMENT=	Ridiculously tiny window manager

PLIST_FILES=	bin/tinywm
USE_XORG=	x11
PORTDOCS=	README

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|CC)|CC) ${CFLAGS}|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tinywm ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
