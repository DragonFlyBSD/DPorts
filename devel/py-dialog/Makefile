# ex:ts=8
# Ports collection makefile for:	pythondialog
# Date created:			Sep 12, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/devel/py-dialog/Makefile,v 1.12 2012/11/17 05:56:46 svnexp Exp $
#

PORTNAME=	dialog
PORTVERSION=	2.7
PORTREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	SF/python${PORTNAME}/python${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pythondialog-${PORTVERSION}

MAINTAINER=	mek@mek.uz.ua
COMMENT=	Python interface to dialog(3)

RUN_DEPENDS=	cdialog:${PORTSDIR}/devel/cdialog

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	pythondialog

EXAMPLESDIR=	${PREFIX}/share/examples/py-dialog

post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demo.py ${EXAMPLESDIR}

.include <bsd.port.mk>
