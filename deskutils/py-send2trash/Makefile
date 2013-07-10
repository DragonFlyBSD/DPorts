# Created by: nemysis <nemysis@gmx.ch>
# $FreeBSD: deskutils/py-send2trash/Makefile 322528 2013-07-08 18:24:12Z wg $

PORTNAME=	send2trash
PORTVERSION=	1.2.0
CATEGORIES=	deskutils
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Send2Trash-${PORTVERSION}

MAINTAINER=	nemysis@gmx.ch
COMMENT=	Small package that sends files to the Trash

LICENSE=	BSD

USE_PYTHON=	2.6-2.7
USE_PYDISTUTILS=easy_install
PYDISTUTILS_PKGNAME=	Send2Trash

PORTDOCS=	CHANGES README

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
