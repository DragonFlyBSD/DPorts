# Created by: Edward Tomasz Napierala <trasz@FreeBSD.org>
# $FreeBSD: comms/tcpser/Makefile 332065 2013-10-30 05:08:18Z eadler $

PORTNAME=	tcpser
DISTVERSION=	1.0rc12
CATEGORIES=	comms
MASTER_SITES=	http://www.jbrain.com/pub/linux/serial/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TCPSER turns serial port into an emulated Hayes compatible modem

WRKSRC=		${WRKDIR}/tcpser
USES=		gmake
CFLAGS+=	-pthread
LDFLAGS+=	-pthread
PORTDOCS=	README CHANGES
PLIST_FILES=	bin/tcpser

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tcpser ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README ${WRKSRC}/CHANGES ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
