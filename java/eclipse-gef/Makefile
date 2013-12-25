# Created by: olgeni@FreeBSD.org
# $FreeBSD: java/eclipse-gef/Makefile 327738 2013-09-20 19:48:32Z bapt $

PORTNAME=	gef
PORTVERSION=	3.7.2
CATEGORIES=	java devel
MASTER_SITES=	${MASTER_SITE_ECLIPSE:S,/eclipse/downloads/drops/,/tools/gef/downloads/drops/,}
MASTER_SITE_SUBDIR=	${PORTVERSION}/R201201171043
PKGNAMEPREFIX=	eclipse-
DISTNAME=	GEF-ALL-${PORTVERSION}
DIST_SUBDIR=	eclipse

MAINTAINER=	zhoushuqun@gmail.com
COMMENT=	Graphical Editing Framework for the Eclipse IDE

RUN_DEPENDS=	eclipse:${PORTSDIR}/java/eclipse

WRKSRC=		${WRKDIR}/eclipse
USE_ZIP=	yes

NO_STAGE=	yes
.include "${.CURDIR}/../eclipse/Makefile.plugins"

.include <bsd.port.mk>
