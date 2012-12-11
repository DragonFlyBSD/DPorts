# New ports collection makefile for:	mailfmt
# Date Created:		09 October 2002
# Whom:			tundra
#
# $FreeBSD: ports/mail/mailfmt/Makefile,v 1.3 2012/11/17 05:59:05 svnexp Exp $
#

PORTNAME=	mailfmt
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://www.tundraware.com/Software/mailfmt/

MAINTAINER=	tundra@tundraware.com
COMMENT=	Remove leading quotations from mail/news and wrap lines to fixed width

USE_PYTHON=	yes

MANCOMPRESSED=	yes
MAN1=		mailfmt.1

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/mailfmt-license.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
