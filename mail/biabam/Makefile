# New ports collection makefile for:	biabam
# Date created:		03 January 2001
# Whom:			George Reid <greid@ukug.uk.freebsd.org>
#
# $FreeBSD: ports/mail/biabam/Makefile,v 1.17 2012/11/17 05:58:59 svnexp Exp $
#

PORTNAME=	biabam
PORTVERSION=	0.9.7
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	http://www.bayofrum.net/dist/${PORTNAME}/

MAINTAINER=	crees@FreeBSD.org
COMMENT=	A command-line attachment mailer

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

NO_BUILD=	yes
PLIST_FILES=	bin/biabam

post-patch:
	@${REINPLACE_CMD} -e '1s|\(#!\)\(/bin/bash\)|\1${LOCALBASE}\2|' \
		${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/biabam ${PREFIX}/bin

.include <bsd.port.mk>
