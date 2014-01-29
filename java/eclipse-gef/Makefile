# Created by: olgeni@FreeBSD.org
# $FreeBSD: java/eclipse-gef/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gef
PORTVERSION=	3.7.2
CATEGORIES=	java devel
MASTER_SITES=	http://archive.eclipse.org/tools/gef/downloads/drops/%SUBDIR%/
MASTER_SITE_SUBDIR=	${PORTVERSION}/R201201171043
PKGNAMEPREFIX=	eclipse-
DISTNAME=	GEF-ALL-${PORTVERSION}
DIST_SUBDIR=	eclipse

MAINTAINER=	zhoushuqun@gmail.com
COMMENT=	Graphical Editing Framework for the Eclipse IDE

RUN_DEPENDS=	eclipse:${PORTSDIR}/java/eclipse

WRKSRC=		${WRKDIR}/eclipse
USE_ZIP=	yes

.include "${.CURDIR}/../eclipse/Makefile.plugins"

.include <bsd.port.mk>
