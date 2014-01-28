# Created by: Jaap Boender <jaapb@kerguelen.org>
# $FreeBSD: security/ocaml-ssl/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ssl
PORTVERSION=	0.4.6
CATEGORIES=	security devel
MASTER_SITES=	SF/savonet/ocaml-${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	ocaml-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}

MAINTAINER=	jaapb@kerguelen.org
COMMENT=	OpenSSL bindings for OCaml

DOCSDIR=	${PREFIX}/share/doc/ocaml/${PORTNAME}
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--docdir=${DOCSDIR}
MAKE_JOBS_UNSAFE=	yes

USE_OPENSSL=		yes
USE_OCAML=		yes
USE_OCAML_FINDLIB=	yes
USE_OCAML_LDCONFIG=	yes
USE_OCAMLFIND_PLIST=	yes

ALL_TARGET=	all doc

.if !defined(NOPORTDOCS)
PORTDOCS=	*
.endif

NO_STAGE=	yes
.include <bsd.port.pre.mk>

post-extract:
# For nonstandard prefixes
.if !exists(${OCAMLFIND_DESTDIR})
	${MKDIR} ${OCAMLFIND_DESTDIR}
.endif
.if !exists(${OCAMLFIND_LDCONF})
	${TOUCH} ${OCAMLFIND_LDCONF}
.endif

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}/html
	${INSTALL_MAN} ${WRKSRC}/doc/html/* ${DOCSDIR}/html
.endif

.include <bsd.port.post.mk>
