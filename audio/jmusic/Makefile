# Created by: ijliao
# $FreeBSD: ports/audio/jmusic/Makefile,v 1.8 2012/11/17 05:54:35 svnexp Exp $

PORTNAME=	jmusic
PORTVERSION=	1.5
PORTREVISION=	2
CATEGORIES=	audio java
MASTER_SITES=	SF/${PORTNAME}/jMusic_Stable/${PORTVERSION}
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Composition in Java

USE_JAVA=	yes
JAVA_VERSION=	1.5+
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-install:
	@${MKDIR} ${JAVAJARDIR}/${PORTNAME}
	@${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.jar ${JAVAJARDIR}/${PORTNAME}
	@${CP} -R ${WRKSRC}/inst ${JAVAJARDIR}/${PORTNAME}

.include <bsd.port.mk>
