# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: mail/biabam/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	biabam
PORTVERSION=	0.9.7
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	http://www.bayofrum.net/dist/${PORTNAME}/

MAINTAINER=	crees@FreeBSD.org
COMMENT=	A command-line attachment mailer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

NO_BUILD=	yes
PLIST_FILES=	bin/biabam
USES=		shebangfix
SHEBANG_FILES=${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/biabam ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
