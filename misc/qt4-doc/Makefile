# Created by: lofi@freebsd.org
# $FreeBSD: ports/misc/qt4-doc/Makefile,v 1.18 2013/02/03 21:43:40 svnexp Exp $

PORTNAME=	doc
DISTVERSION=	${QT4_VERSION}
CATEGORIES?=	misc
PKGNAMEPREFIX=	qt4-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Multiplatform C++ application framework

USE_QT4=	# empty
QT_DIST=	yes
NO_BUILD=	yes

EXTRACT_AFTER_ARGS=| ${TAR} -xf - '${DISTNAME}/doc'

DOCSDIR=	${PREFIX}/share/doc/qt4

do-install:
	${MKDIR} ${DOCSDIR} && \
	cd ${WRKSRC}/doc && ${COPYTREE_SHARE} html ${DOCSDIR} && \
	${COPYTREE_SHARE} qch ${DOCSDIR}

.include <bsd.port.mk>
