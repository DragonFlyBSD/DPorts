# Created by: lofi@FreeBSD.org
# $FreeBSD: head/misc/qt4-doc/Makefile 338902 2014-01-06 16:16:52Z makc $

PORTNAME=	doc
DISTVERSION=	${QT4_VERSION}
CATEGORIES=	misc
PKGNAMEPREFIX=	qt4-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt documentation

USE_QT4=	# empty
QT_DIST=	yes
NO_BUILD=	yes

EXTRACT_AFTER_ARGS=	'${DISTNAME}/doc'

DOCSDIR=	${PREFIX}/share/doc/qt4

EXTRA_PATCHES=	# empty

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR} && \
	cd ${WRKSRC}/doc && \
	${COPYTREE_SHARE} html ${STAGEDIR}${DOCSDIR} && \
	${COPYTREE_SHARE} qch ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
