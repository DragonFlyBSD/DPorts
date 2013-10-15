# Created by: Pietro Cerutti <gahr@gahr.ch>
# $FreeBSD: textproc/scew/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	scew
PORTVERSION=	1.1.4
CATEGORIES=	textproc
MASTER_SITES=	SAVANNAH/${PORTNAME}/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Simple C Expat Wrapper

LIB_DEPENDS=	expat:${PORTSDIR}/textproc/expat2

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USES=		pathfix
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

SCEW_EXAMPLES=	print stream write

NO_STAGE=	yes
post-install:
.for ex in ${SCEW_EXAMPLES}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/${PORTNAME}_${ex}/${PORTNAME}_${ex} ${PREFIX}/bin
.endfor

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not compile on powerpc
.endif

.include <bsd.port.post.mk>
