# Created by: Chris D. Faulhaber <jedgar@fxp.org>
# $FreeBSD: www/demoroniser/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	demoroniser
PORTVERSION=	1.0.20030916
CATEGORIES=	www
MASTER_SITES=	http://www.fourmilab.ch/webtools/demoroniser/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=jedgar
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Correct moronic and gratuitously incompatible HTML from MS applications

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

MAN1=		demoroniser.1
PLIST_FILES=	bin/demoroniser

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/demoroniser.pl ${PREFIX}/bin/demoroniser
	${INSTALL_MAN} ${WRKDIR}/demoroniser.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
