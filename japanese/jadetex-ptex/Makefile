# Created by: Hiroki Sato <hrs@FreeBSD.org>
# $FreeBSD: japanese/jadetex-ptex/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	jadetex
PORTVERSION=	3.13
PORTREVISION=	10
CATEGORIES=	japanese print
MASTER_SITES=	SF
PKGNAMESUFFIX=	-ptex
DISTNAME=	jadetex-${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	A pTeX backend for Jade, for typesetting SGML documents

BUILD_DEPENDS=	ptex:${PORTSDIR}/japanese/ptex
LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png
RUN_DEPENDS=	ptex:${PORTSDIR}/japanese/ptex

PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES=	pkg-message

PLIST_SUB=	PKGNAMESUFFIX=${PKGNAMESUFFIX} \
		MKTEXLSR=${MKTEXLSR} \
		TEXMFDIR=${TEXMFDIR} \
		TEXMFLOCALDIR=${TEXMFLOCALDIR}

MKTEXLSR=	${LOCALBASE}/bin/mktexlsr
TEXMFDIR=	share/texmf
TEXMFLOCALDIR=	share/texmf-local

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}${PKGNAMESUFFIX}
	${INSTALL_MAN} ${WRKSRC}/README.jadetex-ptex ${DOCSDIR}${PKGNAMESUFFIX}/
.endif
	${LOCALBASE}/bin/mktexlsr ${LOCALBASE}/${TEXMFDIR}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
