# $FreeBSD: head/textproc/qt5-xmlpatterns/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	xmlpatterns
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	textproc
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt support for XPath, XQuery, XSLT and XML Schema

BROKEN_powerpc64=	Does not build

USE_QT=		core network buildtools_build
USES=		qmake:norecursive qt-dist:5,xmlpatterns
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
