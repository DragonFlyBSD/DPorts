# Created by: ache
# $FreeBSD: ports/archivers/unarj/Makefile,v 1.26 2012/12/31 15:46:45 svnexp Exp $

PORTNAME=	unarj
PORTVERSION=	2.65
PORTREVISION=	2
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	ache
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Allows files to be extracted from ARJ archives

PLIST_FILES=	bin/unarj
PORTDOCS=	unarj.txt technote.txt

.include <bsd.port.options.mk>
post-patch:
	${CP} ${FILESDIR}/sanitize.c ${WRKSRC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/unarj ${PREFIX}/bin
.if ${PORT_OPTIONS:MDOCS}
	${INSTALL} -d -m 755 -o ${SHAREOWN} -g ${SHAREGRP} ${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
