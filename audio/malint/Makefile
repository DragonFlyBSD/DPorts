# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: ports/audio/malint/Makefile,v 1.10 2013/01/15 13:46:53 svnexp Exp $

PORTNAME=	malint
DISTVERSION=	0.2
CATEGORIES=	audio
MASTER_SITES=	http://www.nih.at/malint/ \
		ftp://sunsite.univie.ac.at/pub/nih/malint/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	MPEG Audio stream validator

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

PORTDOCS=	README
PLIST_FILES=	bin/malint

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
