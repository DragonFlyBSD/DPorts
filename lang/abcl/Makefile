# Created by: Frank Fischer
# $FreeBSD: ports/lang/abcl/Makefile,v 1.12 2012/12/10 13:24:58 svnexp Exp $

PORTNAME=	abcl
PORTVERSION=	1.0.1
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
