# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: mail/delatt/Makefile 317591 2013-05-07 08:57:37Z ehaupt $

PORTNAME=	delatt
DISTVERSION=	1.1.3
CATEGORIES=	mail
MASTER_SITES=	http://danborn.net/delatt/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Strip attachments from email

LICENSE=	GPLv2

RUN_DEPENDS=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64

USES=		shebangfix
USE_PERL5_RUN=	yes
NO_BUILD=	yes

SHEBANG_FILES=	delatt
PLIST_FILES=	bin/delatt

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
