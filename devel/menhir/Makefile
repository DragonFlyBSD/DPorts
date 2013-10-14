# Created by: Jaap Boender <jaapb@kerguelen.org>
# $FreeBSD: devel/menhir/Makefile 328748 2013-09-29 22:03:41Z antoine $

PORTNAME=	menhir
PORTVERSION=	20080912
CATEGORIES=	devel
MASTER_SITES=	http://cristal.inria.fr/~fpottier/menhir/

MAINTAINER=	jaapb@kerguelen.org
COMMENT=	LR(1) parser generator for OCaml

USES=		gmake
USE_OCAML=	yes
USE_OCAML_FINDLIB=	yes
USE_OCAMLFIND_PLIST=	yes
OCAML_PKGDIRS=		menhirLib

INSTALL_TARGET=	install
MAKE_ENV+=	mandir="${MANPREFIX}/man/man1"
MAKE_JOBS_UNSAFE=	yes
MAN1=		menhir.1

.if !defined(NOPORTDOCS)
INSTALL_TARGET+=	docinstall
DOCSDIR=	${PREFIX}/share/doc/ocaml/${PORTNAME}
MAKE_ENV+=	docdir="${DOCSDIR}"
.endif

NO_STAGE=	yes
.include <bsd.port.mk>
