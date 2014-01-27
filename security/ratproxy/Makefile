# Created by: Steven Kreuzer <skreuzer@exit2shell.com>
# $FreeBSD: security/ratproxy/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ratproxy
PORTVERSION=	1.58
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Semi-automated, largely passive web application security audit tool

USE_OPENSSL=	YES
WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	bin/ratproxy \
		bin/ratproxy-report.sh

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's#-Wno-pointer-sign##g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ratproxy ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/ratproxy-report.sh ${PREFIX}/bin

.include <bsd.port.mk>
