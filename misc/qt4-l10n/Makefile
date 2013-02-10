# $FreeBSD: ports/misc/qt4-l10n/Makefile,v 1.12 2013/02/03 21:43:40 svnexp Exp $

PORTNAME=	l10n
DISTVERSION=	${QT4_VERSION}
CATEGORIES?=	misc
PKGNAMEPREFIX=	qt4-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt translations messages

USE_QT4=	linguist_build
QT_DIST=	yes
QT_NONSTANDARD=	yes

EXTRACT_AFTER_ARGS+=	| ${TAR} -xf - --include '${DISTNAME}/translations'

do-build:
	${LOCALBASE}/bin/lrelease-qt4 ${WRKSRC}/translations/*.ts

do-install:
	${MKDIR} ${PREFIX}/share/qt4/translations
	${INSTALL_DATA} ${WRKSRC}/translations/*.qm ${PREFIX}/share/qt4/translations

.include <bsd.port.mk>
