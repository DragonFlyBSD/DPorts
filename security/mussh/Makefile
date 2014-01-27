# Created by: Yen-Ming Lee <leeym@leeym.com>
# $FreeBSD: security/mussh/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mussh
PORTVERSION=	1.0
CATEGORIES=	security
MASTER_SITES=	SF
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for easily running the same commands on multiple hosts

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

NO_BUILD=	yes
PORTDOCS=	BUGS CHANGES EXAMPLES README
PLIST_FILES=	bin/mussh
WRKSRC=		${WRKDIR}/${PORTNAME}

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s,^#!/bin/bash,#!/usr/bin/env bash,g" \
			  -e "s,seq 1 ,jot 1 ,g" \
		${WRKSRC}/${PORTNAME}

do-install:
	@${MKDIR} ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
