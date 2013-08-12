# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: biology/recombine/Makefile 321313 2013-06-19 19:15:14Z bsam $

PORTNAME=	recombine
PORTVERSION=	1.41
CATEGORIES=	biology
MASTER_SITES=	http://evolution.gs.washington.edu/lamarc/recombine/
DISTNAME=	${PORTNAME}${PORTVERSION}.src.doc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program to fit population models across sites

WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION}

ALL_TARGET=	${PORTNAME}

PLIST_FILES+=	bin/filetran bin/recombine
PORTDOCS=	recombine.txt

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	${INSTALL_SCRIPT} ${WRKSRC}/filetran ${PREFIX}/bin/

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/recombine.txt ${DOCSDIR}/
.endif

.include <bsd.port.mk>
