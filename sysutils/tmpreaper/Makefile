# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: ports/sysutils/tmpreaper/Makefile,v 1.15 2013/01/15 13:46:58 svnexp Exp $

PORTNAME=	tmpreaper
PORTVERSION=	1.6.13
CATEGORIES=	sysutils
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cleans up files in directories based on their age

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	sbin/tmpreaper
PORTDOCS=	README
MAN8=		tmpreaper.8

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
