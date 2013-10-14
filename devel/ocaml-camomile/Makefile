# Created by: ijliao
# $FreeBSD: devel/ocaml-camomile/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	camomile
PORTVERSION=	0.8.3
CATEGORIES=	devel
MASTER_SITES=	SF
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	michael.grunewald@laposte.net
COMMENT=	A comprehensive Unicode library for objective caml language

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_OCAML=	yes
USE_OCAML_FINDLIB=yes
USE_OCAML_LDCONFIG=yes
USE_OCAML_WASH=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes

DOCSDIR=	${PREFIX}/share/doc/ocaml/${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/ocaml/${PORTNAME}

NO_STAGE=	yes
post-install:
	@${FIND} ${DATADIR} ! -type d | \
		${SED} 's,^${PREFIX}/,,' >> ${TMPPLIST}
	@${FIND} ${DATADIR} -type d | ${SORT} -r | \
		${SED} 's,^${PREFIX}/,@dirrm ,' >> ${TMPPLIST}
	@${FIND} ${OCAMLFIND_DESTDIR}/${PORTNAME} ! -type d | \
		${SED} 's,^${PREFIX}/,,' >> ${TMPPLIST}
	@${FIND} ${OCAMLFIND_DESTDIR}/${PORTNAME} -type d | ${SORT} -r | \
		${SED} 's,^${PREFIX}/,@dirrm ,' >> ${TMPPLIST}

.include <bsd.port.mk>
