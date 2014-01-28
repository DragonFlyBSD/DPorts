# Created by: Patrick Doane <patrick@watson.org>
# $FreeBSD: devel/ocamlweb/Makefile 340722 2014-01-22 17:00:46Z mat $

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
