# Created by: Frank Fischer
# $FreeBSD: lang/abcl/Makefile 316110 2013-04-19 15:42:58Z olgeni $

PORTNAME=	abcl
PORTVERSION=	1.1.1
CATEGORIES=	lang lisp java
MASTER_SITES=	http://common-lisp.net/project/armedbear/releases/${PORTVERSION}/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	fischer.frank@gmail.com
COMMENT=	An implementation of ANSI Common Lisp in Java

PLIST_FILES=	share/java/classes/abcl.jar \
		bin/abcl

SUB_LIST+=	JAVAJARDIR="${JAVAJARDIR}"
SUB_FILES=	abcl

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USE_ANT=	yes

do-install:
	@${INSTALL_DATA} ${WRKSRC}/dist/abcl.jar ${JAVAJARDIR}
	@${INSTALL_SCRIPT} ${WRKDIR}/abcl ${PREFIX}/bin/abcl

.include <bsd.port.mk>
