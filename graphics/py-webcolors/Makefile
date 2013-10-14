# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: graphics/py-webcolors/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	webcolors
PORTVERSION=	1.4
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Library working with the sRGB color space as used in the HTML and CSS

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
NO_STAGE=	yes

DOCSDIR=	${PREFIX}/share/doc/${UNIQUENAME}
PORTDOCS=	README

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${INSTALL_WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
