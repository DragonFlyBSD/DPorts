# New ports collection makefile for:	delatt
# Date created:				22 Jun 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/mail/delatt/Makefile,v 1.12 2012/11/17 05:59:01 svnexp Exp $
#

PORTNAME=	delatt
DISTVERSION=	1.1.3
CATEGORIES=	mail
MASTER_SITES=	http://danborn.net/delatt/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Strip attachments from email

LICENSE=	GPLv2

RUN_DEPENDS=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64

USE_PERL5_RUN=	5.8.6+
NO_BUILD=	yes

PLIST_FILES=	bin/delatt

post-patch:
	${REINPLACE_CMD} -e 's|^#!/usr/bin/perl|#!${PERL}|' \
		${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
