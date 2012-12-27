# Created by: Dima Sivachenko <dima@chg.ru>
# $FreeBSD: ports/x11-wm/flwm/Makefile,v 1.34 2012/11/29 12:47:52 svnexp Exp $

PORTNAME=	flwm
PORTVERSION=	1.02
PORTREVISION=	6
CATEGORIES=	x11-wm
MASTER_SITES=	SF
EXTRACT_SUFX=	.tgz

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	The Fast Light Window Manager

LIB_DEPENDS=	fltk.1:${PORTSDIR}/x11-toolkits/fltk

USE_XORG=	x11 xt
GNU_CONFIGURE=	yes

CFLAGS+=	-DFL_LIBRARY

MAN1=		flwm.1
PLIST_FILES=	bin/flwm

post-patch:
	${REINPLACE_CMD} -e 's|/usr/X11R6|${LOCALBASE}|g; /^main/s|^|int |g' ${WRKSRC}/${CONFIGURE_SCRIPT}
	${REINPLACE_CMD} -e 's|^LIBS =.*|LIBS = `fltk-config --ldflags`|' ${WRKSRC}/Makefile

.include <bsd.port.mk>
