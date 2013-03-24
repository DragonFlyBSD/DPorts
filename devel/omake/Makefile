# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: ports/devel/omake/Makefile,v 1.14 2012/12/13 07:08:00 svnexp Exp $

PORTNAME=	omake
PORTVERSION=	${OMVERSION}rc1
CATEGORIES=	devel
MASTER_SITES=	http://main.metaprl.org/download/omake/
DISTNAME=	${PORTNAME}-${OMVERSION}-0.rc1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A flexible build system

OMVERSION=	0.9.8.6
WRKSRC=		${WRKDIR}/${PORTNAME}-${OMVERSION}
USE_OCAML=	yes
NO_OCAML_RUNDEPENDS=yes
USE_NCURSES=	yes
USE_READLINE=	yes
MAKE_JOBS_UNSAFE=	yes

INFO=		omake-doc

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not build on powerpc
.endif

post-patch:
#
# Dirty hack for PREFIX safety
#
	@${REINPLACE_CMD} -E -e \
		's|(getenv[[:space:]]+)LIBDIR|\1PREFLIBDIR|' ${WRKSRC}/mk/defaults

#
# Permissions safety
#
.for f in OMakefile doc/OMakefile src/main/OMakefile
	@${REINPLACE_CMD} -e \
		's|cp -f -m 444|$$(BSD_INSTALL_DATA)| ; \
		 s|cp -f -m 555|$$(BSD_INSTALL_PROGRAM)|' ${WRKSRC}/${f}
.endfor

post-install:
	@(cd ${WRKSRC}/doc/info \
		&& ${INSTALL_DATA} omake-doc.info ${PREFIX}/${INFO_PATH})
	@(cd ${WRKSRC}/doc/info \
		&& ${INSTALL_DATA} omake-doc.info-* ${PREFIX}/${INFO_PATH})
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/doc/html && ${COPYTREE_SHARE} . ${DOCSDIR})
.endif

.include <bsd.port.post.mk>
