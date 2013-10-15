# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: lang/ocaml-examples/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	ocaml
PORTVERSION=	3.12
CATEGORIES=	lang
MASTER_SITES=	http://cristal.inria.fr/caml_examples/
PKGNAMESUFFIX=	-examples
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Example programs for the Objective Caml

NO_BUILD=	yes

NO_STAGE=	yes
do-install:
.ifndef		NOPORTEXAMPLES
	@${MKDIR} ${EXAMPLESDIR}
	@${TAR} -cf- -C ${WRKSRC} --exclude Imakefile . | \
		${TAR} -xf- -C ${EXAMPLESDIR}
	@${FIND} ${EXAMPLESDIR} -type f -exec ${CHMOD} ${SHAREMODE} {} \;
	@${FIND} ${EXAMPLESDIR} -exec ${CHOWN} ${SHAREOWN} {} \;
.endif

.include <bsd.port.mk>
