# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: sysutils/tmpreaper/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	tmpreaper
PORTVERSION=	1.6.13
CATEGORIES=	sysutils
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cleans up files in directories based on their age

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USES=		gmake

PLIST_FILES=	sbin/tmpreaper
PORTDOCS=	README
MAN8=		tmpreaper.8

OPTIONS_DEFINE=	DOCS

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
