
PORTNAME=	gnuelf
PORTVERSION=	0.8.13
CATEGORIES=	devel
DISTNAME=	libelf-${PORTVERSION}
MASTER_SITES=	https://fossies.org/linux/misc/old/ \
		SUNSITE/libs
PKGNAMESUFFIX?= -legacy

MAINTAINER=	zrj@efnet.irc
COMMENT=	Public ELF file access library similar to libelf(3) in Solaris

LICENSE=	LGPL20

USES=		desthack pathfix

GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--enable-shared --disable-compat --disable-nls

OPTIONS_DEFINE=		EXTENDED SANITY
OPTIONS_DEFAULT=	EXTENDED SANITY

EXTENDED_DESC=	ELF format extensions
SANITY_DESC=	Avoid loading invalid ELF files

EXTENDED_CONFIGURE_ENABLE=	extended-format
EXTENDED_CONFIGURE_OFF=		extended-format
SANITY_CONFIGURE_ENABLE=	sanity-checks
SANITY_CONFIGURE_OFF=		sanity-checks

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libelf-legacy/include
	${MKDIR} ${STAGEDIR}${PREFIX}/libelf-legacy/lib
	${MV} ${STAGEDIR}${PREFIX}/include/libelf \
		${STAGEDIR}${PREFIX}/libelf-legacy/include/
	${MV} ${STAGEDIR}${PREFIX}/lib/libelf* \
		${STAGEDIR}${PREFIX}/libelf-legacy/lib/
	${RM} ${STAGEDIR}${PREFIX}/libdata/pkgconfig/libelf.pc

.include <bsd.port.mk>
