# ex:ts=8
# Ports collection Makefile for:	py-jaxml
# Date created:			Mar 24, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/textproc/py-jaxml/Makefile,v 1.9 2012/11/17 06:02:17 svnexp Exp $
#

PORTNAME=	jaxml
PORTVERSION=	3.02
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP \
		http://www.librelogiciel.com/software/jaxml/tarballs/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Python module to generate XML easily

PLIST_FILES=	lib/${PYTHON_VERSION}/site-packages/${PYEASYINSTALL_EGG}

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
