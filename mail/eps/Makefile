PORTNAME=	eps
PORTVERSION=	1.7
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	SF/${PORTNAME}inter7/${PORTNAME}inter7/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Email Parsing System
WWW=		https://www.inter7.com/index.php?page=eps

BROKEN_aarch64=		fails to link: can't create dynamic relocation R_AARCH64_ABS64 against symbol: content_prefs in readonly segment
BROKEN_riscv64=		fails to link: can't create dynamic relocation R_RISCV_HI20 against symbol: .Lswitch.table.content_parse in readonly segment

OPTIONS_DEFINE=	DOCS

USE_CSTD=	gnu89

CFLAGS_x86_64=	-fPIC
CFLAGS_armv7=	-fPIC
CFLAGS_i386=	-fPIC
CFLAGS_powerpc=		-fPIC
CFLAGS_powerpc64=	-fPIC
CFLAGS_powerpc64le=	-fPIC
CFLAGS_powerpcspe=	-fPIC

PORTDOCS=	howto

MAKE_ENV+=	DEFS="${CFLAGS}"

post-patch:
	@${REINPLACE_CMD} -e 's|^CC =|CC \?=|' \
			  -e 's|^DEFS =|DEFS \?=|' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_DATA} ${WRKSRC}/libeps.a ${STAGEDIR}${PREFIX}/lib
	${MKDIR} ${STAGEDIR}${PREFIX}/include/eps
	${INSTALL_DATA} ${WRKSRC}/*.h ${STAGEDIR}${PREFIX}/include/eps
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
