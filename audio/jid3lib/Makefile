# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: ports/audio/jid3lib/Makefile,v 1.9 2012/12/10 13:24:54 svnexp Exp $

PORTNAME=	jid3lib
PORTVERSION=	0.5.4
PORTREVISION=	2
CATEGORIES=	audio java
MASTER_SITES=	SF/javamusictag/${PORTNAME}/beta-dev6

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java ID3 Tag Library

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes

PLIST_FILES=	%%JAVAJARDIR%%/jid3lib.jar

do-install:
	@${ECHO_MSG} -n ">> Installing JAR as ${JAVAJARDIR}/jid3lib.jar..."
	@${MKDIR} ${JAVAJARDIR}
	@${INSTALL_DATA} ${WRKSRC}/dist/jid3lib-${PORTVERSION}.jar \
	${JAVAJARDIR}/jid3lib.jar
	@${ECHO_MSG} " [ DONE ]"

.include <bsd.port.mk>
