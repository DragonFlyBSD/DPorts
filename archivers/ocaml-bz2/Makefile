# Created by: Jaap Boender <jaapb@kerguelen.org>
# $FreeBSD: archivers/ocaml-bz2/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	bz2
PORTVERSION=	0.6.0
PORTREVISION=	1
CATEGORIES=	archivers
MASTER_SITES=	http://forge.ocamlcore.org/frs/download.php/72/
PKGNAMEPREFIX=	ocaml-
DISTNAME=	caml${PORTNAME}-${PORTVERSION}

MAINTAINER=	jaapb@kerguelen.org
COMMENT=	OCaml library to manipulate bz2 files

GNU_CONFIGURE=	yes
USES=		gmake
NO_STAGE=	yes

USE_OCAML=		yes
USE_OCAML_LDCONFIG=	yes
USE_OCAML_WASH=		yes
USE_OCAML_FINDLIB=	yes
USE_OCAMLFIND_PLIST=	yes

PORTDOCS=	*

.include <bsd.port.pre.mk>

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
	(cd ${WRKSRC}/doc && ${COPYTREE_SHARE} \* ${DOCSDIR})
.endif

.include <bsd.port.post.mk>
