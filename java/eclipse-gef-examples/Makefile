# Created by: olgeni@FreeBSD.org
# $FreeBSD: java/eclipse-gef-examples/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gef
PORTVERSION=	3.0
PORTREVISION=	6
CATEGORIES=	java devel
MASTER_SITES=	http://download.eclipse.org/tools/gef/downloads/drops/R-3.0-200406251257/
PKGNAMEPREFIX=	eclipse-
PKGNAMESUFFIX=	-examples
DISTNAME=	GEF-examples-${PORTVERSION}
DIST_SUBDIR=	eclipse

MAINTAINER=	freebsd-eclipse@FreeBSD.org
COMMENT=	Graphical Editing Framework for the Eclipse IDE (examples)

RUN_DEPENDS=    ${LOCALBASE}/bin/eclipse:${PORTSDIR}/java/eclipse

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USE_ZIP=	yes

NO_STAGE=	yes
do-install:
		@${MKDIR} ${PREFIX}/lib/eclipse
		@${CP} -r ${WRKSRC}/eclipse/plugins ${PREFIX}/lib/eclipse
		@${CP} -r ${WRKSRC}/eclipse/features ${PREFIX}/lib/eclipse

.include <bsd.port.mk>
