# Created by: Sakai Hiroaki <sakai@seki.ee.kagu.sut.ac.jp>
# $FreeBSD: x11/xkeywrap/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xkeywrap
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	x11
MASTER_SITES=	http://hp.vector.co.jp/authors/VA014157/myfreesoft/

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Record, repeat, and play key sequence from keyboard

MAKE_ENV=	X11BASE=${LOCALBASE}
USE_XORG=	x11 xt

PORTDOCS=	README demo.dat xkeywrap_demo.c

PLIST_FILES=	bin/xkeywrap man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xkeywrap ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/xkeywrap.1.gz ${STAGEDIR}${PREFIX}/man/man1
.if !defined(NOPORTDOCS)
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docs in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${docs} ${STAGEDIR}${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
