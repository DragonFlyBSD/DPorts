# New ports collection makefile for:	jailrc
# Date created:	   8 November 2011
# Whom:		   Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/jailrc/Makefile,v 1.2 2012/11/17 06:01:35 svnexp Exp $
#

PORTNAME=	jailrc
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	mm@FreeBSD.org
COMMENT=	Improved jail startup/shutdown script

NO_BUILD=	yes
NO_INSTALL=	yes

USE_RC_SUBR=	jailrc

PORTDOCS=	*

post-install:
.if !defined(NOPORTDOCS)
		@${MKDIR} ${DOCSDIR}
		@${INSTALL_DATA} ${FILESDIR}/README ${DOCSDIR}/README
.endif

.include <bsd.port.mk>
