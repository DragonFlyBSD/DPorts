# $FreeBSD: japanese/py-tegaki-gtk/Makefile 340722 2014-01-22 17:00:46Z mat $

# Date created:				15 Aug 2010
# Whom:					Timothy Beyer <beyert@cs.ucr.edu>
#
# $FreeBSD: japanese/py-tegaki-gtk/Makefile 340722 2014-01-22 17:00:46Z mat $
#

PORTNAME=	tegaki
PORTVERSION=	0.3.1
CATEGORIES=	japanese python
MASTER_SITES=	http://www.tegaki.org/releases/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	-gtk
DISTNAME=	${PORTNAME}-pygtk-${PORTVERSION}

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Tegaki pygtk interface

LIB_DEPENDS=	zinnia.0:${PORTSDIR}/japanese/zinnia
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/tegaki/engine.py:${PORTSDIR}/japanese/py-tegaki

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	${PORTNAME}_pygtk

NO_STAGE=	yes
.include <bsd.port.mk>
