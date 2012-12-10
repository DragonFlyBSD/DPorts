# Created by: ijliao
#
# $FreeBSD: ports/databases/jrobin/Makefile,v 1.15 2012/11/17 05:55:09 svnexp Exp $
#

PORTNAME=	jrobin
PORTVERSION=	1.5.14
CATEGORIES=	databases java
MASTER_SITES=	SF
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A pure Java alternative to RRDTool

USE_JAVA=	yes
JAVA_VERSION=	1.5+
NO_BUILD=	yes

CLASSES=	jrobin

do-install:
.for c in ${CLASSES}
	${INSTALL_DATA} ${DISTDIR}/${c}-${PORTVERSION}.jar ${JAVAJARDIR}/${c}.jar
	@${ECHO} '${JAVAJARDIR:S,^${PREFIX}/,,}/${c}.jar' >> ${TMPPLIST}
.endfor

.include <bsd.port.mk>
