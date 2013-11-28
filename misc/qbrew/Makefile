# Created by: David Johnson <david@usermode.org>
# $FreeBSD: misc/qbrew/Makefile 334931 2013-11-26 13:27:45Z makc $

PORTNAME=	qbrew
PORTVERSION=	0.4.1
PORTREVISION=	4
CATEGORIES=	misc
MASTER_SITES=	http://www.usermode.org/code/

MAINTAINER=	david@usermode.org
COMMENT=	Homebrewer's recipe calculator

USES=		qmake
USE_QT4=	moc_build uic_build rcc_build xml gui
PORTDOCS=	*

QMAKE_ARGS=	CONFIG+="configure"
QMAKE_ENV+=	BINDIR="${PREFIX}/bin" \
		DATADIR="${DATADIR}" \
		DOCDIR="${DOCSDIR}"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/qbrew

.include <bsd.port.mk>
