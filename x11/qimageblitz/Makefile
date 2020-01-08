# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	qimageblitz
PORTVERSION=	0.1.0 # a made-up version also used in some linux distros, otherwise we need to add PORTEPOCH
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Graphical effects and filters library for Qt5

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++11-lang qt:5
USE_LDCONFIG=	yes
USE_QT=		core gui widgets qmake_build buildtools_build
USE_CXXSTD=	gnu++98

SVN_URL=	svn://anonsvn.kde.org/home/kde/trunk/kdesupport/qimageblitz
SVN_REVISION=	1515099

.include <bsd.port.mk>
