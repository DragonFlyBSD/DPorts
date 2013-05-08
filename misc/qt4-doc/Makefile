# Created by: lofi@freebsd.org
# $FreeBSD: misc/qt4-doc/Makefile 316786 2013-04-29 08:57:12Z bapt $

PORTNAME=	doc
DISTVERSION=	${QT4_VERSION}
CATEGORIES?=	misc
PKGNAMEPREFIX=	qt4-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Multiplatform C++ application framework

USE_QT4=	# empty
QT_DIST=	yes
NO_BUILD=	yes

EXTRACT_AFTER_ARGS=	'${DISTNAME}/doc'

DOCSDIR=	${PREFIX}/share/doc/qt4

do-install:
	${MKDIR} ${DOCSDIR} && \
	cd ${WRKSRC}/doc && ${COPYTREE_SHARE} html ${DOCSDIR} && \
	${COPYTREE_SHARE} qch ${DOCSDIR}

.include <bsd.port.mk>
