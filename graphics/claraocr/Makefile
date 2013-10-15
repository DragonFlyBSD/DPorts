# Created by: petef
# $FreeBSD: graphics/claraocr/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	claraocr
PORTVERSION=	20031214
PORTREVISION=	4
CATEGORIES=	graphics accessibility
MASTER_SITES=	GENTOO
MASTER_SITE_SUBDIR=distfiles
DISTNAME=	clara-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Optical character recognition (OCR) utility

RUN_DEPENDS=	pnmenlarge:${PORTSDIR}/graphics/netpbm

USES=		shebangfix perl5
USE_XORG=	x11
MAKE_ENV=	MKDIR="${MKDIR}"

SHEBANG_FILES=	clara.pl mkdoc.pl selthresh

MAN1=	clara-adv.1 clara-dev.1 clara.1 selthresh.1

NO_STAGE=	yes
post-install:
	${INSTALL_DATA} ${WRKSRC}/selthresh.1 ${MAN1PREFIX}/man/man1/

.include <bsd.port.mk>
