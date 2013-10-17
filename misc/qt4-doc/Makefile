# Created by: lofi@FreeBSD.org
# $FreeBSD: misc/qt4-doc/Makefile 330266 2013-10-13 23:15:50Z rakuco $

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
	${MKDIR} ${STAGEDIR}${DOCSDIR} && \
	cd ${WRKSRC}/doc && \
	${COPYTREE_SHARE} html ${STAGEDIR}${DOCSDIR} && \
	${COPYTREE_SHARE} qch ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
