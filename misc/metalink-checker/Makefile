# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: misc/metalink-checker/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	metalink
PORTVERSION=	1.3
CATEGORIES=	misc
MASTER_SITES=	SF/${PORTNAME}s/Metalink%20Checker/2007
PKGNAMESUFFIX?=	-checker
DISTNAME=	checker-${PORTVERSION}

MAINTAINER=	lioux@FreeBSD.org
COMMENT=	Python script to check metalink files and complete a basic download

LICENSE=	GPLv2

USE_DOS2UNIX=	yes
USE_PYTHON=	yes
NO_BUILD=	yes

# Documents to install
DOC_FILES=	\
		README

.ifndef(NOPORTDOCS)
PORTDOCS=	*
.endif

PLIST_FILES=	bin/${PORTNAME}.py

NO_STAGE=	yes
do-patch:
	@${REINPLACE_CMD} -E \
		-e "s|#!/usr/bin/env[[:space:]]python|#!${PYTHON_CMD}|" \
		${WRKSRC}/${PORTNAME}.py

do-install:
# docs
.ifndef(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in ${DOC_FILES}
	@${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.py ${PREFIX}/bin

.include <bsd.port.mk>
