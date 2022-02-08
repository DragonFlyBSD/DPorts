PORTNAME=	cxx_atomics_pic
DISTNAME=	gcc-${PORTVERSION}
PORTVERSION=	11.2.0
CATEGORIES=	misc
MASTER_SITES=	GCC
PKGNAMESUFFIX=	${SUFFIX}

MAINTAINER=	zrj@ef.irc
COMMENT=	Atomics from GNU Compiler Collection 11

LICENSE=	GPLv3RLE

USES=		compiler gmake libtool perl5 tar:xz
USE_PERL5=	build

GNU_CONFIGURE=	yes

WRKSRC_SUBDIR=	libatomic

CONFIGURE_TARGET=	x86_64-portbld-${OPSYS:tl}${OSREL}

CONFIGURE_ARGS+=	--disable-multilib --disable-cet \
			--disable-shared --with-pic
CFLAGS=		-fPIC -DHAVE_IFUNC

PLIST_FILES=	cxx_atomics_pic/libatomic_pic.a

post-patch:
	${REINPLACE_CMD} -e '/$${multi_basedir}\/config-ml.in/d' \
		${WRKSRC}/configure
	${CP} -f ${WRKSRC}/config/x86/init.c ${WRKSRC}/init.c

post-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/cxx_atomics_pic
	${MV} -v ${STAGEDIR}${PREFIX}/lib/libatomic.a \
		 ${STAGEDIR}${PREFIX}/cxx_atomics_pic/libatomic_pic.a

.include <bsd.port.mk>
