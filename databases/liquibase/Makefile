# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/databases/liquibase/Makefile,v 1.1 2013/02/12 11:36:48 svnexp Exp $

PORTNAME=	liquibase
PORTVERSION=	2.0.5
CATEGORIES=	databases java
MASTER_SITES=	http://cloud.github.com/downloads/liquibase/liquibase/
DISTFILES=	${PORTNAME}-${PORTVERSION}-bin${EXTRACT_SUFX}

MAINTAINER=	gslin@gslin.org
COMMENT=	Database Change Management

LICENSE=	AL2

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USE_JAVA=	yes

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/liquibase.jar ${DATADIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/liquibase ${PREFIX}/bin/

.include <bsd.port.mk>
