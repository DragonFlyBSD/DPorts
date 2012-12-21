# New ports collection makefile for:    jadetex
# Date created:         5 December 1998
# Whom:                 Sean Kelly <kelly@ad1440.net>
#
# $FreeBSD: ports/print/jadetex/Makefile,v 1.42 2012/11/17 06:00:51 svnexp Exp $
#

PORTNAME=	jadetex
PORTVERSION=	3.13
PORTREVISION=	8
CATEGORIES=	print
MASTER_SITES=	SF

MAINTAINER=	doceng@FreeBSD.org
COMMENT=	A TeX backend for Jade, for typesetting SGML documents

BUILD_DEPENDS=	etex:${PORTSDIR}/print/teTeX-base
LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png
RUN_DEPENDS=	etex:${PORTSDIR}/print/teTeX-base

MAKE_JOBS_UNSAFE=	yes
MAKE_ENV=	TEXMFCNF=${FILESDIR}:${TEXMFDIR}/web2c

PLIST_SUB=	TEXMFDIR=share/texmf

MAN1=		jadetex.1 pdfjadetex.1

TEXMFDIR?=	${LOCALBASE}/share/texmf

do-install:
	${MKDIR} -m 555 ${TEXMFDIR}/tex/jadetex
	cd ${WRKSRC} && \
	  ${INSTALL_DATA} jadetex.fmt pdfjadetex.fmt ${TEXMFDIR}/web2c && \
	  ${INSTALL_DATA} dsssl.def jadetex.ltx ${TEXMFDIR}/tex/jadetex && \
	  ${INSTALL_MAN} ${MAN1} ${PREFIX}/man/man1
	${LN} -sf ${LOCALBASE}/bin/etex ${PREFIX}/bin/jadetex
	${LN} -sf ${LOCALBASE}/bin/pdfetex ${PREFIX}/bin/pdfjadetex

post-install:
	${LOCALBASE}/bin/mktexlsr ${TEXMFDIR}

.include <bsd.port.mk>
