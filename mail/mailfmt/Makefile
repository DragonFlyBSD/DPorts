# Created by: tundra
# $FreeBSD: mail/mailfmt/Makefile 327742 2013-09-20 19:59:12Z bapt $

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

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/mailfmt-license.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
