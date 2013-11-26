# Created by: Ion-Mihai "IOnut" Tetcu <itetcu@FreeBSD.org>
# $FreeBSD: devel/qgit/Makefile 334603 2013-11-22 18:48:41Z makc $

PORTNAME=	qgit
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}4/${PORTVERSION}
PKGNAMESUFFIX=	-qt4

MAINTAINER=	itetcu@FreeBSD.org
COMMENT=	Graphical interface to git repositories

USES=		qmake
USE_BZIP2=	yes
USE_QT4=	corelib gui moc_build rcc_build uic_build
MAKE_JOBS_UNSAFE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
