# $FreeBSD: ports/net/jicmp6/Makefile,v 1.2 2012/11/17 06:00:03 svnexp Exp $

PORTNAME=	jicmp6
PORTVERSION=	1.0.1
CATEGORIES=	net java
MASTER_SITES=	SF/opennms/JICMP6/stable-1.0

MAINTAINER=	venture37@geeklan.co.uk
COMMENT=	Java native interface (JNI) to ICMPv6

USE_JAVA=	yes
JAVA_VERSION=	1.6
JAVA_VENDOR=	openjdk
JAVA_BUILD=	yes
JAVA_RUN=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	JAVA_HOME=${JAVA_HOME}

PLIST_FILES=	lib/libjicmp6.la \
		lib/libjicmp6.so \
		share/java/jicmp6.jar

.include <bsd.port.mk>
