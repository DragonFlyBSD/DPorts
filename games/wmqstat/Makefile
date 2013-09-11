# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: games/wmqstat/Makefile 326378 2013-09-05 10:07:17Z danfe $

PORTNAME=	wmqstat
PORTVERSION=	0.0.4
PORTREVISION=	2
CATEGORIES=	games windowmaker
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/wmQStat%20${PORTVERSION}

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Dockapp for monitoring of various Internet game servers

LICENSE=	GPLv2

RUN_DEPENDS=	qstat:${PORTSDIR}/games/qstat

USE_XORG=	xpm x11 xext

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

# Unbreak the build against Clang
post-patch:
	@${REINPLACE_CMD} -e 's, inline,,' ${WRKSRC}/wmgeneral/list.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
