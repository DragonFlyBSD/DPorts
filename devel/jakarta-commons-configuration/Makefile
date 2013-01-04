# Created by: Herve Quiroz <hq@FreeBSD.org>
# $FreeBSD: ports/devel/jakarta-commons-configuration/Makefile,v 1.9 2012/12/10 11:29:54 svnexp Exp $

PORTNAME=	commons-configuration
PORTVERSION=	1.3
PORTREVISION=	2
CATEGORIES=	devel java
MASTER_SITES=	${MASTER_SITE_APACHE_COMMONS_BINARIES}
MASTER_SITE_SUBDIR=	${PORTNAME:S,commons-,,}
PKGNAMEPREFIX=	jakarta-

MAINTAINER=	hq@FreeBSD.org
COMMENT=	Java package for the reading of configuration/preferences files

RUN_DEPENDS=	${JAVALIBDIR}/commons-beanutils.jar:${PORTSDIR}/java/jakarta-commons-beanutils \
		${JAVALIBDIR}/commons-lang.jar:${PORTSDIR}/java/jakarta-commons-lang \
		${JAVALIBDIR}/commons-logging.jar:${PORTSDIR}/java/jakarta-commons-logging

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

.if !defined(NOPORTDOCS)
PORTDOCS=	*
.endif
PLIST_FILES+=	%%JAVAJARDIR%%/${PORTNAME}.jar

.include <bsd.port.pre.mk>

do-install:
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}-${PORTVERSION}.jar ${JAVAJARDIR}/${PORTNAME}.jar
.if !defined(NOPORTDOCS)
	cd ${WRKSRC}/docs && ${FIND} . -type d -exec ${MKDIR} ${DOCSDIR}/{} \;
	cd ${WRKSRC}/docs && ${FIND} . -type f -exec ${INSTALL_DATA} {} ${DOCSDIR}/{} \;
.endif

.include <bsd.port.post.mk>
