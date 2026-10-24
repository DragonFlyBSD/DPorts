PORTNAME=	canna
PORTVERSION=	3.8
CATEGORIES=	japanese
MASTER_SITES=	https://github.com/canna-input/canna/releases/download/release-${PORTVERSION}/
PKGNAMESUFFIX=	-lib
DISTNAME=	Canna${PORTVERSION:S/.//g}

MAINTAINER=	mce@FreeBSD.org
COMMENT=	Kana-to-Kanji conversion system, library part
WWW=		https://canna-input.github.io/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		imake:notall,noman tar:xz
USE_LDCONFIG=	yes

MAKE_JOBS_UNSAFE=	yes
ALL_TARGET=	canna
INSTALL_TARGET=	instsgs

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/lib*.so.1

post-patch:
	@${REINPLACE_CMD} -e 's|__FreeBSD|__DragonFly|g' \
		-e 's|500000|300000|g' \
		${WRKSRC}/canna/widedef.h \
		${WRKSRC}/canna/protodefs.h \
		${WRKSRC}/ccustom/lex.l \
		${WRKSRC}/ccustom/ccustom.c

.include <bsd.port.mk>
