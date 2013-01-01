# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: ports/www/htmlcompressor/Makefile,v 1.5 2012/12/10 13:48:09 svnexp Exp $

PORTNAME=	htmlcompressor
PORTVERSION=	0.9.4
CATEGORIES=	www java
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	skv@FreeBSD.org
COMMENT=	HTML/XML Compressor

LICENSE=	AL2
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_ZIP=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

PLIST_FILES=	bin/htmlcompressor %%DATADIR%%/htmlcompressor.jar
PLIST_DIRS=	%%DATADIR%%
SUB_FILES=	htmlcompressor

.include <bsd.port.pre.mk>

do-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/build/htmlcompressor-${PORTVERSION}.jar ${DATADIR}/htmlcompressor.jar
	${INSTALL_SCRIPT} ${WRKDIR}/htmlcompressor ${PREFIX}/bin

.include <bsd.port.post.mk>
