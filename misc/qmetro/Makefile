# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: ports/misc/qmetro/Makefile,v 1.1 2013/02/20 18:11:23 svnexp Exp $

PORTNAME=	qmetro
PORTVERSION=	0.5.7
CATEGORIES=	misc graphics
MASTER_SITES=	SF/${PORTNAME}/source/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Map of the transport system for many city subways

LICENSE=	GPLv2

USE_ZIP=	yes
USE_QT4=	gui xml qmake_build uic_build moc_build rcc_build

do-configure:
	cd ${WRKSRC} && ${QMAKE} ${QMAKEFLAGS} PREFIX=${PREFIX}

.include <bsd.port.mk>
