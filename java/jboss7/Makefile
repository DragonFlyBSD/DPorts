# Created by: Alexander Yerenkow <yerenkow@gmail.com>
# $FreeBSD: ports/java/jboss7/Makefile,v 1.2 2012/11/17 05:58:44 svnexp Exp $

PORTNAME=	jboss
PORTVERSION=	${JBOSS_BRANCH}.1
CATEGORIES=	java www
MASTER_SITES=	http://download.jboss.org/jbossas/${JBOSS_BRANCH}/${DISTNAME}/
PKGNAMESUFFIX=	-as
DISTNAME=	jboss-as-${PORTVERSION}.Final

MAINTAINER=	yerenkow@gmail.com

LICENSE=	LGPL21

COMMENT=	JBoss AS 7.1.1.Final Brontes

JBOSS_MAJOR=	7
JBOSS_BRANCH=	${JBOSS_MAJOR}.1

USE_JAVA=	yes
JAVA_VERSION=	1.6+
USER=		www
GROUP=		www
DIST_SUBDIR=	${DISTNAME}
NO_BUILD=	yes
USE_GZIP=	yes

.include <bsd.port.pre.mk>

do-install:
	${MKDIR} ${PREFIX}/${DISTNAME} && cd ${WRKSRC} && ${FIND} . |\
		${CPIO} -pdmu -R ${USER}:${GROUP} ${PREFIX}/${DISTNAME}

.include <bsd.port.post.mk>
