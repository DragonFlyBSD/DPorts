# Created by: Alan Eldridge <alane@FreeBSD.org>
# $FreeBSD: ports/sysutils/tree/Makefile,v 1.23 2012/11/17 06:01:48 svnexp Exp $

PORTNAME=	tree
PORTVERSION=	1.6.0
CATEGORIES=	sysutils
MASTER_SITES=	ftp://mama.indstate.edu/linux/tree/ \
		CENKES
EXTRACT_SUFX=	.tgz

MAINTAINER=	gb@unistra.fr
COMMENT=	Display a tree-view of directories with optional color or HTML output

LICENSE=	GPLv2

MAKE_ENV+=	MKDIR="${MKDIR}"
USE_GMAKE=	yes

MAN1=		tree.1
PLIST_FILES=	bin/tree

PORTDOCS=	CHANGES README

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
