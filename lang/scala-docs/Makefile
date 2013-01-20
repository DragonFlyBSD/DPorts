# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: ports/lang/scala-docs/Makefile,v 1.3 2013/01/16 16:54:06 svnexp Exp $

PORTNAME=	scala-docs
PORTVERSION=	2.10.0
CATEGORIES=	lang java
MASTER_SITES=	http://www.scala-lang.org/downloads/distrib/files/
EXTRACT_SUFX=	.txz

MAINTAINER=	ale@FreeBSD.org
COMMENT=	The documentation for the Scala standard library

USE_XZ=		yes
NO_BUILD=	yes

PORTDOCS=	*

.include <bsd.port.options.mk>

.if ! ${PORT_OPTIONS:MDOCS}
IGNORE=		port only installs documentation
.endif

do-install:
	@${ECHO} -n ">> Installing documentation in ${DOCSDIR}..."
	@${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/ && ${COPYTREE_SHARE} \* ${DOCSDIR}/)
	@${ECHO} " [ DONE ]"

.include <bsd.port.mk>
