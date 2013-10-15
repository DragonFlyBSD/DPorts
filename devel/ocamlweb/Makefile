# Created by: Patrick Doane <patrick@watson.org>
# $FreeBSD: devel/ocamlweb/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	ocamlweb
PORTVERSION=	1.34
PORTREVISION=	5
CATEGORIES=	devel
MASTER_SITES=	http://www.lri.fr/~filliatr/ftp/ocamlweb/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${PORTDOCS}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	A literate programming tool for Objective Caml

BUILD_DEPENDS=	ocamlc:${PORTSDIR}/lang/ocaml

USE_TEX=	latex
GNU_CONFIGURE= yes
PLIST_SUB+=	TEXMFDIR=${TEXMFDIR} \
		MKTEXLSR=${MKTEXLSR}

TEXMFDIR?=	share/texmf
MKTEXLSR?=	${LOCALBASE}/bin/mktexlsr

.if !defined(NOPORTDOCS)
PORTDOCS=	${PORTNAME}-${PORTVERSION}-man.ps.gz
.endif

MAN1=		ocamlweb.1

NO_STAGE=	yes
post-install:
	${MKTEXLSR} ${PREFIX}/${TEXMFDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${DISTDIR}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
