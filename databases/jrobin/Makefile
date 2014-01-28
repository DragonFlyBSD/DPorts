# Created by: ijliao
# $FreeBSD: databases/jrobin/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	jrobin
PORTVERSION=	1.5.14
CATEGORIES=	databases java
MASTER_SITES=	SF
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A pure Java alternative to RRDTool

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

CLASSES=	jrobin

NO_STAGE=	yes
do-install:
.for c in ${CLASSES}
	${INSTALL_DATA} ${DISTDIR}/${c}-${PORTVERSION}.jar ${JAVAJARDIR}/${c}.jar
	@${ECHO} '${JAVAJARDIR:S,^${PREFIX}/,,}/${c}.jar' >> ${TMPPLIST}
.endfor

.include <bsd.port.mk>
