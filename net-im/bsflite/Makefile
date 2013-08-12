# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: net-im/bsflite/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	bsflite
DISTVERSION=	0.85
CATEGORIES=	net-im
MASTER_SITES=	SF

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Lightweight command line AIM client

PLIST_FILES=	bin/bsflite %%EXAMPLESDIR%%/config-example
PLIST_DIRS=	%%EXAMPLESDIR%%
PORTDOCS=	COPYING ChangeLog README

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -E '/^(CC|CFLAGS)/d' \
		${WRKSRC}/${MAKEFILE} \
		${WRKSRC}/imcomm/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bsflite ${PREFIX}/bin
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/config-example ${EXAMPLESDIR}

.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
