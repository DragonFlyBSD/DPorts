# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: java/eclipse-datatools/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	datatools
PORTVERSION=	1.11
CATEGORIES=	java devel databases
MASTER_SITES=	${MASTER_SITE_ECLIPSE:S,/eclipse/downloads/drops/,/datatools/downloads/,}
MASTER_SITE_SUBDIR=	${PORTVERSION}
PKGNAMEPREFIX=	eclipse-
DISTNAME=	dtp-sdk_${PORTVERSION}
DIST_SUBDIR=	eclipse

MAINTAINER=	lioux@FreeBSD.org
COMMENT=	Data Tools Platform for the Eclipse IDE

RUN_DEPENDS=	eclipse:${PORTSDIR}/java/eclipse \
		${LOCALBASE}/share/eclipse/dropins/emf:${PORTSDIR}/java/eclipse-emf \
		${LOCALBASE}/share/eclipse/dropins/gef:${PORTSDIR}/java/eclipse-gef

LICENSE=	EPL

WRKSRC=		${WRKDIR}/eclipse
USE_ZIP=	yes

NO_STAGE=	yes
.include "${.CURDIR}/../eclipse/Makefile.plugins"

.include <bsd.port.mk>
