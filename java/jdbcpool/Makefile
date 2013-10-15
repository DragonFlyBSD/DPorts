# Created by: Jose Marques
# $FreeBSD: java/jdbcpool/Makefile 327738 2013-09-20 19:48:32Z bapt $

PORTNAME=	jdbcpool
PORTVERSION=	0.99
PORTREVISION=	3
CATEGORIES=	java databases
MASTER_SITES=	http://www.bitmechanic.com/projects/jdbcpool/dist/

MAINTAINER=	java@FreeBSD.org
COMMENT=	JDBC connection pool

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

PORTDOCS=	CHANGES LICENSE README
.if !defined(NOPORTDOCS)
PORTDOCS+=	javadoc
.endif

NO_STAGE=	yes
post-extract:
	@${FIND} ${WRKSRC} -name CVS -type dir | ${XARGS} ${RM} -rf

do-install:
	${INSTALL_DATA} ${WRKSRC}/${DISTNAME}.jar ${JAVAJARDIR}/${PORTNAME}.jar
	cd ${WRKSRC}/examples \
	  && ${FIND} . -type d -exec ${MKDIR} ${EXAMPLESDIR}/{} \; \
	  && ${FIND} . -type f -exec ${INSTALL_DATA} {} ${EXAMPLESDIR}/{} \;
	cd ${WRKSRC} \
	  && ${FIND} ${PORTDOCS} -type d -exec ${MKDIR} ${DOCSDIR}/{} \; \
	  && ${FIND} ${PORTDOCS} -type f -exec ${INSTALL_DATA} {} ${DOCSDIR}/{} \;

.include <bsd.port.mk>
