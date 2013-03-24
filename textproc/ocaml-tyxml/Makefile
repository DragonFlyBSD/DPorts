# New ports collection makefile for:	ocaml-tyxml
# Date created:				December 14, 2011
# Whom:					Jaap Boender <jaapb@kerguelen.org>
#
# $FreeBSD: ports/textproc/ocaml-tyxml/Makefile,v 1.2 2012/11/17 06:02:03 svnexp Exp $

PORTNAME=	tyxml
PORTVERSION=	2.2.0
CATEGORIES=	textproc
MASTER_SITES=	http://ocsigen.org/download/
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	jaapb@kerguelen.org
COMMENT=	OCaml XML typing library

USE_GMAKE=		yes

USE_OCAML=		yes
USE_OCAML_FINDLIB=	yes
USE_OCAML_LDCONFIG=	yes
USE_OCAMLFIND_PLIST=	yes

SA_DIR=			${LOCALBASE}/${OCAML_SITELIBDIR}

BUILD_DEPENDS+=		ocaml-net>=3.6:${PORTSDIR}/www/ocaml-net
RUN_DEPENDS+=		ocaml-net>=3.6:${PORTSDIR}/www/ocaml-net

.include <bsd.port.pre.mk>

post-extract:
# For nonstandard prefixes
.if !exists(${OCAMLFIND_DESTDIR})
	${MKDIR} ${OCAMLFIND_DESTDIR}
.endif
.if !exists(${OCAMLFIND_LDCONF})
	${TOUCH} ${OCAMLFIND_LDCONF}
.endif

.include <bsd.port.post.mk>
