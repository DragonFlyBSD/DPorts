# Created by: Matt Braithwaite <mab@red-bean.com>
# $FreeBSD: ports/deskutils/xwrits/Makefile,v 1.17 2012/11/28 21:44:13 svnexp Exp $

PORTNAME=	xwrits
PORTVERSION=	2.26
CATEGORIES=	deskutils
MASTER_SITES=	http://www.lcdf.org/${PORTNAME}/

MAINTAINER=	nemysis@gmx.ch
COMMENT=	Reminds you to take wrist breaks

GNU_CONFIGURE=	yes

USE_XORG=	ice sm x11 xau xdmcp xext xinerama

PLIST_FILES=	bin/xwrits

MAN1=		xwrits.1

PORTDOCS=	GESTURES NEWS README TODO

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
