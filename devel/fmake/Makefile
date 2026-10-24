PORTNAME=	fmake
PORTVERSION=	r250982
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	LOCAL/crees/${PORTNAME}/ \
		http://www.bayofrum.net/dist/${PORTNAME}/

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Legacy FreeBSD pmake

LICENSE=	BSD3CLAUSE # UCB third clause nullified

PLIST_FILES=	bin/${PORTNAME} share/man/man1/${PORTNAME}.1.gz

MAKE_ARGS+=	PROG=fmake MAN=

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/make.1 \
		${STAGEDIR}${PREFIX}/share/man/man1/${PORTNAME}.1

post-patch:
.for F in cond job make suff proc dir main buf targ shell hash parse str util var for arch
	@${REINPLACE_CMD} -e '/^__FBSDID/d' ${WRKSRC}/${F}.c
.endfor

.include <bsd.port.mk>
