# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: biology/jalview/Makefile 340487 2014-01-20 23:10:10Z bapt $

PORTNAME=	jalview
PORTVERSION=	2.07
PORTREVISION=	2
CATEGORIES=	biology java
MASTER_SITES=	http://www.jalview.org/source/
DISTNAME=	${PORTNAME}_${PORTVERSION:S/./_/}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Viewer and editor for multiple sequence alignments

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes
ALL_TARGET=	makejars
WRKSRC=		${WRKDIR}/${PORTNAME}

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
SUB_FILES=	jalview.sh

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/jalview.sh ${STAGEDIR}${PREFIX}/bin/jalview
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/dist/* ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
