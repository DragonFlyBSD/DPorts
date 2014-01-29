# Created by: Nicola Vitale	<nivit@FreeBSD.org>
# $FreeBSD: java/eclipse-aptana/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	aptana
PORTVERSION=	1.2.2.024747
PORTREVISION=	2
PORTEPOCH=	1
CATEGORIES=	java devel
MASTER_SITES=	http://update1.aptana.org/studio/3.2/024747/
PKGNAMEPREFIX=	eclipse-
DISTNAME=	aptana_update_${PORTVERSION:E}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Aptana Web Development Tools (Eclipse plugin)

RUN_DEPENDS=	${LOCALBASE}/bin/eclipse:${PORTSDIR}/java/eclipse

CONFLICTS_INSTALL=	eclipse-aptana-[2-9]*

JAVA_VERSION=	1.6+

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

USE_JAVA=	yes
USE_ZIP=	yes

NO_STAGE=	yes
do-install:
	@(cd ${WRKDIR} && ${CP} -R features ${PREFIX}/lib/eclipse && ${CP} -R plugins ${PREFIX}/lib/eclipse;)

.include <bsd.port.mk>
