# New ports collection makefile for:	tss
# Date created:				25 October 2006
# Whom:					Peter Ankerstal <peter@pean.org>
#
# $FreeBSD: ports/sysutils/tss/Makefile,v 1.5 2012/11/17 06:01:48 svnexp Exp $
#

PORTNAME=	tss
PORTVERSION=	0.8.2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.pulia.nu/tss/src/

MAINTAINER=	peter@pean.org
COMMENT=	Terminal ScreenSaver that allows you to lock you terminal

post-patch:
	@ ${REINPLACE_CMD} -e "s|/etc/tss|${PREFIX}/etc/tss|" ${WRKSRC}/src/main.c

do-install:
	${INSTALL_SCRIPT} -m 4755 ${WRKSRC}/tss ${PREFIX}/bin
	${MKDIR} ${PREFIX}/etc/tss
	${INSTALL_DATA} ${WRKSRC}/tss_art/*   ${PREFIX}/etc/tss
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for f in ART_CREDITS COPYING Changelog INSTALL README
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
