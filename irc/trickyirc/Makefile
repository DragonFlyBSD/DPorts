# New ports collection makefile for:	TrickyIRC
# Date created:			 	Jun 20th 1999
# Whom:					troll
#
# $FreeBSD: ports/irc/trickyirc/Makefile,v 1.16 2012/11/17 05:58:30 svnexp Exp $
#

PORTNAME=	trickyirc
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	irc
MASTER_SITES=	http://www.leb.net/~troll/
DISTNAME=	TrickyIRC-${PORTVERSION}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Allows client independent detaching and reattaching of IRC sessions

MAKEFILE=	GNUmakefile
WRKSRC=		${WRKDIR}/trickyirc
USE_GMAKE=	YES

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	*
PORTEXAMPLES=	*

post-install:
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif
.if !defined(NOPORTEXAMPLES)
	@ ${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/config.sample ${EXAMPLESDIR}
.endif
	@${STRIP_CMD} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
